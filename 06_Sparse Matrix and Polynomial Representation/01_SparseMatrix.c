#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    int j;
    int x;
};

struct sparse{
    int m;
    int n;
    int num; 
    struct element *e;
};

void display(struct sparse *s){
    int k = 0;
    for(int i = 0; i < s->m; i++){
        for(int j = 0; j < s->n; j++){
            if(i == s->e[k].i && j == s->e[k].j)
                printf("%d ", s->e[k++].x);
            else 
                printf("0 ");
        }
        printf("\n");
    }
}

struct sparse* add(struct sparse *s1, struct sparse *s2){
    struct sparse *sum = (struct sparse *)malloc(sizeof(struct sparse));
    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = s1->num + s2->num;
    sum->e = (struct element*)malloc(sum->num * sizeof(struct element));
    int i = 0, j = 0, k = 0;
    while(i < s1->num && j < s2->num){
        if(s1->e[i].i < s2->e[j].i)
            sum->e[k++] = s1->e[i++];
        else if(s1->e[i].i > s2->e[j].i)
            sum->e[k++] = s2->e[j++];
        else {
            if(s1->e[i].j < s2->e[j].j)
                sum->e[k++] = s1->e[i++];
            else if(s1->e[i].j > s2->e[j].j)
                sum->e[k++] = s2->e[j++];
            else {
                sum->e[k] = s1->e[i++];
                sum->e[k++].x += s2->e[j++].x;
            }
        }
    }
    for(;i < s1->num; i++) sum->e[k++] = s1->e[i++];
    for(;j < s2->num; j++) sum->e[k++] = s2->e[j++];
    return sum;
}
int main(){
    struct sparse s;
    printf("Number Of Dimension : ");
    scanf("%d%d", &s.m, &s.n);
    printf("Enter Number Of Non Zero : ");
    scanf("%d", &s.num);
    s.e = (struct element *)malloc(s.num * sizeof(struct element));
    for(int i = 0; i < s.num ; i++)
        scanf("%d%d%d", &s.e[i].i, &s.e[i].j, &s.e[i].x);

    struct sparse s2;
    printf("Number Of Dimension : ");
    scanf("%d%d", &s2.m, &s2.n);
    printf("Enter Number Of Non Zero : ");
    scanf("%d", &s2.num);
    s2.e = (struct element *)malloc(s2.num * sizeof(struct element));
    for(int i = 0; i < s2.num ; i++)
        scanf("%d%d%d", &s2.e[i].i, &s2.e[i].j, &s2.e[i].x);

    struct sparse *sum = add(&s, &s2);
    display(sum);

    
    return 0;
}
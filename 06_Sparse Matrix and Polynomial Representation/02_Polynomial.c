#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct term{
    int coeff;
    int exp;
};

struct poly{
    int n;
    struct term *t;
};

void creat(struct poly *p){
    printf("Enter Number Of Non Zero : ");
    scanf("%d", &p->n);
    p->t = (struct term *)malloc(p->n * sizeof(struct term));
    printf("Enter Poly Term \n");
    for(int i = 0; i < p->n ; i++){
        printf("Term #no %d: ", i+1);
        scanf("%d%d", &p->t[i].coeff, &p->t[i].exp);
    }
}

void display(struct poly *p){
    for (int i = 0; i < p->n ; i++){
        printf("%dx%d", p->t[i].coeff, p->t[i].exp);
        if(i != p->n - 1){
            printf(" + ");
        }
    }
    printf("\n");
}

struct poly* add(struct poly *p1, struct poly *p2){
    struct poly *p3;
    p3 = (struct poly*)malloc(sizeof(struct poly));
    p3->n = p1->n + p2->n;
    p3->t = (struct term *)malloc(p3->n * sizeof(struct term));
    int i = 0, j = 0, k = 0;
    while(i < p1->n && j < p2->n){
        if(p1->t[i].exp > p2->t[j].exp)
                p3->t[k++] = p1->t[i++];
        else if(p1->t[i].exp < p2->t[j].exp)
                p3->t[k++] = p2->t[j++];
        else {
            p3->t[k].exp = p1->t[i].exp;
            p3->t[k++].coeff = p1->t[i++].coeff + p2->t[j++].coeff;
        }
    }
    for(;i<p1->n; i++) p3->t[k++] = p1->t[i];
    for(;j<p2->n; j++) p3->t[k++] = p2->t[j];
    p3->n = k;
    return p3;
}

int evalu(struct poly *p, int x){
    int sum = 0;
    for(int i = 0; i < p->n ; i++)
            sum += p->t[i].coeff * pow(x, p->t[i].exp);
    return sum;
}
int main(){
    struct poly p1;
    creat(&p1);
    display(&p1);
    printf("\n");
    struct poly p2;
    creat(&p2);
    display(&p2);
    printf("\n");

    printf("Eval 1 = %d\n", evalu(&p1, 4));
    printf("Eval 2 = %d\n", evalu(&p2, 1));

    printf("\n");
    struct poly *p;
    p = add(&p1, &p2);
    display(p);
    return 0;
}

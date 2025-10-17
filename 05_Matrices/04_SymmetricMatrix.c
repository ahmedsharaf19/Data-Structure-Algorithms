#include <stdio.h>
#include <stdlib.h>
int max(int x, int y){
    return x > y ? y : x;
}
void set(int A[], int i, int j, int x){
     A[max(i, j)] = x;
}

int get(int A[], int i, int j){
    return A[max(i, j)];
} 

void Display(int A[], int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                        printf("%d ", A[max(i, j)]);
            }
            printf("\n");
    }
}
int main(){
    int n;
    int *A;
    printf("Enter Number Of Element : ");
    scanf("%d", &n);
    A = (int *)malloc((n*(n+1)) / 2 * sizeof(int));
    printf("Enter Elemtn Element: ");
    for(int i = 0; i < (n*(n+1)) / 2; i++){
        scanf("%d", &A[i]);
    }
    int i, j, x;
    printf("Enter Index And Element To Set : ");
    scanf("%d%d%d", &i, &j, &x);
    set(A, i, j, x);
    Display(A, n);
    printf("Enter index To Get : ");
    scanf("%d%d", &i, &j);
    printf("Element Is : %d\n", get(A, i, j));

    return 0;
}
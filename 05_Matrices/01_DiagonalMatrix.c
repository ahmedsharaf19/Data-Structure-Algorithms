#include <stdio.h>
#include <stdlib.h>
void set(int A[], int i, int j, int x){
    if(i==j) A[i] = x;
}

int get(int A[], int i, int j){
    if(i==j) return A[i];
    return 0;
} 

void Display(int A[], int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                    if(i == j) 
                        printf("%d ", A[i]);
                    else 
                        printf("0 ");
            }
            printf("\n");
    }
}
int main(){
    int n;
    int *A;
    printf("Enter Number Of Element : ");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
    printf("Enter Diagonal Element: ");
    for(int i = 0; i < n; i++){
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
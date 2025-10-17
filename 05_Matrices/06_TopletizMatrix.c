#include <stdio.h>
#include <stdlib.h>

void set(int A[], int i, int j, int x, int n){
    if (i <= j) A[j-i] = x;
    else if (i > j) A[n + (i-j-1)] = x;
}

int get(int A[], int i, int j, int n){
    if (i <= j) return A[j-i];
    else if (i > j) return A[n + (i-j-1)];
} 

void Display(int A[], int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                    if (i <= j) printf("%d ", A[j-i]);
                    else if (i > j) printf("%d ", A[n + (i-j-1)]);
            }
            printf("\n");
    }
}
int main(){
    int n;
    int *A;
    printf("Enter Number Of Element : ");
    scanf("%d", &n);
    A = (int *)malloc((2*n - 1) * sizeof(int));
    printf("Enter Non Zero Element: ");
    for(int i = 0; i < (2*n - 1); i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < (2*n - 1); i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
    int i, j, x;
    printf("Enter Index And Element To Set : ");
    scanf("%d%d%d", &i, &j, &x);
    set(A, i, j, x, n);
    Display(A, n);
    printf("Enter index To Get : ");
    scanf("%d%d", &i, &j);
    printf("Element Is : %d\n", get(A, i, j, n));

    return 0;
}
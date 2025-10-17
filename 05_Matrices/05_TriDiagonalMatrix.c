#include <stdio.h>
#include <stdlib.h>

void set(int A[], int i, int j, int x, int n){
    if(i-j == 1) A[i-1] = x;
    else if (i-j == 0) A[(n-1) + i] = x; 
    else if(i-j == -1) A[(2*n-1) + i] = x;
}

int get(int A[], int i, int j, int n){
    if(i-j == 1) return A[i-1];
    else if (i-j == 0) return A[(n-1) + i]; 
    else if(i-j == -1) return A[(2*n-1)+ i];
    return 0;
} 

void Display(int A[], int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                        if(i-j == 1) printf("%d ", A[i-1]);
                        else if (i-j == 0) printf("%d ", A[(n-1) + i]); 
                        else if(i-j == -1) printf("%d ", A[(2*n-1)+ i]);
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
    A = (int *)malloc((3*n - 2) * sizeof(int));
    printf("Enter Non Zero Element: ");
    for(int i = 0; i < (3*n - 2); i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < (3*n - 2); i++){
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
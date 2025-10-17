#include <stdio.h>
#include <stdlib.h>

struct  Array
{
    int *A;
    int size;
    int length;
};

void display(const struct  Array *a){
    printf("\t\t Elements \t\t \n");
    for (int i = 0; i < a->length; i++){
        printf("%d ", a->A[i]);
    }
    printf("\n");
}

void initialization(struct  Array *a){
    printf("Enter Number Of Elements: ");
    scanf("%d", &a->length);
    for (int i = 0; i < a->length ; i++){
        scanf("%d", &a->A[i]);
    }
}

void creatArray(struct Array *a){
    int s;
    printf("Enter Number Of Size: ");
    scanf("%d", &a->size);
    a->A = (int *)malloc(s * sizeof(int));
}
char checkSpace(const struct Array *a){
    if (a->length < a->size ) return 1;
    return 0;
}

void add(struct Array *a, int element){
    if (checkSpace(a)){
        a->A[a->length - 1] = element;
        a->length++; 
    }
    else {
        printf("Size == Length\n");
    }
}

void insert(struct Array *a, int idx, int element){
    if(checkSpace(a) && idx >= 0){
        for (int i = a->length; i > idx; i--){
                a->A[i] = a->A[i-1];
        }
        a->A[idx] = element;
        a->length++;
    }
    else {
        printf("Size == Length\n");
    }
}

int Delete(struct Array *a, int idx){
    int x = -2;
    if(checkSpace(a) && idx < a->length && idx >= 0){
        x = a->A[idx];
        for (int i = idx; i < a->length - 1; i++){
            a->A[i] = a->A[i+1];
        }
        a->length--;
    }   
    else {
        printf("Not Deleted!\n");
    }

    return x;
}

int linearSearch(const struct Array *a, int key){
    if(checkSpace(a)){
        for (int i = 0; i < a->length ; i++){
            if (key == a->A[i]) return i;
        }
    }
    return -1;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int linearSearchTrav(const struct Array *a, int key){
    if(checkSpace(a)){
        for (int i = 0; i < a->length ; i++){
            if (key == a->A[i]) {
                swap(&a->A[i-1], &a->A[i]);
                return i-1;
            }
        }
    }
    return -1;
}

int binarySearch(const struct Array *a, int l, int h, int key){
    int mid = 0;
    if(a->length != 0){
        while(l<=h){
            mid = (l+h) / 2;
            if (key == a->A[mid]) return mid;
            else if(key < a->A[mid]) h = mid - 1;
            else l = mid + 1;
        }
    }
    else {
        printf("Empty!\n");
    }
    return -1;
}

int RbinarySearch(const struct Array *a, int l, int h, int key){
    int mid = 0;
    if(a->length > 0){
        if(l <= h){
            mid = (l+h) / 2;
            if (key == a->A[mid]) return mid;
            else if(key < a->A[mid]) RbinarySearch(a, l, mid - 1, key);
            else RbinarySearch(a, mid + 1, h, key);
        }
    }
    else {
        printf("Empty!\n");
    }
    return -1;
}

int get(const struct Array *a, int idx){
    if(checkSpace(a)){
        if (idx >= 0 && idx < a->length)
            return a->A[idx];
    }
    return -1;
}

void set(struct Array *a, int idx, int element){
    if(checkSpace(a)){
        if (idx >= 0 && idx < a->length)
            a->A[idx] = element; 
    }
}

int sum(const struct Array *a){
    if (checkSpace(a)){
        int sum = 0;
        for (int i = 0; i < a->length ; i++)
            sum += a->A[i];
    }
    return -1;
}

double avg(const struct Array *a){
    if (checkSpace(a)){
        return (double)sum(a) / a->length;
    }
    return -1;
}

int max(const struct Array *a){
    if(checkSpace(a)){
        int max = a->A[0];
        for (int i = 1; i < a->length; i++){
            if (a->A[i] > max)
                max = a->A[i];
        }
        return max;
    }
    return -1;
}

int min(const struct Array *a){
    if(checkSpace(a)){
        int min = a->A[0];
        for (int i = 1; i < a->length; i++){
            if (a->A[i] < min)
                min = a->A[i];
        }
        return min;
    }
    return -1;
}

void reverse_V1(struct Array *a){
    int *B = (int *)malloc(a->length * sizeof(int));
    for (int i = 0, j = a->length-1; i < a->length ; i++, j--){
        B[i] = a->A[j];
    }
    for (int i = 0; i < a->length ; i++){
        a->A[i] = B[i];
    }
    free(B);
}

void reverse_V2(struct Array *a){
    for (int i = 0, j = a->length - 1; i < a->length; i++, j--){
            swap(&a->A[i], &a->A[j]);
    }
}

void insertSorted(struct Array *a, int element){
    int i = a->length - 1;
    while(a->A[i] > element){
        a->A[i+1] = a->A[i];
        i--;
    }
    a->A[i+1] = element;
}

char isSorted(const struct  Array *a){
    for (int i = 0; i < a->length - 1; i++){
        if (a->A[i] > a->A[i+1])
            return 0;
    }
    return 1;
}

void splitSide(struct Array *a){
    int i = 0;
    int j = a->length - 1;
    while(i < j){
        while (a->A[i] < 0) i++;
        while (a->A[j] > 0) j--;
        if(i < j) swap(&a->A[i], &a->A[j]);
    }
}

struct Array  merge(const struct Array *a, const struct Array *b){
    int i = 0, j = 0, k = 0;
    struct Array c;
    c.size = a->length + b->length;
    c.length = a->length + b->length;
    c.A = (int *)malloc(c.size * sizeof(int));

    while (i < a->length && j < b->length){
        if (a->A[i] < b->A[j])
            c.A[k++] =  a->A[i++];
        else 
            c.A[k++] = b->A[j++]; 
    }

    for (; i < a->length; i++) 
        c.A[k++] = a->A[i];
    
    for (; j < b->length; j++)
        c.A[k++] = b->A[j];
    
    return c;

}

int main(){
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    creatArray(&arr1);
    initialization(&arr1);
    display(&arr1);

    creatArray(&arr2);
    initialization(&arr2);
    display(&arr2);


    arr3 = merge(&arr1, &arr2);
    display(&arr3);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct Node
{
  int data;
  struct Node *next;
} *First = NULL;

void creatLinkedList(int A[], int n){
  struct Node *temp, *last;
  First = (struct Node *)malloc(sizeof(struct Node));
  First->data = A[0];
  First->next = NULL;
  last = First;
  for(int i = 1; i < n; i++){
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = A[i];
    temp->next = NULL;
    last->next = temp;
    last = temp;
  }
}

void Display(struct Node *p){
    while(p != NULL){
      printf("%d ", p->data);
      p = p->next;
    }
}

void R_Display(struct Node *p){
  if(p == NULL) 
    return ;
  
  printf("%d ", p->data);
  R_Display(p->next);

}

void R_R_Display(struct Node *p){
  if(p == NULL) 
    return ;

  R_R_Display(p->next);
  printf("%d ", p->data);
}

int count(struct Node *p){
    int c = 0;
    while(p != 0){
      c++;
      p = p->next;
    }
    return c;
}

int R_count(struct Node *p){
    if(p == 0) return 0;

    return R_count(p->next) + 1;
}

int Add(struct Node *p){
  int sum = 0;
  while( p != 0){
    sum += p->data;
    p = p->next;
  }
  return sum;
}

int R_Add(struct Node *p){
  if(p == 0) return 0;
  return R_Add(p->next) + p->data;
}

int max_Node(struct Node *p){
  int x = INT_MIN;
  while (p != 0){
    if(p->data > x)
      x = p->data;
    p = p->next;
  }
  return x;
}

int R_max_Node(struct Node *p){
  int x = 0;
  if(p == 0) return INT_MIN;
  else {
    x = R_max_Node(p->next);
    if(x > p->data)
      return x;
    
    return p->data;
  }
}

struct Node* search(struct Node* p, int key){
  while(p != NULL) {
      if(p->data == key)
        return p;
      
      p = p->next;
  }
  return NULL;
}

struct Node* R_search(struct Node* p, int key){
  if(p == NULL) return NULL;
  if(p->data == key)
    return p;
  return R_search(p->next, key);
}

struct Node* i_search(struct Node* p, int key){
  struct Node* q = NULL;
  while(p != NULL) {
      if(p->data == key){
        q->next = p->next;
        p->next = First;
        First = p;
        return p;
      }
      q=p;
      p = p->next;
  }
  return NULL;
}

void insert(struct Node *p, int pos, int x) {
  struct Node *t, *q;
  if(pos == 0){
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = p;
    p = t;
  }
  else if (pos > 0){
    q = p;
    for(int i = 0; i < pos - 1 && p; i++){
      p = p->next;
      if(p) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
      }
    }
  }
}
int main(){
    
  int A[] = {3, 5, 7, 11, 14};
  creatLinkedList(A, 5);
  printf("Display Using Iteration : \n");
  Display(First);

  printf("\nDisplay Using Recursion : \n");
  R_Display(First);

  printf("\nDisplay Using R_Recursion : \n");
  R_R_Display(First);

  printf("\nCount Of Node Using Iteration = %d\n", count(First));
  printf("\nCount Of Node Using Recursion = %d\n", R_count(First));

  printf("\nSum Of Nodes Using Iteration = %d\n", Add(First));
  printf("\nSum Of Nodes Using Recursion = %d\n", R_Add(First));


  printf("\nMax Node  Using Iteration = %d\n", max_Node(First));
  printf("\nMax Node  Using Recursion = %d\n", R_max_Node(First));

  printf("\nSearch Node  Using Iteration = %d\n", search(First, 7)->data);
  printf("\nSearch Node  Using Recursion = %d\n", R_search(First, 7)->data);
  printf("\nImprove Search Node  Using Iteration = %d\n", i_search(First, 7)->data);  
  printf("\nFirst Node =  %d\n", First->data);  

  insert(First, 0, 50);
  printf("\nInsert Node in Linked List : 50\n");
  Display(First);
  return 0;
}
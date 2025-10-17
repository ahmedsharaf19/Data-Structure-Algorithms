#include <stdio.h>

int palindromV1(char s[], int l){
    char t[l];
    int i, j;
    for(i = 0, j = l - 1; i < l; i++, j--){
        t[i] = s[j];
    }
    t[i] = '\0';
    
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] != t[i]) return 0;
    }
    return 1;
}

int palindromV2(char s[], int l){
    int i, j;
    for(i = 0, j = l - 1; i < j; i++, j--){
        if(s[i] != s[i]) return 0;
    }
    return 1;
}
int main(){
    char s[] = "madam";
    if(palindromV1(s, 5))
        printf("Palindrom\n");
    else 
        printf("Not palindrom\n");


    printf("######### V2 ##########\n");
    if(palindromV2(s, 5))
        printf("Palindrom\n");
    else 
        printf("Not palindrom\n");
    return 0;
}
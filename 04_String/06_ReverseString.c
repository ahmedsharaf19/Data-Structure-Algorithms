#include <stdio.h>

void ReverseV1(char s[], int l){
    char t[l];
    int i=0, j=l-1;
    for(;s[i] != '\0'; i++, j--){
        t[i] = s[j];
    }
    t[j] = '\0';
    for(i = 0; i < t[i] != '\0'; i++){
        s[i] = t[i];
    }
}

void ReverseV2(char s[], int l){
    int i, j;
    char t;
    for(i = 0, j = l -1 ; i < j; i++,  j--){
        t = s[i];
        s[i] = s[j];
        s[j] = t; 
    }
}

int main(){
    char s[] = "python";
    ReverseV1(s, 6);
    printf("%s\n", s);
    ReverseV2(s, 6);
    printf("%s", s);
    return 0;
}
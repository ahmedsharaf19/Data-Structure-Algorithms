#include <stdio.h>

int main(){
    char s[] = "finding";
    int H = 0, x = 0;
    for(int i = 0; s[i] != '\0'; i++){
        x = 1;
        x = x << s[i] - 97;
        if((x & H) > 0)
            printf("%c is Duplicates\n", s[i]);
        else 
            H = x | H;
    }
    return 0;
}
#include <stdio.h>

int main(){
    char s[] = "Ani?321";
    int i;
    for(i = 0; s[i] != '\0'; i++){
            if(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 48 && s[i] <= 57)){
                break;
            }
    }
    if(s[i] == '\0') printf("Valid\n");
    else printf("Not Valid\n");
    return 0;
}
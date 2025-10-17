#include <stdio.h>

int main(){
    char s[] = "WeLcOmE";
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    printf("%s\n", s);
    return 0;
}
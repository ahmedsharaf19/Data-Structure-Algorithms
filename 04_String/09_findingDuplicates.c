#include <stdio.h>

int main(){
    char s[] = "finding";
    char H[26] = {0};
    for(int i = 0; s[i] != '\0'; i++)
        H[s[i] - 97]+=1;

    for(int i = 0; i<26; i++){
        if(H[i] > 1)
            printf("%c duplicates = %d\n", i + 97, H[i]);
    }
    
    return 0;
}
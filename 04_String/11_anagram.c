#include <stdio.h>

int main(){
    char a[] = "decimal";
    char b[] = "medical";

    int H[26] = {0};
    int i =0;
    for(i = 0; a[i] != '\0'; i++)
        H[a[i] - 97]++;
    
    for(i = 0; b[i] != '\0'; i++){
        H[b[i] - 97]--;
        if(H[b[i] - 97] < 0){
            printf("Not Anagrame\n");
            break;
        }
    }
    if(b[i] == '\0') printf("Anagrame\n");
    return 0;
}
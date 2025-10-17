#include <stdio.h>

int main(){
    char a[] = "painter";
    char b[] = "panting";
    int i;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++){
            if(a[i] != b[i])
                break;
    }
    if(a[i] == b[i])
        printf("Equal\n");
    else if(a[i] < b[i])
        printf("Smaller\n");
    else 
        printf("Greater\n");
    return 0;
}
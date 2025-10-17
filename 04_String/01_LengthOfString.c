#include <stdio.h>

int main(){
    char *s = "welcom";
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("Lentgh = %d\n", i);
    return 0;
}
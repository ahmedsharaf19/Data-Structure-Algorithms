#include <stdio.h>

int main(){
    char s[] = "How Are You";
    int i = 0, vcount = 0, count = 0, word = 0;
    for (; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vcount++;
            count++;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            count++;
        else if (s[i] == ' ' && s[i-1] != ' ')
            word++;
    }

    printf("Vowels = %d\n", vcount);
    printf("Character Count = %d\n", count);
    printf("Word = %d\n", word+1);
    return 0;
}
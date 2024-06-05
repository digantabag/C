/*
Printing Tokens
or printing \n in the place of space in String
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("\nEnter String: ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' '){
            printf("\n");//printing \n in the place of space
        }
        else {
            printf("%c", str[i]);
        }
    }
    return 0;
}
/*
output:
Enter String: This Is C
This
Is
C
*/

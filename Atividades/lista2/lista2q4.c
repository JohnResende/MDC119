#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[30];
    int i;

    strcpy(string, "Eu gosto de c");

    char *p = string;

    while (*p != 0){
        printf("%c", *p);
        p++;
    }
    
    return 0;
}

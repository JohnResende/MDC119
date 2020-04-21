#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10;
    int *ptr = &x;

    printf("%p\n",ptr );
    printf("%i\n", *ptr);

    *ptr = 5;

    printf("%i\n", *ptr);

    return 0;
}
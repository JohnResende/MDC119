#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n){
    int res;

    if(n>2){
        res=(fibonacci(n-1) + fibonacci(n-2));
    }
    else{
        res=1;
    }

    return(res);
}

int main(){
    int n, i, res=0;

    printf("\nDigite o valor de n:\n -");
    scanf("%i", &n);
    printf("\n");

    for(i=1;i<n+1;i++){
        printf("%iº-> %i\n",i, res);
        res = fibonacci(i);
    }
    printf("\n");
    
    return 0;
}
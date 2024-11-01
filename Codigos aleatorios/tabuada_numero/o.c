#include <stdio.h>
int main(){
    int numero, i;
    printf("digite qual numero deseja saber a tabuada: ");
    scanf("%d", &numero);
    printf("tanuada do %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}
#include <stdio.h>
    int main() {
        int num, i = 0; 
        printf("Digite um numero para a contagem: \n");  
        scanf("%d", &num);
        while (i <= num) {
            printf("%d\n", i);  
            i++;  
        }
    
        return 0;  
    }
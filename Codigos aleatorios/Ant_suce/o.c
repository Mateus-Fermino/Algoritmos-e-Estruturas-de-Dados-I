#include <stdio.h>
int main(){
    int n1, ant, suce;
    printf("Qual o numero");
    scanf("%d", &n1);
    ant = n1-1;
    suce= n1+1;
    printf("O antecessor deste numero é: %d\n", ant);
    printf("O sucessor deste numero é: %d\n", suce);
    return 0;

}
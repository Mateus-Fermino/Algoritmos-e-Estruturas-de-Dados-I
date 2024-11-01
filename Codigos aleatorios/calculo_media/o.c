#include <stdio.h>
int main(){
    float n1, n2, n3, n4, media;
    printf("digite a primeria nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite a terceira nota: ");
    scanf("%f", &n3);
    printf("digite a quarta nota: ");
    scanf("%f", &n4);
    media= n1 + n2 + n3 + n4 / 4;
    printf("A média foi: %2.f\n", media);
}
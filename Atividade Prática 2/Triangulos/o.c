#include <stdio.h>
    int main(){
        float l1,l2,l3 ;
        printf("Digite os lados do Triangulo: \n");
        scanf("%f %f %f", &l1, &l2, &l3 );
        if ((l1 + l2 > l3) && (l1+l3>l2) && (l2+l3>l1))
        {
            printf("Os lados formam um triangulo. \n");
        }
        
        if (l1 == l2 && l2 ==l3)
        {
            printf("Este é um triangulo equilátero ");
        }
        else if (l1 == l2 || l1==l3 || l2==l3)
        {
            printf("Este é um Triangulo Isósceles. \n");
        } else
        {
            printf("Este é um triangulo escaleno. ");
        }   
    return 0; 
    }
/*  2.C Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.  */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1; // inicialização

    do
    {
        printf("%d \n", i);
        i++; // contagem (sempre depois do printf!)
    }
    while (i <= 100);

    system("pause");
    return 0;
}


//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int soma(int num1, int num2){
    //Somar 2 números
    int sum = num1 + num2;
    
    //saída
    return sum;
}

int sub(int num1, int num2){
    //Objetivo returnar a sub de num1 por num2
    //criar variavel de sub
    int sub=0;
    //fazer subtração
    sub = num1 - num2;
    //retornar valor 
    return sub;
}


//Estrutura da função principal

int main(int argc, char * argv[]){
	
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    
    int sum = soma(n1, n2);
    int s = sub(n1,n2);

    printf("%d + %d = %d\n", n1, n2, sum);
    printf("%d - %d = %d\n", n1, n2, s);
    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}
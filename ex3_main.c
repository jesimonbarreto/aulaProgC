//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//Estrutura da função principal

int main(int argc, char * argv[]){

    int idade = 10;


    if(idade < 11){
        printf("Criança\n");
    } else if(idade < 17){
        printf("Adolescente\n");
    } else if(idade < 50){
        printf("Adulto\n");
    }

    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}
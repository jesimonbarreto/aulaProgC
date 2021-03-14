//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura;
    float nota1;
    float nota2; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

//Estrutura da função principal

int main(int argc, char * argv[]){

    Pessoa Povo[3];  // cria um vetor de 10 pessoas.

    //contador de referencia
    int contpessoa = 0;

    while (contpessoa < 3){

        scanf("%f",&Povo[contpessoa].Altura);

        printf("valor de altura pessoa %d: %f\n",contpessoa, Povo[contpessoa].Altura);

        contpessoa = contpessoa + 1;// contpessoa ++;
    }

    for(contpessoa=0;contpessoa<3; contpessoa+=1){
        scanf("%f",&Povo[contpessoa].Altura);
        printf("valor de altura pessoa %d: %f\n",contpessoa, Povo[contpessoa].Altura);
        //...

    }


    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}




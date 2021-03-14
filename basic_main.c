//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//Estrutura da função principal

int main(int argc, char * argv[]){
	
    //Mostrar todos os parametros de linha de comando
    if(argc>1){
        int i = 0;

        for (i=0; i < argc;i=i+1){
            printf("%s\n",argv[i]);
        }
	}
	
    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}
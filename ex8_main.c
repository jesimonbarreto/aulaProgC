//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int fat(int num){
    if(num == 1){
        return 1;
    }

    return num * fat(num-1);
}


//Estrutura da função principal

int main(int argc, char * argv[]){
	
    int fatv = fat(5);
	printf("fatorial: %d\n", fatv);
    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}
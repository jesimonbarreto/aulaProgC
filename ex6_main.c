//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




//Estrutura da função principal


int main(int argc, char * argv[]){

    int i=0, num_componentes=0;
    float var = 1.5;
    float *v;
    
    printf("Informe o numero de componentes do vetor\n");
    scanf("%d", &num_componentes);

    //malloc(quanti de memoria em B)
    //(void *)
    v = (float *) malloc(num_componentes * sizeof(float));
    
    //Armazenando os dados em um vetor
    for (i = 0; i < num_componentes; i++){
        printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f",&v[i]);
    }

    // ------ Percorrendo o vetor e imprimindo os valores ----------
    printf("\n*********** Valores do vetor dinamico ************\n\n");
    
    for (i = 0;i < num_componentes; i++){
        printf("%.2f\n",v[i]);
    }

    //....
    //v = &var;

    //...
    
    //liberando o espaço de memória alocado
    free(v);

    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;

}





//int num_componentes = atoi(argv[i]);

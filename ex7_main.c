//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




//Estrutura da função principal
int main(int argc, char * argv[]){
     
     
    FILE *pont_arq; // cria variável ponteiro para o arquivo
    char palavra[20]; // variável do tipo string
  
    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("output/arquivo_palavra.txt", "w");
    
    //testando se o arquivo foi realmente criado
    if(pont_arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    
    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    scanf("%s", palavra);

    //usando fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s\n", palavra);
    
    //usando fclose para fechar o arquivo
    fclose(pont_arq);
    
    printf("Dados gravados com sucesso!\n");

    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;

}
//bibliotecas utilizadas no código
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//Troca de dois números
void troca(int i, int j) { 
   printf("Valor de i é %d, j é %d\n", i,j);
   
   int temp;

   temp = i;
   i = j; 
   j = temp;

   printf("Valor de i é %d, j é %d\n", i,j);
}


//Troca real
void troca_real(int *p, int *q){
   int temp;
   temp = *p;
   *p = *q; 
   *q = temp;
}


//Estrutura da função principal

//Objetivo criar calculadora com "multiplos retornos"
int main(int argc, char * argv[]){

    int v1=10, v2=20;
    int *p_v1= &v1, *p_v2 = &v2;

    printf("Valor de v1 é %d, v2 é %d\n", v1,v2);
    
    troca_real(p_v1, p_v2);

    printf("Valor de v1 é %d, v2 é %d\n", v1,v2);


    int i = 122;
    int *p=&i;

    printf ("*p = %d\n", *p);
    printf (" i = %d\n", i);
    printf (" p = %ld\n", (long int) p);
    printf (" p = %p\n", p);
    printf ("&p = %p\n", &p);



    //TRoca entre dois números

    //Retorna resultado da execução do main para o SO. 0 significa que nao teve erro.
	return 0;
}




//1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
//2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
//3. Retornar maior elemento do item 2;
//4. Colocar a solução no GITHUB (coloque o endereço aqui).


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define N 10

int gerador_valores(int x[]);
int soma_pares(int x[]);
int soma_vetor(int x[]);
void imprimir_dados(int x[]);

int main(){

int A[N],B[N],C[N],D[N],E[N];
int i , maior_soma;

//1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
srand(time(NULL));
gerador_valores(A);
gerador_valores(B);
gerador_valores(C);
gerador_valores(D);
gerador_valores(E);

printf("Vetor[A]=");
imprimir_dados(A);

printf("\n\nVetor[B]=");
imprimir_dados(B);

printf("\n\nVetor[C]=");
imprimir_dados(C);

printf("\n\nVetor[D]=");
imprimir_dados(D);

printf("\n\nVetor[E]=");
imprimir_dados(E);

//2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;

printf("\n\nSoma dos vetores pares:\n\n");
printf("Soma vetor A: %d\n", soma_pares(A));
printf("Soma vetor B: %d\n", soma_pares(B));
printf("Soma vetor C: %d\n", soma_pares(C));
printf("Soma vetor D: %d\n", soma_pares(D));
printf("Soma vetor E: %d\n", soma_pares(E));

//3. Retornar maior elemento do item 2;

maior_soma = 0; // Identificação da maior soma !
maior_soma = soma_pares(A); // Sem exito ao passar para um procedimento.
if(maior_soma < soma_pares(B)){
    maior_soma = soma_pares(B);
}else{
    if(maior_soma < soma_pares(C)){
        maior_soma = soma_pares(C);
    }else{
        if(maior_soma < soma_pares(C)){
            maior_soma = soma_pares(C);
        }else{
            if(maior_soma < soma_pares(D)){
                maior_soma = soma_pares(D);
            }else{
                if(maior_soma < soma_pares(E)){
                    maior_soma = soma_pares(E);
                }
            }
        }
    }
}

printf("\nO maior valor eh %d\n", maior_soma);

    return 0;
}

int gerador_valores(int x[]){ //gerar valores aleatorios .
    int i;
    for(i=0;i<N;i++){
        x[i] = rand()%10;
    }
}

int soma_pares(int x[]){ //soma dos valores APENAS PARES .
   int i, soma = 0;
   for(i=0;i<N;i++){
       if(x[i]%2==0){
            soma = soma + x[i];
       }
   }
   return soma;
}

void imprimir_dados(int x[]){ //imprimir dados aleatorios
	int i;
	for(i=0;i<N;i++){
		printf(" [%d] = %d ", i, x[i]);
	}
}











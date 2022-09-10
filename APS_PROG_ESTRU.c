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
int soma_pares(int x[],int q);
int soma_vetor(int x[]);
void imprimir_dados(int x[]);
int par(int x);

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
printf("Soma vetor A: %d\n", soma_pares(A , N));
printf("Soma vetor B: %d\n", soma_pares(B , N));
printf("Soma vetor C: %d\n", soma_pares(C , N));
printf("Soma vetor D: %d\n", soma_pares(D , N));
printf("Soma vetor E: %d\n", soma_pares(E , N));

//3. Retornar maior elemento do item 2;

maior_soma = 0; // Identificação da maior soma !
maior_soma = soma_pares(A , N); // Sem exito ao passar para um procedimento.
if(maior_soma < soma_pares(B , N)){
    maior_soma = soma_pares(B , N);
}else{
    if(maior_soma < soma_pares(C , N)){
        maior_soma = soma_pares(C , N);
    }else{
        if(maior_soma < soma_pares(C , N)){
            maior_soma = soma_pares(C , N);
        }else{
            if(maior_soma < soma_pares(D , N)){
                maior_soma = soma_pares(D , N);
            }else{
                if(maior_soma < soma_pares(E , N)){
                    maior_soma = soma_pares(E , N);
                }
            }
        }
    }
}

printf("\nO maior valor eh %d\n", maior_soma);

    getch();
    return 0;
}

int gerador_valores(int x[]){ //gerar valores aleatorios .
    int i;
    for(i=0;i<N;i++){
        x[i] = rand()%10;
    }
}

int soma_pares(int x[],int q){ //soma dos valores APENAS PARES .
    if(q == 0){
        return par(x[0]);
    }else{
        return par(x[q-1]) + par(soma_pares(x,q-1));
    }
}

void imprimir_dados(int x[]){ //imprimir dados aleatorios
	int i;
	for(i=0;i<N;i++){
		printf(" [%d] = %d ", i, x[i]);
	}
}

int par(int x){
    if(x%2==0){
        return x;
    }else{
        return 0;
    }
}











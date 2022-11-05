#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#define N 10

//inclui operações booleanas//

struct Cadastro {
    char nome[50];
    int nasc;
    int cpf;
    int rg;
    char end[50];
    int tel;
    char email[50]
};

struct Cadastro pessoa1;

int main()
{
    menu();
}

int menu(){
    int op;
    printf("---CADASTROS---\n");
    printf("[0] - ENCERRAR\n");
    printf("[1] - INSERIR\n");
    printf("[2] - CONSULTAR\n");
    printf("[3] - EXCLUIR\n");
    scanf("%i", &op);
    printf("\n------------------");
    system("cls");

    switch(op){
        case 0:
            return 0;
          break;
        case 1:
          inserir();//inserir
          menu();
          break;
        case 2:
          printf("\nCONSULTAR");
          consultar();
          menu();
          break;
        case 3:
          printf("\nEXCLUIR");
          menu();
          break;
        default :
          printf("\nVALOR INVALIDO");
          menu();
          break;
        }
    return 0;
}

void inserir(){


    strcpy(pessoa1.nome, "Fulano Noe");
    strcpy(pessoa1.end,"Rua Joao Segundo");
    strcpy(pessoa1.email, "fulano97@outlook.com");
    pessoa1.tel =  987654321;
    pessoa1.rg = 262626266;
    pessoa1.cpf = 123456789;
    pessoa1.nasc = 27011997;
}

void consultar(){

    int op,aux;
    system("cls");
    printf("1 - CPF \n2 - Telefone\n");
    scanf("%d", &op);
    system("cls")
    if(op==1){
        printf("Digite o CPF desejado: ");
        scanf("%d", &aux);
        if(aux == pessoa1.cpf){
            printf("Nome: %s\n", pessoa1.nome);
            printf("Email: %s\n", pessoa1.email);
            printf("Endereco: %s\n", pessoa1.end);
            printf("Telefone: %d\n", pessoa1.tel);
            printf("RG: %d\n", pessoa1.rg);
            printf("CPF: %d\n", pessoa1.cpf);
            printf("Nascimento: %d\n", pessoa1.nasc);
            system("pause");
        }else{
            printf("Valor inexistente!");
        }
    }else{
        if(op == 2){
        printf("Digite o telefone desejado: ");
        scanf("%d", &aux);
        if(aux == pessoa1.tel){
            printf("Nome: %s\n", pessoa1.nome);
            printf("Email: %s\n", pessoa1.email);
            printf("Endereco: %s\n", pessoa1.end);
            printf("Telefone: %d\n", pessoa1.tel);
            printf("RG: %d\n", pessoa1.rg);
            printf("CPF: %d\n", pessoa1.cpf);
            printf("Nascimento: %d\n", pessoa1.nasc);
            system("pause");
        }else{
            printf("Valor inexistente!");
        }

        }else{
            printf("Opcão invalida!");
            consultar();
        }
    }
    menu();
}


Algoritmo "Bin_APS_Noe"


Var
   deci , X: inteiro

Procedimento Imprimir(n:inteiro)
Inicio
   Escreval("O valor em binario e :",n)
FimProcedimento

// Apenas com procedimento !!//
Procedimento bin(n:inteiro)
Inicio
   Se (n = 0)Entao
      escreva(n)
   SeNao
      bin(n/2)
      escreva(n%2)
   FimSe
FimProcedimento

Inicio
   Escreva("Digite um valor: ")
   Leia(deci)
   bin(deci)

Fimalgoritmo
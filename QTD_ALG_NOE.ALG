Algoritmo "Qtd_Alg_Noe"


Var
   Valor , X: inteiro

Procedimento Negativos(n:inteiro)
Var
y : inteiro
Inicio
   Se (n < 0) Entao
      Valor <- (n*-1)
   FimSe
FimProcedimento

Funcao R(n : inteiro):inteiro
Inicio
   Se (n < 10)Entao
      Retorne 1
   SeNao
      Retorne 1 + R(n/10)
   FimSe
FimFuncao

Procedimento Imprimir(A,B : inteiro)
Inicio
   Escreval("A quantidade de algarismo e igual a ",B,".")
FimProcedimento


Inicio
   Escreva("Informe algum valor :")
   Leia(Valor)
   Negativos(Valor)
   X <- R(Valor)
   Imprimir(Valor,X)


Fimalgoritmo
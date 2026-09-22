/*

fib(5) arvore de chamada

           fib(5)
          /      \
      fib(4)      fib(3)
      /    \       /    \
   fib(3) fib(2) fib(2) fib(1)
   /   \   /  \   /  \
fib(2)fib(1)fib(1)fib(0)fib(1)fib(0)
 /  \
fib(1)fib(0)

contando quantas vezes cada um aparece na arvore:
fib(3) -> 2 vezes
fib(2) -> 3 vezes
fib(1) -> 5 vezes
fib(0) -> 3 vezes

total de chamadas: da pra somar tudo, fib(5)+fib(4)+fib(3)+fib(2)+fib(1)+fib(0)
= 1+1+2+3+5+3 = 15

com memorization ai muda tudo, pq cada fib(n) so calcula na primeira
vez que aparece, dps disso é só olhar na tabela. entao no final so
tem que calcular fib(0), fib(1), fib(2), fib(3) e fib(4) mesmo, que
da 5 calculos no total (o resto das chamadas repetidas nem conta
pq é so consulta, nao processamento de verdade)

*/
/*

Mochila fracionária

Dados:
v = {10, 40, 30, 50}   (valores)
w = { 5,  4,  6,  3}   (pesos)
W = 10                 (capacidade da mochila)

Passo 1: razão valor/peso de cada item
  item 1: 10/5 = 2
  item 2: 40/4 = 10
  item 3: 30/6 = 5
  item 4: 50/3 = 16.67

Passo 2: ordenar por razão decrescente
  ordem de escolha: item 4 (16.67) -> item 2 (10) -> item 3 (5) -> item 1 (2)

Passo 3: pegar item por item, o quanto couber na capacidade restante
  capacidade inicial: W = 10

  item 4: peso 3, cabe inteiro -> f4 = 1
          capacidade restante = 10 - 3 = 7

  item 2: peso 4, cabe inteiro -> f2 = 1
          capacidade restante = 7 - 4 = 3

  item 3: peso 6, só cabe fração -> f3 = 3/6 = 1/2
          capacidade restante = 3 - 3 = 0

  item 1: capacidade restante = 0 -> f1 = 0 (não entra)

Passo 4: valor total
  valor = 50*(1) + 40*(1) + 30*(1/2) + 10*(0)
  valor = 50 + 40 + 15
  valor = 105  (ótima para a mochila fracionária)

*/
/*

#Passo 1: calcular as razoes

Item
1 -> 100/10 = 10
2 -> 200/20 = 10
3 -> 120/30 = 4

r = {10,10,4}

#Passo 2: ordenar por razao decrescente

Item 3 fica por ultimo.

Ordem: item 1, item 2, item 3

#Passo 3: preencher a mochila

1) Item 1 (peso 10): cabe 
espaco usado = 10
espaco restante = 40

2) Item 2 (peso 20): cabe
espaco usado = 10 + 20 = 30
espaco restante = 20

3) Item 3 (peso 30): Nao cabe, pois so restam 20
fracao que cabe: 20 / 30 = 2/3
espaco usado = 30 + (2/3)*30 = 30 + 20 = 50

f = {1, 1, 2/3}

#Passo 4: calcular peso total usado
peso = 1*10 + 1*20 + (2/3)*30
peso = 50

#Passo 5: calcular o valor total obtido
valor = 1*100 + 1*200 + (2/3)*120
valor = 380

RESULTADO FINAL
r = {10,10,4}
f = {1,1,2/3}
valor total = 380

*/
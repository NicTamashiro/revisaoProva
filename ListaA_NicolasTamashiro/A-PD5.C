/*

Calculo da cadeia de matrizes - questao 5

p = {4, 10, 3, 12, 20}
A1 = 4x10, A2 = 10x3, A3 = 3x12, A4 = 12x20

formula usada: M[i][j] = min { M[i][k] + M[k+1][j] + p(i-1)*pk*pj }, pra i<=k<j

base: M[1][1]=M[2][2]=M[3][3]=M[4][4]=0 (cadeia de 1 matriz nao multiplica nada)

cadeias de 2:
M[1][2] = 4*10*3 = 120
M[2][3] = 10*3*12 = 360
M[3][4] = 3*12*20 = 720

cadeias de 3:
M[1][3], testando k=1 e k=2
  k=1 -> 0 + 360 + 4*10*12 = 840
  k=2 -> 120 + 0 + 4*3*12 = 264  (menor, entao k=2)
M[1][3] = 264

M[2][4], testando k=2 e k=3
  k=2 -> 0 + 720 + 10*3*20 = 1320  (menor)
  k=3 -> 360 + 0 + 10*12*20 = 2760
M[2][4] = 1320

cadeia de 4 (a inteira):
M[1][4], testando k=1,2,3
  k=1 -> 0 + 1320 + 4*10*20 = 2120
  k=2 -> 120 + 720 + 4*3*20 = 1080  <- melhor
  k=3 -> 264 + 0 + 4*12*20 = 1224
M[1][4] = 1080, entao k=2 e o ponto de divisao

tabela M ficou assim:
      1     2     3     4
1     0    120   264   1080
2     -     0    360   1320
3     -     -     0     720
4     -     -     -      0

tabela dos k escolhidos (S):
      1  2  3  4
1     -  1  2  2
2     -  -  2  2
3     -  -  -  3

como M[1][4] usa k=2, a cadeia se divide em (A1 A2) e (A3 A4)
os dois lados sao pares entao ja e trivial, nao precisa dividir mais

resposta final: (A1 x A2) x (A3 x A4), custo = 1080

*/
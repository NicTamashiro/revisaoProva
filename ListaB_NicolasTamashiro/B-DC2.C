/*

Exercicio 2 - Simulacao da Busca Binaria

Caso (a): n = 9, x = 3

| Iteracao | inicio | final | meio | v[meio] | Acao             |
|----------|--------|-------|------|---------|----------------- |
|    1     |   0    |   8   |  4   |    4    | 4 > 3 -> final=3 |
|    2     |   0    |   3   |  1   |    1    | 1 < 3 -> inicio=2|
|    3     |   2    |   3   |  2   |    2    | 2 < 3 -> inicio=3|
|    4     |   3    |   3   |  3   |    3    | 3 == 3 -> achou  |
Retorno = indice 3;
Iteracoes = 4;


Caso (b): n = 14, x = 7

| Iteracao | inicio | final | meio | v[meio] | Acao             |
|----------|--------|-------|------|---------|------------------|
|    1     |   0    |  13   |  6   |    6    | 6 < 7 -> inicio=7|
|    2     |   7    |  13   | 10   |   10    | 10 > 7 -> final=9|
|    3     |   7    |   9   |  8   |    8    | 8 > 7 -> final=7 |
|    4     |   7    |   7   |  7   |    7    | 7 == 7 -> achou  |
Retorno = indice 7;
Iteracoes = 4;


Caso (c): n = 15, x = 7

| Iteracao | inicio | final | meio | v[meio] | Acao            |
|----------|--------|-------|------|---------|-----------------|
|    1     |   0    |  14   |  7   |    7    | 7 == 7 -> achou |
Retorno = indice 7;
Iteracoes = 1;

O que muda entre n par e n impar?
Quando n eh "Impar", o vetor tem um elemento central exato, pois a divisao do meio cai numa divisa sem resto. 
Se x for exatamente esse valor central, a busca acha o valor logo na primeira iteracao.

Quando n eh "Par", nao existe um unico elemento central, o meio fica deslocado em relacao ao centro real do vetor. 
Isso faz com que, mesmo que x esteja proximo do centro, geralmente sera necessario mais iteracoes.

*/
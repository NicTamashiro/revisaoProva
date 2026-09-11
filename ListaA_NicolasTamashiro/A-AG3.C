/*
 * 3. Mochila fracionaria (calculo manual)
 * v = {60, 150, 120, 200}, w = {10, 20, 30, 40}, W = 50
 *
 * (a) Maior valor primeiro:
 *     f = {0, 1/2, 0, 1} -> valor = 275
 *
 * (b) Menor peso primeiro:
 *     f = {1, 1, 2/3, 0} -> valor = 290
 *
 * (c) Maior razao valor/peso (r = {6, 7.5, 4, 5}):
 *     f = {1, 1, 0, 1/2} -> valor = 310 (OTIMO)
 *
 * Estrategia correta: (c), maior razao valor/peso.
 * O algoritmo guloso funciona na fracionaria porque as fracoes permitem
 * preencher a capacidade exatamente, sem desperdicio, e o argumento
 * de troca garante que priorizar a maior razao nunca piora o resultado.
 * Na mochila 0/1 os itens sao indivisiveis, entao a escolha gulosa
 * pode gastar peso de um jeito que impede uma combinacao melhor,
 * por isso a 0/1 exige programacao dinamica.
 */
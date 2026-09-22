#include <stdio.h>

void troco_geral(int valor, int notas[], int n){
    for(int i = 0; i < n; i++){
        int qtd = valor / notas[i];
        if(qtd > 0){
            printf("%d nota(s) de %d\n", qtd, notas[i]);
            valor %= notas[i];
        }
    }
}

int main(){

    int valor, n;
    scanf("%d %d", &valor, &n);

    int notas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &notas[i]);
    }

    troco_geral(valor, notas, n);

    return 0;
}

/*

Por que o guloso falha aqui?

Porque as notas {5, 4, 1} não têm relação de múltiplos entre si: 
usar a nota de maior valor primeiro (5) consome uma quantidade que impede 
o uso eficiente da nota de 4 depois, e essa escolha não pode ser desfeita.

Qual propriedade do conjunto {100,50,20,10,5,2,1} garante que o guloso funciona?

É um sistema canônico: cada denominação é múltiplo (ou bem proporcional)
das menores, de forma que nunca é vantajoso trocar uma nota maior por 
uma combinação de notas menores. Isso garante que a escolha 
gulosa a cada passo sempre leva à solução ótima.

*/
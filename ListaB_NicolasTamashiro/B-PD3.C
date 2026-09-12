/*

Exercicio 3: Top-down vs Bottom-up

| Quesito                          | Top-down (memoization)                 | Bottom-up (tabulação)                   |
-----------------------------------|----------------------------------------|---------------------------------------- |
| Facilidade de pensar o problema  | Mais natural e intuitivo: segue a      | Exige inverter a lógica: é preciso      |
|                                  | recursão do jeito que a definição      | descobrir a ordem correta de resolver   |
|                                  | matemática do problema já sugere       | os subproblemas (do menor ao maior)     |
|                                  | (ex: fib(n) = fib(n-1) + fib(n-2))     | antes de escrever o código              |
-----------------------------------|----------------------------------------|---------------------------------------- |
| Simplicidade do código           | Parecido com a recursão original,      | Geralmente mais direto (um simples      |
|                                  | só acrescenta checagem e gravação      | for), mas exige montar a tabela e a     |
|                                  | no cache                               | ordem de preenchimento.                 |
-----------------------------------|----------------------------------------|---------------------------------------- |
| Subproblemas resolvidos          | Apenas os necessários                  | exaustivamente, mesmo os desnecessários)|
-----------------------------------|----------------------------------------|---------------------------------------- |
| O que é armazenado na tabela     | Resultados dos subproblemas conforme   | Resultados de todos os subproblemas,    |
|                                  | vão sendo calculados pela recursão     | preenchidos sequencialmente até o       |
|                                  | (tabela parcialmente preenchida,       | subproblema final (tabela sempre        |
|                                  | inicializada com valor "vazio", ex: -1)| completamente preenchida ao final)      |
-----------------------------------|----------------------------------------|-----------------------------------------|

*/
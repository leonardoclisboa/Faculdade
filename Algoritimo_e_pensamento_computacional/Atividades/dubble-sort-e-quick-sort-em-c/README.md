# Sistema de Classificação de Notas Escolares

**Aluno:** Leonardo Carvalho de Lisboa
**Instituição:** Centro Universitário do DF (UDF)  
**Curso:** Engenharia de Software  
**Disciplina:** Algoritmo e pensamento computacional 
**Professora:** Karla Sartin

---

## 1. Contextualização
No ambiente acadêmico, a elaboração de rankings de desempenho é uma tarefa frequente e essencial. Organizar notas escolares em ordem decrescente permite que instituições de ensino distribuam bolsas de estudo, definam vagas em processos seletivos e premiem os melhores desempenhos de forma justa e rápida. Sistemas eficientes de ordenação são a base para que esses dados sejam processados de maneira confiável, independentemente da quantidade de estudantes.

## 2. Objetivo da Aplicação
O objetivo deste projeto é receber as notas de 10 estudantes por meio de entrada do usuário (teclado) e ordená-las da maior para a menor (ordem decrescente). A aplicação implementa e compara dois algoritmos clássicos de ordenação: **Bubble Sort** e **Quick Sort**. Para garantir a integridade da comparação, o sistema preserva os dados originais e submete cópias exatas do mesmo array a ambos os algoritmos, provando que estratégias lógicas diferentes podem chegar ao mesmo resultado correto.

## 3. Descrição do Bubble Sort
O Bubble Sort é um algoritmo de ordenação por flutuação (ou força bruta). Ele percorre o array múltiplas vezes utilizando dois laços de repetição aninhados. Em cada passagem, ele compara elementos adjacentes (pares). Se estiverem fora de ordem, ele realiza a troca (*swap*). Esse processo se repete até que nenhuma troca seja necessária, "empurrando" gradativamente os valores menores para o final do array.

## 4. Descrição do Quick Sort
O Quick Sort é um algoritmo avançado baseado no paradigma "Dividir para Conquistar". Ele funciona da seguinte maneira:
1. Elege um elemento como referência, chamado de **pivô** (neste projeto, o último elemento).
2. Utiliza uma função de partição para reorganizar o array, colocando todas as notas maiores ou iguais ao pivô à esquerda, e as menores à direita.
3. Posiciona o pivô no seu local definitivo.
4. Aplica a **recursividade**, chamando a si mesmo para ordenar as sub-listas geradas à esquerda e à direita do pivô.

## 5. Explicação da Ordenação Decrescente
Como o objetivo é classificar os estudantes da maior nota para a menor, a lógica tradicional dos algoritmos (que costuma ser crescente) precisou ser invertida nas condições de comparação (`if`):
*   **No Bubble Sort:** A condição `if (arr[j] < arr[j + 1])` verifica se a nota atual é menor que a próxima. Se for, elas trocam de lugar, garantindo que os maiores valores subam para o início do array.
*   **No Quick Sort:** Na etapa de partição, a condição `if (arr[j] >= pivo)` garante que apenas os valores maiores ou iguais ao pivô sejam movidos para o lado esquerdo do array.

## 6. Tecnologias e Ferramentas Utilizadas
*   **Linguagem:** C
*   **Compilador:** GCC
*   **Versionamento:** Git e GitHub
*   **IDE:** Vs Code
*   **Link para demonstração online:** [\[LINK DO ONLINEGDB\]](https://onlinegdb.com/NTz0QJ4D9)

## 7. Estrutura dos Arquivos do Projeto
O repositório é composto pelos seguintes arquivos:
*   `classificação-de-notas-estudantes.c`: Arquivo contendo o código-fonte principal.
*   `README.md`: Este arquivo, contendo a documentação e instruções do projeto.
*   `Pasta de evidencias`: Fotos com rodas de testes.

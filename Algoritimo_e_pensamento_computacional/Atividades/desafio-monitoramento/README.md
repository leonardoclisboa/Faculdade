# 🏭 Sistema Inteligente de Monitoramento Industrial

Repositório destinado à entrega do **Desafio Guiado** da disciplina Algoritimo e pensamento computacionalC (2º Semestre). 

A atividade foi proposta pela Prof. Karla Sartin com o objetivo de fixar os conceitos de laços de repetição (`while` e `do...while`), validação de dados e estruturação lógica.

## 🎯 Objetivo do Projeto
Desenvolver um programa em linguagem C para monitorar a temperatura de uma máquina industrial. O sistema recebe dados de um sensor térmico, aplica cálculos de média, máximas e mínimas, e possui um sistema de parada de emergência para evitar o superaquecimento do maquinário.

## ⚙️ Funcionalidades Implementadas
- **Configuração Segura:** Validação do limite de temperatura inicial (aceita apenas valores entre -100°C e 200°C).
- **Tratamento de Erros:** Prevenção contra quebra do código e loops infinitos através da limpeza do buffer do teclado caso o operador digite caracteres no lugar de números.
- **Leitura Contínua:** Coleta ininterrupta de dados enquanto o maquinário estiver operando dentro da normalidade.
- **Parada de Emergência:** O sistema encerra automaticamente as leituras caso registre **3 temperaturas consecutivas** acima do limite de segurança.
- **Relatório Estatístico:** Ao final da execução, o sistema exibe o total de leituras processadas, o maior e o menor pico de calor, a média térmica do turno e a porcentagem de incidências de superaquecimento.

## 🛠️ Tecnologias Utilizadas
- **Linguagem:** C
- **Compilador:** GCC
- **Bibliotecas Padrão:** `<stdio.h>`

## 🚀 Como Executar o Código

1. Certifique-se de ter um compilador C (como o GCC) instalado em sua máquina.
2. Clone este repositório ou faça o download do arquivo `monitoramento.c`.
3. Abra o terminal na pasta do arquivo e compile o código com o comando:
   ```bash
   gcc monitoramento.c -o monitoramento

## 🧠 Reflexão
O do...while usei na validação inicial. Como corre o código antes de testar a condição, deu para pedir o limite e logo a seguir validar o input, sem ter de repetir o scanf.
O while normal deixei para a leitura do sensor. Testar a condição antes aqui foi essencial: o meu sistema tem de garantir que ainda não tivemos os 3 picos antes de pedir uma nova temperatura. Se eu pusesse um do...while nesta parte, ia forçar uma leitura extra com a máquina já a sobreaquecer, o que atrasaria a paragem de emergência. Na vida real, isso daria um problema enorme para a fábrica.
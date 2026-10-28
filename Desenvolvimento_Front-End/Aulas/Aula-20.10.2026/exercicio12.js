// Exercicio 12. Calcular a soma dos elementos de um array
console.log("------------------------");
console.log("Exercicio 12");
console.log("------------------------");
let listaNumeros = [2, 4, 6, 8, 10, 12];
let somaNumerosArray = 0;

for (let elementoArray of listaNumeros) {
    somaNumerosArray += elementoArray
}
console.log("O resultado da soma é igual a: ", somaNumerosArray);

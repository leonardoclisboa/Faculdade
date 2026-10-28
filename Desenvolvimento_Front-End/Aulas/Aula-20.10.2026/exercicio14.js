// Exercício 14. Criaremos uma lista (array) com cinco nomes e exibir cada nome
console.log("--------------------");
console.log("Exercício 14");
console.log("--------------------");
let listaNomes = ["Ana", "Bruno", "Carlos", "Daniela", "Eduardo"];
for (let nome of listaNomes) {
    console.log(nome);
}
// Equivalente a esse looping percorrendo de forma mais tradicional
for (let i = 0; i < listaNomes.length; i++) {
    console.log(listaNomes[i]);
}
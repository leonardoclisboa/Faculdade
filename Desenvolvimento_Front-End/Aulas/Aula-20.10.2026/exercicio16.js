// Exercício 16. Ordenar um array de números
console.log("--------------------------")
console.log("Exercício 16")
console.log("--------------------------")
let numerosPraOrdenar = [7, 3, 5, 2, 14, 20, 4, 9, 1];
console.log("Lista desordenada");
console.log(numerosPraOrdenar);
numerosPraOrdenar.sort((a, b) => a - b);
console.log("Lista ordenada");
console.log(numerosPraOrdenar);
// Exercício 10. Verificar se uma palavra é palíndromo
let palavra = "arara";
let palindromoInvertido = palavra.split("").reverse().join("");
console.log("Exercócio 9: A palavra:", palavra, "é um palíndromo (invertido)?", palavra === palindromoInvertido);
// Exercício 17. Retorna todos indices que o número aparece na lista de números array
console.log("--------------------------");
console.log("Exercício 17");
console.log("--------------------------");
function todosIndices(vetor, num) {
    let indices = [];
    for (let i = 0; i < vetor.length; i++) {
        if (vetor[i] === num) {
            indices.push(i);
        }
    }
    return indices;
}
console.log(todosIndices([1, 2, 3, 5, 2, 8, 4], 2));
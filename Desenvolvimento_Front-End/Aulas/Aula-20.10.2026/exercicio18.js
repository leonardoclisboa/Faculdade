// Exercício 18. Vamos gerar a série Fibonacci de até n numerosPraOrdenar
console.log("--------------------------");
console.log("Exercício 18");
console.log("--------------------------");
function serieFibonacci(num) {
    let fibo = [0, 1];
    while (fibo.length < num) {
        fibo.push(fibo[fibo.length - 1] + fibo[fibo.length - 2]);
    }
    return fibo.slice(0, num);
}
console.log(serieFibonacci(20));
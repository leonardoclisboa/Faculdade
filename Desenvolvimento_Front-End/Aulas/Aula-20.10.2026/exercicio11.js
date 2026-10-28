// Exercicio 11. Criar uma função que retorna o
// quadrado dos primeiros 20 números
function calculaQuadrado(numero) {
    return numero * numero;
}
// agora iremos chamar a execução da função calculaQuadrado
console.log("------------------------");
console.log("Exercicio 11");
console.log("------------------------");
for (let numero = 1; numero <= 20; numero++){
    console.log('O quadrado de ', numero, ' é igual a ', calculaQuadrado(numero));
}
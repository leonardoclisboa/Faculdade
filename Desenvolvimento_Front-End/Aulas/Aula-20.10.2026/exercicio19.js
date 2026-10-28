// Exercício 19. Cria um tabuleiro 3x3 para jogo da velha e função para marcar posição
console.log("--------------------------");
console.log("Exercício 19");
console.log("--------------------------");

function criarTabuleiro() {
    let tabuleiro = [];
    for (let i = 0; i < 3; i++) {
        tabuleiro[i] = ['', '', ''];
    }
    return tabuleiro;
}

function marcarPosicao (tabuleiro, linha, coluna, jogador) {
    if (tabuleiro[linha][coluna] === '') {
        tabuleiro[linha][coluna] = jogador;
        return true;
    }
    return false;
}

function exibirTabuleiro(tabuleiro) {
    for(let i = 0; i < 3; i++) {
        console.log(tabuleiro[i].join(' | '));
    }
}

let tabuleiro = criarTabuleiro();
                marcarPosicao(tabuleiro, 1, 1, 'x');
                marcarPosicao(tabuleiro, 0, 0, 'x');
                marcarPosicao(tabuleiro, 0, 1, 'x');
                exibirTabuleiro(tabuleiro);
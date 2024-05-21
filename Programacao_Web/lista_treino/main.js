const btnJogador1 = document.querySelector("#jogador1");
const btnJogador2 = document.querySelector("#jogador2");
const btnReiniciar = document.querySelector("#reiniciar");

const placar = document.querySelector("#placar");
const inputPontuacao = document.querySelector("#input-pontuacao")

let pontosJogador1 = 0;
let pontosJogador2 = 0;

const addPontuacao = (e) => {
    const Jogador = e.target.id;
    
    if (Jogador === "jogador1") {
        pontosJogador1 += Number(inputPontuacao.value);
    };
    if (Jogador === "jogador2") {
        pontosJogador2 += Number(inputPontuacao.value);
    };
    
    inputPontuacao.value = 0;
    placar.innerText = `${pontosJogador1} a ${pontosJogador2}`;
    console.log(pontosJogador1, pontosJogador2);
}

const reiniciar = () => {
    pontosJogador1 = 0;
    pontosJogador2 = 0;
    placar.innerText = `${pontosJogador1} a ${pontosJogador2}`;
    inputPontuacao.value = 0
}

btnJogador1.addEventListener("click", addPontuacao );
btnJogador2.addEventListener("click", addPontuacao );
btnReiniciar.addEventListener("click", reiniciar );

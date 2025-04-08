//Preciso criar uma lista com 3 jogadores.
//Calcular a força de cada jogador e depois somar para saber a força do time.
//Calcular a força de cada jogador do time do computador
//Comparar os dois times para saber quem venceu.
personagem=["","",""]
viloes=["","",""]
forcaPersonagem=0
forcaViloes=0
for(let i=0;i<3;i++){
  escolhaPersonagem=prompt("Digite o seu personagem "+(i+1))
  personagem[i]=escolhaPersonagem
  forcaPersonagem+=(Math.floor(Math.random()*10)+1)
}
console.log(personagem)
console.log(forcaPersonagem)
for(let i=0;i<3;i++){
  indiceAleatorio=Math.floor(Math.random()*5);
  viloesPossiveis=["Romário","FelipeMello","Edmundo","Marcelinho","Yuri Alberto"]
  viloes[i]=viloesPossiveis[indiceAleatorio]
    forcaViloes+=(Math.floor(Math.random()*10)+1)
 
}
console.log(viloes)
console.log(forcaViloes)
if(forcaPersonagem>forcaViloes){
  alert("Seu time é muito forte. Você venceu!!!")
}
else{
  if(forcaPersonagem<forcaViloes){
    alert("Computador venceu!!!")
  }
  else{
    alert("Empate!!!")
  }
}

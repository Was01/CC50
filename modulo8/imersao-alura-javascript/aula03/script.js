rodada=1
while(rodada<=3){
  do{
    escolhaJogador=prompt("Nível: "+rodada+", escolha vidro:(1,2 ou 3) ?")
  }while(escolhaJogador>3)
  pisoQuebrado=Math.floor(Math.random()*3)+1
  if(escolhaJogador==pisoQuebrado){
    alert("Vidro quebrado!!! Acabou o jogo para você.")
    rodada=1000
  }
  else{
    alert("Passou!!! Piso quebrado estava na ponte: "+pisoQuebrado)
  }
  rodada=rodada+1
}
if (rodada==4){
  alert("Parabéns, você venceu!!!")
}

int media_movel(int pino){
  for(int i=n_pontos-1;i>0;i--){
    amostras[i]=amostras[i-1];
   }
   amostras[0]=analogRead(pino);
   
   float soma=0.0;

   for(int i=0;i<n_pontos-1;i++){
     soma+=amostras[i];
   }
   return soma/n_pontos;
}

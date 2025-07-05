int media_movel(int pino, float *amostra){
  for(int i=n_pontos-1;i>0;i--){
    amostra[i]=amostra[i-1];
   }
   amostra[0]=analogRead(pino);
   
   float soma=0.0;

   for(int i=0;i<n_pontos-1;i++){
     soma+=amostra[i];
   }
   return soma/n_pontos;
}

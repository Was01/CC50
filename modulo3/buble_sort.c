#include<stdio.h>
#include<stdlib.h>

#define tamanho 6

void buble_sort(int *v,int tam){
    int i,j,aux;
    for(j=0;j<tam-1;j++){
        for(i=0;i<tam-1;i++){
            if(v[i+1]<v[i]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }
}


int main(){
    int i;
    int v[] ={4,9,2,23,7,8};
    buble_sort(v,6);
     for(i=0;i<tamanho;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}

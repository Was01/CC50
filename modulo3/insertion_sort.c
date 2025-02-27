#include<stdio.h>
#include<stdlib.h>

#define tam 6

void insertion_sort(int *v){
    int i,j,aux;
    for(i=1;i<tam;i++){
        aux=v[i];
        j=i-1;
        while((j>=0)&&(aux<v[j])){
          v[j+1]=v[j];
          j--;
        }
        v[j+1]=aux;
    }
}


int main(){
    int i;
    int v[] ={16,11,6,3,30,35};
    insertion_sort(v);
    for(i=1;i<tam;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}

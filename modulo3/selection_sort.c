#include<stdio.h>
#include<stdlib.h>

#define tam 6

void selection_sort(int *v){
    int i,j,aux,min_index;
    for(j=0;j<tam-1;j++){
        min_index=j;
        for(i=j;i<tam;i++){
            if(v[i]<v[min_index]){
                min_index=i;
            }
        }
        if(v[min_index]<v[j]){
            aux=v[min_index];
            v[min_index]=v[j];
            v[j]=aux;
        }
    }
}


int main(){
    int i;
    int v[] ={16,11,6,3,30,35};
    selection_sort(v);
    for(i=0;i<tam;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}

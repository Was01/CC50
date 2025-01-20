#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    char nome[50];
    scanf("%s",nome);
    n=strlen(nome);
    for(int i=0;i<n;i++){
        printf("%c",nome[i]);
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    int n;
    char palavra[50];
    printf("Palavra: ");
    scanf("%s",palavra);
    n=strlen(palavra);
    for (int i=0;i<n;i++){
        if(palavra[i]>='a'&& palavra[i]<='z'){
            printf("%c",palavra[i]-32);
        }
        else{
            printf("%c",palavra[i]);
        }
    }
    printf("\n");
    return 0;
}

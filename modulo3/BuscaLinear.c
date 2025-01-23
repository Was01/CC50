#include<stdio.h>
#include<string.h>

int main() {
    char *names[] = {"Bill", "Charlie", "Fred", "Washington", "George", "Ginny", "Ron"};
    int tamanho = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < tamanho; i++) {
        if(strcmp(names[i],"Fred")==0){
            printf("Found, position: %d\n",i+1);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

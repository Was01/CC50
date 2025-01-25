
#include<stdio.h>
#include<string.h>

typedef struct{
    char *name;
    char *number;
}
person;

const int NUMBER=3;

int main(){
    person people[NUMBER];
    people[0].name="Bryan";
    people[0].number="+1-617-495-1000";
    people[1].name="David";
    people[1].number="+1-949-468-2750";
    people[2].name="George";
    people[2].number="+1-999-666-5555";
    for (int i=0;i<3;i++){
        if(strcmp(people[i].name,"Bryan")==0){
            printf("Found, number: %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

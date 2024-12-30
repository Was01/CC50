#include<stdio.h>

int main()
{
	int x,y,tam,espacos;
	printf("Informe o tamanho da piramide: ");
	scanf("%d",&tam);
	for(x=1;x<=tam;x++)
	{
		espacos=tam-x;
		for(y=1;y<=espacos;y++)
		{
			printf(" ");
		}
		for(y=1;y<=x;y++)
		{
			printf("#");
		}
		printf("\n");
	}
	
}

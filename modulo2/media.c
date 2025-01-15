#include<stdio.h>

const int TAMANHO=5;

float average (int length,int array[]);

int main()
{
	int scores[TAMANHO];
	for(int i=0;i<TAMANHO;i++)
	{
		printf("Digite a nota %d: ",i+1);
		scanf("%d",&scores[i]);
	}
	printf("Media: %.2f\n",average(TAMANHO,scores));
}

float average(int length,int array[])
{
	int sum=0;
	for(int i=0;i<length;i++)
	{
		sum+=array[i];
	}
	return sum/(float)length;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
		float trocof;
		int troco,troco1,troco5,troco10,troco25,troco50;
		troco1=0;
		troco5=0;
		troco10=0;
		troco25=0;
		troco50=0;
		do
		{
			printf("Troco: ");
			scanf("%f",&trocof);
		
		}while(trocof<0);
		trocof=trocof*100;
		troco=(int)trocof;
		while(troco>=0)
		{
			if(troco>=50)
			{
				troco50++;
				troco=troco-50;
			}
	
			else if(troco>=25)
			{
				troco25++;
				troco=troco-25;
			}
			else if(troco>=10)
			{
				troco10++;
				troco=troco-10;
			}
			else if(troco>=5)
			{
				troco5++;
				troco=troco-5;
			}
			else if(troco>=1)
			{
				troco1++;
				troco=troco-1;
			}
			else
			{
				break;
			}
		}
	printf("%d moedas de R$0,50.\n",troco50);
	printf("%d moedas de R$0,25.\n",troco25);
	printf("%d moedas de R$0,10.\n",troco10);
	printf("%d moedas de R$0,05.\n",troco5);
	printf("%d moedas de R$0,01.\n",troco1);
}
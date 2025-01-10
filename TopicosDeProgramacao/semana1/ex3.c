#include<stdio.h>


int soma(int n){
	int i,s;
	s=0;
	for(i=3;i<n;i++){
		s=s+i;
	}
	return s;
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",soma(n));
	return 0;
}
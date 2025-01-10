#include<stdio.h>

void Func(int A[],int n){
	int ch,i,j;
	for(j=1;j<n;j++){
		ch=A[j];
		i=j-1;
		while((i>=0)&&(A[i]>ch)){
			A[i+1]=A[i];
			i=i-1;
		}
		A[i+1]=ch;
	}
}	
	
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Func(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}

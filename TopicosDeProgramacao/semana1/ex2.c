#include<stdio.h>

int maximo(int A[],int n){
	int m;
	if(n==1)
		return A[0];
	else{
		m=maximo(A,n-1);
		if(m>A[n-1])
			return m;
		else
			return A[n-1];
	}
	
}


int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	
	printf("%d ",maximo(A,n));
	return 0;
}
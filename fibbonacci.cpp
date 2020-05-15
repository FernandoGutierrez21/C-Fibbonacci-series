#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	printf("Numero de elementos de la serie fibbonacci: "); 
	scanf("%d",&n);
	int num[n];
	if(n>=2){
		num[0]=0;num[1]=1;num[2]=1;
		printf("%d\n%d\n%d\n",num[0],num[1],num[2]);
		for(int i=3; i<n;i++){
			num[i]=num[i-1]+num[i-2];
			printf("%d\n",num[i]);
		}
	}else if (n==1) printf("0");
	return 0;
}

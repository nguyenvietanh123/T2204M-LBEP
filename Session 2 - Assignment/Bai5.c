#include<stdio.h>
int main(){
	int n;
	int i;
	int sum=0;
	scanf("%d",&n);
	while(i<n){
		if(n % i == 0){
			sum += i;
		}
		i++;
	}
	
	if(sum==n){
		printf("So hoan hao la %d",sum);

	}else{
		printf("%d la so ko hoan hao",sum);
	}
	
}


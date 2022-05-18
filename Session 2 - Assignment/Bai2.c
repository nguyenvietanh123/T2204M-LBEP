#include<stdio.h>
int main(){
	int n;
	int max = 0;
	int i = 0;
	scanf("%d",&n);
	while(i<n){
		if(i % 2 ==0 && i % 3 ==0){
			max = i;
		}
		i++;
	}
	printf("%d",max);
}

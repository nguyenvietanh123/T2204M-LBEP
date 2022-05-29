#include<stdio.h>

int main(){
	int n;
	do{
	printf("Nhap n :");
	scanf("%d",&n);
	}while(n <=0);
	int arr[n];
	int count = 0,max = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(count>max){
				max=count;
			}
		}else{
			count =0;
		}
	}
	printf("So luong lien tiep : %d",max);
}

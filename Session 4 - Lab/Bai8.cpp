#include<stdio.h>

int main(){
	int n;
	printf("Nhap n :");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang :\n ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
}
	return 0;
}

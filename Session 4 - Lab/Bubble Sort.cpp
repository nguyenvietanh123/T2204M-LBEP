#include<stdio.h>

int main(){
	int i,j,temp,arr[5]={90,23,9,25,16};
	for(int i=0;i<5-1;i++){
		// i<5-1 vi 4 so dung thi so con lai la dung
		for(int j=0;j<5-i-1;j++){
			//i<5-i-1 : -i la tim ra 1 so roi, -1 vi ben duoi la j+1 
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}

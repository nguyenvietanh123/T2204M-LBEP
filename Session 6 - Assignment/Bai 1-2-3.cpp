#include<stdio.h>


int uocchunglonnhat(int a,int b){
	int max=0;
	for(int i =1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			max=i;
		}
	}
	return max;
}

int boichungnhonhat(int a,int b){
	int min =(a*b)/ uocchunglonnhat(a,b);
	return min;
}
	
int tongchuso(int n){
	int sotachra;
	int sum=0;
	while(n!=0){
		sotachra=n%10;
		sum += sotachra;
		n=n/10;
	}
	return sum;
}

int main(){
	int x,y;
	printf("Nhap x,y :");
	scanf("%d%d",&x,&y);
	int max = uocchunglonnhat(x,y);
	printf("Uoc chung lon nhat la : %d \n",max);
	int min = boichungnhonhat(x,y);
	printf("Boi chung nho nhat la : %d \n",min);
	int z;
	printf("Nhap z :");
	scanf("%d",&z);
	int sum = tongchuso(z);
	printf("Tong cac chu so la : %d",sum);
}

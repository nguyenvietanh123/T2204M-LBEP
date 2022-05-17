#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap a =");
	scanf("%d",&a);
	int b;
	printf("Nhap b =");
	scanf("%d",&b);
	int c;
	printf("Nhap c =");
	scanf("%d",&c);
	if(a==0){
		float x;
		x = -c/b;
		printf("PT bac 1 : x= %f",x);
		
	}else{
		int dt;
		dt=b*b-4*a*c;
		if(dt<0){
			printf("PT vo nghiem");
		}else{
			if(dt==0){
				printf("PT co nghiem kep x = %d",-b/(2*a));	
			}else{
				float x1,x2;
				x1=(-b+sqrt(dt))/(2*a);
				x2=(-b-sqrt(dt))/(2*a);
				printf("PT co 2 nghiem phan biet x1 = %f, x2 = %f",x1,x2);
			}
		}
	}
	return 0;
}

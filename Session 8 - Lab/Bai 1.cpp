#include<stdio.h>
#include<string.h>

int main(){
	char s1[100],s2[100];
	printf("Nhap chuoi s1 :");
	scanf("%s",s1);
	printf("Nhap chuoi s2 :");
	scanf("%s",s2);
		if(strlen(s1)>strlen(s2)){
			printf("%s",s1);
		}else{
			printf("%s",s2);
		}
		
	
}

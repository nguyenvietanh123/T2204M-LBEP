#include<stdio.h>
#include<string.h>

int main(){
	char str[10][100];
	int max=0;
	printf("Nhap chuoi :\n");
	for(int i=0;i<10;i++){
		scanf("%s",str[i]);
	if(strlen(str[i]) > max){
		max = strlen(str[i]);
		}
	}
	for(int i=0;i<10;i++){
		if(strlen(str[i])==max){
		printf("\nChuoi co do dai lon nhat la :%s\n co %d ki tu\n",str[i],max);
		}
	}
}

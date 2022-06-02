#include<stdio.h>

int main() {
	char arrs[10][100];
	printf("Nhap cac chuoi:\n");
	for(int i=0;i<10;i++){
		scanf("%s",arrs[i]);
	}
	printf("Hien thi danh sach\n");
	for(int i=0;i<10;i++){
		printf("%s\n",arrs[i]);
	}
}

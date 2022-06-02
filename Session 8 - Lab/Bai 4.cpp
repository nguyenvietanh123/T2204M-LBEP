#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, n;
    printf("Nhap chuoi: ");
    gets(str);
    n = strlen(str)-1;
    printf("Chuoi %s sau khi dao nguoc la:", str);
    for(i=n; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}

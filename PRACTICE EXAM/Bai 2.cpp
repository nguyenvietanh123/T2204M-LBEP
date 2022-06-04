#include <stdio.h>
#include <string.h>
char s[100] ;
void Str (char s[]){
    printf("Nhap chuoi ky tu: ",s);
    scanf("%s",s);
    printf("\nChuoi chua sap xep: %s \n", s);
}
void sapxep(char s[]){
  int dodai = strlen(s);
  int i, j;
  char temp;

  for (i = 0; i < dodai-1; i++) {
      for (j = i+1; j < dodai; j++) {

         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
  }
}
int main () {
  Str(s);
  sapxep(s);
  printf("\nChuoi sau khi sap xep la: %s \n", s);
  return 0;
}

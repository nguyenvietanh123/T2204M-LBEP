#include<stdio.h>
 
int main() {
    int n, temp;
    do{
    	printf("Nhap so nguyen co 3 chu so: ");
    	scanf("%d", &n);
    	if(n < 99){
    		printf("Moi nhap lai!\n");
		}else if(n > 999){
			printf("Moi nhap lai!\n");
		}
	}while(n < 99 || n > 999);
    printf("So nguyen %d doc la : ", n);
    while(n != 0) {
        temp = (temp * 10) + (n % 10);
        n /= 10;
    } 
    while(temp != 0) {
        switch(temp % 10) {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }     
        temp = temp / 10;
    }
    return 0;
}

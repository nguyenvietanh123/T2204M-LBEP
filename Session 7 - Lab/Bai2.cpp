#include <stdio.h>
#include"function.h"

int main(){
	int n;
	int a[n];
	do{
    	printf("Enter n: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("n must be greater than 0\n");
        }
    }while(n <= 0);
    input(n,a);
	printf("The smallest prime number greater than every value in the array is: %d", findSmallestPrimeNumber(a, n));
}

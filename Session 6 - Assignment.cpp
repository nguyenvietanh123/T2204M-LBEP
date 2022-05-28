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

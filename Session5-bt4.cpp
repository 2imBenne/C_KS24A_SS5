#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap vao mot so nguyen tu 1 den 10: ");
	scanf("%d",&n);
	if(n < 1 || n > 10 ){
		printf("Vui long nhap dung! "); 
		return 1; 
	} 
	for(int i = 1 ; i <= 10; ++i){
		printf("%d x %d = %d\n",n,i,n * i);
	} 	
	return 0; 
} 

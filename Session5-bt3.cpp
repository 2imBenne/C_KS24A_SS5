#include <stdio.h>

int main(){
	int n, sum = 0;
	printf("Moi nhap vao mot so nguyen n: ");
	scanf("%d",&n);
	for(int i=1; i <= n ; i++){
		sum += i ;		
	} 
	printf("Tong cac so tu 1 den %d la: %d ",n,sum) ;
	return 0; 
} 

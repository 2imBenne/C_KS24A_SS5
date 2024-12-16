#include <stdio.h>

int main(){
	for(int i = 1 ; i <= 9; ++i){ //trong vong lap for khai bao bien i = 1 va cho bien i tang len toi 9(bang cuu chuong tu 1-9) 
		printf("Bang cuu chuong %d \n", i);
		for(int m=1 ; m <= 10;++m){ // trong vong for khai bao m = 1 va tang cho den khi bang 10( cho bien i nhan tu 1->10 => bang cuu chuong) 
			printf("%d x %d = %d \n",i,m,i*m); 
		} 
	}	
	return 0; 
} 

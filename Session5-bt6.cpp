#include <stdio.h> 

int main(){
	int choose; 
	float n1,n2;
	while(1){
		printf("\n==== CALCULATOR ====\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n"); 
		printf("5. Thoat\n");
		printf("Lua chon cua ban la: ");	
		scanf("%d",&choose); 
		if(choose == 5){
			printf("Thoat chuong trinh,hen gap lai.\n");
			break;	
		} 
		
		printf("Moi nhap so thu nhat: ");
		scanf("%f",&n1); 
		printf("Moi nhap so thu hai: ");
		scanf("%f",&n2); 

		switch(choose){
			case 1: 
			printf("Tong cua %.2f và %.2f là: %.2f\n", n1, n2, n1 + n2); 
			break; 
			case 2: 
			printf("Hieu cua %.2f và %.2f là: %.2f\n", n1, n2, n1 - n2); 
			break;
			case 3: 
			printf("Tich cua %.2f và %.2f là: %.2f\n", n1, n2, n1 * n2); 
			break;
			case 4: 
			if(n2 != 0){
			printf("Thuong cua %.2f và %.2f là: %.2f\n", n1, n2, n1 / n2); 
			}
				else{
					printf("Loi!!! Mau so khong the la so 0 "); 
				} 
			break;
			default:
			printf("Lua chon khong hop le,thu lai!");
			break; 
		} 
	} 
	return 0; 
} 

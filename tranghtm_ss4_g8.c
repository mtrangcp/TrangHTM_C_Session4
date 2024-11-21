#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c );
    
    if ( (a+b) > c && (a+c) > b && (c+b) > a ){
    	printf("La 3 canh cua tam giac!");
    
	}else {
		printf("Khong phai 3 canh cua tam giac!");
		
	}
	
    return 0;
}

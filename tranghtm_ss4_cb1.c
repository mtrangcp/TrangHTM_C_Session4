#include <stdio.h>

int main() {
    int num;

    printf("Nhap so: ");
    scanf("%d", &num);

    if (num < 0 ) {
        printf("%d la so am!", num);
        
    }else if (num > 0 ){
    	printf("%d la so duong!", num);
    	
	}else{
		printf("%d k la so duong, k la so am!", num);
	}

    return 0;
}

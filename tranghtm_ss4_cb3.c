#include <stdio.h>

int main() {
    int num;

    printf("Nhap so: ");
    scanf("%d", &num);

    if (num % 3 == 0 &&  num % 5 == 0) {
        printf("%d chia het cho 3 va 5!", num);
        
    }else if (num % 3 == 0 &&  num % 5 != 0 ){
		printf("%d chia het cho 3!", num);
		
	}else if (num % 3 != 0 &&  num % 5 == 0 ){
		printf("%d chia het cho 5!", num);
		
	}else {
		printf("%d k chia het cho 3 va 5!", num);
	}

    return 0;
}

#include <stdio.h>

int main() {
    int digit1, digit2, digit3;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &digit1, &digit2, &digit3);

    if ( ((digit3 > digit1) && (digit3 < digit2)) || ((digit3 > digit2) && (digit3 < digit1))) {
        printf("So %d nam giua %d va %d", digit3, digit1, digit2);
        
    }else {
		printf("So %d khong nam giua %d va %d", digit3, digit1, digit2);
	}

    return 0;
}

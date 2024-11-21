#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &day, &month, &year );
    
    if ( day >= 1 && day <= 31 ){
    	printf("Ngay hop le!\n");
    
	}else {
		printf("Ngay khong hop le!\n");
	}
	
	if ( month >= 1 && month <= 12 ){
    	printf("Thang hop le!\n");
    
	}else {
		printf("Thang khong hop le!\n");
	}
	
	if ( year >= 1 ){
    	printf("Nam hop le!\n");
    
	}else {
		printf("Nam khong hop le!\n");
	}
	
    return 0;
}

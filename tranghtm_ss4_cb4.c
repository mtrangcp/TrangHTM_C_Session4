#include <stdio.h>

int main() {
    int thang;

    printf("Nhap thang: ");
    scanf("%d", &thang);

    if (thang < 1 ||  thang > 12) {
        printf("thang %d k hop le!", thang);
        
    }else if (thang == 2 ){
		printf("Thang %d co 28 hoac 29 ngay!", thang);
		
	}else if (thang == 4 || thang == 6 || thang == 9 || thang == 11 ){
		printf("Thang %d co 30 ngay!", thang);
		
	}else {
		printf("Thang %d co 31 ngay!", thang);
	}
	


    return 0;
}

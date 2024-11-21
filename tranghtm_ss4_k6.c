#include <stdio.h>
#include <math.h>

int main() {
    int soDienDauThang, soDienCuoiThang, soDien, tien;

    printf("Nhap so dien dau thang: ");
    scanf("%d", &soDienDauThang);
    
    if ( soDienDauThang <=0 ){
    	printf("So dien k hop le!");
    	return 1;
	}
    
    printf("Nhap so dien cuoi thang: ");
    scanf("%d", &soDienCuoiThang);
    
    if ( soDienCuoiThang < soDienDauThang ){
    	printf("So dien cuoi thang phai >= dau thang!");
    	return 1;
	}
    
    soDien = soDienCuoiThang - soDienDauThang;

    if (soDien >= 0 && soDien < 50) {
    	tien = soDien * 10000;
        printf("(0 - 50)So tien can tra la: %d", tien);
        
    }else if ( soDien >= 50 && soDien < 100 ){
    	
    	tien = (soDien - 50)*15000 + 50*10000;
		printf("(50 - 100)So tien can tra la: %d", tien);
		
	}else if ( soDien >= 100 && soDien < 150 ){
		
		tien = (soDien - 100)*20000 + 50*15000 + 50*10000;
		printf("(100 - 150)So tien can tra la: %d", tien);
		
	}else if ( soDien >= 150 && soDien < 200 ){
		
		tien = (soDien - 150)*25000 + 50*20000 + 50*15000 + 50*10000;
		printf("(150 - 200)So tien can tra la: %d", tien);
		
	}else {
		tien = (soDien - 200)*30000 + 50*25000 + 50*20000 + 50*15000 + 50*10000;
		printf("(200)So tien can tra la: %d", tien);
		
	}
	
    return 0;
}

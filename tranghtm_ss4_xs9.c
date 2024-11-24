#include <stdio.h>

int checkYear(int n){
	int i;
	if ( ( n % 4 == 0 && n % 100 != 0) || ( n % 400 == 0)){
		return 1;
	}
	
	return 0;
}

int main() {
    int day, month, year;

    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &day, &month, &year );
   
	if ( year >= 1 ){
    	printf("Nam hop le!\n");
    	
    	if ( month >= 1 && month <= 12 ){
	    	printf("Thang hop le!\n");
	    	
	    	if ( day >= 1 && day <= 31 ){
	    		if ( (checkYear(year) == 1 && month == 2 && day <= 29) || (checkYear(year) == 0 && month == 2 && day <= 28 ) ){
	    			printf("Ngay hop le!\n");
	    			
				}else if ( (month == 4 || month == 6 || month == 9 || month == 11) && day <= 30){
					printf("Ngay hop le!\n");
					
				}else if ( (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31){
					printf("Ngay hop le!\n");
					
				}else{
					printf("Ngay khong hop le!\n");
				}
			}else {
				printf("Ngay khong hop le!\n");
			}
	    
		}else {
			printf("Thang khong hop le!\n");
		}
    
	}else {
		printf("Nam khong hop le!\n");
	}
	
    return 0;
}

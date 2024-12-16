#include<stdio.h>
#include<math.h>
int main(){
	int year; 
	printf(" moi ban nhap vao nam ban muon kiem tra\n");
	scanf("%d", &year);
	if(year%4==0 && year%100 !=0 || year%400==0){
		printf("%d la nam nhuan",year);
	}else {
		printf("%d khong phai la nam nhuan",year); 
	}
	return 0;
}

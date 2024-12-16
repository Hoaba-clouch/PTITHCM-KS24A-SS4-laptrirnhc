#include<stdio.h>
#include<math.h>
int main(){
	float a,b ,c;
	
printf("moi ban nhap vao so thu nhat");
scanf("%f",&a);
printf("moi ban nhap so thu hai");
scanf("%f",&b);
printf("moi ban nhap vao so thu ba");
scanf("%f",&c);
if(c>b&& c<a|| c<b && c> a){
	printf("so thu ba nam trong khoang so mot va do hai");
}else{
	printf("so thu ba khong nam trong so mot va so hai");
}
return 0;
}

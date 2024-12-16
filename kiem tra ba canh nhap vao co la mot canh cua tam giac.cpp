#include<stdio.h>
#include<math.h>
int main(){
	 a,b ,c;
	
printf("moi ban nhap vao canh thu nhat");
scanf("%f",&a);
printf("moi ban nhap canh thu hai");
scanf("%f",&b);
printf("moi ban nhap vao canh thu ba");
scanf("%f",&c);
if(a+b>c&& b + c > a && c + a > b){
	printf("chi so ba cach co the tao thanh mot hinh tam giac");
}else{
	printf("chi so ba cnh khong tao thanh mot hinh tam giac");
}
return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	int a,b ,c ,temp;
	
printf("moi ban nhap vao so thu nhat");
scanf("%d",&a);
printf("moi ban nhap so thu hai");
scanf("%d",&b);
printf("moi ban nhap vao so thu ba");
scanf("%d",&c);
 if (a > b) {
     int temp = a;
    a = b;
    b = temp;
} else if(b > c) {
    int temp = b;
    b = c;
    c = temp;
}else if(a>c){
int temp = a;
    a = c;
    c = temp;}
printf("%d, %d,%d", a ,b ,c);
return 0;
}

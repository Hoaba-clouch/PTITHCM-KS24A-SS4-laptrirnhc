#include<iostream>
using namespace std;
int main()
{
	int b;
		printf("hay nhap thang: ");
		scanf("%d",&b);
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		{
			printf("thang %d co 31 ngay ",b);
		}
		else if(b==2)
		{
			printf("thang %d co 28 hoac 29 ngay",b);
		}
		else if (b<1||b>12)
		{
			printf("thang %d ko hop le",b);
			
		}
		else {
			printf("thang %d co 30 ngay",b);
		}
	return 0;
 } 

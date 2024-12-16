#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
	{
		
		printf("%d chia het cho 3 va 5 \n",n);
	}
		else if (n%3!=0&&n%5!=0) 
		{
	printf("%d ko chia het cho 3 va 5 \n",n);
        }
		 else if(n%3==0&&n%5!=0)
		{
			printf("%d chia het cho 3 nhung ko chia het cho 5 \n",n);
		}
	  else if(n%5==0&&n%3!=0);
		{
			printf("%d chia het cho 5 nhung ko chia het cho 3 \n",n);
		}
		
	

	return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	int sodienbandau,sodiensaunay,sodientieuthu, monneyElectric;
	printf("moi banj nhap vao so dien cu ");
	scanf("%d", &sodienbandau);
	printf("moi banj nhap vao so dien moi ");
	scanf("%d", &sodiensaunay);
	sodientieuthu = sodiensaunay - sodienbandau;
	if (sodientieuthu>0 && sodientieuthu <50){
		monneyElectric = sodientieuthu*10000;
	}else if (sodientieuthu<100){
		monneyElectric= 50*10000+(sodientieuthu-50)*15.000;
	}else if (sodientieuthu<150){
	monneyElectric= 50*10000+50*15000+(sodientieuthu-100)*20.000;	
		}else if (sodientieuthu<200){
			monneyElectric= 50*10000+50*15000+50*20000+(sodientieuthu-150)*25.000;
		}else {
					monneyElectric= 50*10000+50*15000+50*20000+50*25000+(sodientieuthu-200)*30.000;
				}
				printf("tong tien dien phai la %d dong",monneyElectric);
				return 0;
}
	
	
	

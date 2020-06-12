// nhap mot so tu ban phim  ma bat buoc phai la 1 thu trong tuan
#include <stdio.h>

int main(){
	int a;
	do{
		printf("nhap 1 so tu ban phim la mot thu trong tuan");
        scanf("%d", &a);
    }while(!(a==2 || a == 3 || a==4 || a ==5 || a == 6 || a == 7 || a == 8));
}
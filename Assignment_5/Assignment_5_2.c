// Nhap 1 so nguyen duong, tim so thuoc day fibonaci nho hon va gan nhat (vd n = 20 --> tim ra so 13)
#include <stdio.h>

int main(){
    int n,n1,n2;
    int temp =1;
    printf("Nhap so nguyen duong n tu ban phim : ");
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    while(temp>0){
        temp = n1 + n2;
        n1 = n2;
        if(temp>=n){
            break;
        }
        n2 = temp;
    }printf("\nSo nho hon va gan nhat cua n trong day Finobanci la: %d", n2);
}
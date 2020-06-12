// nhap 2 so a,b. Tim uoc chung lon nhat cua a,b
#include <stdio.h>

int main(){
    int a, b, UCLN;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("\nNhap so nguyen b: ");
    scanf("%d", &b);
    while (a != b){
        if (a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }UCLN = a;
    printf("\nUoc chung lon nhat cua a,b la: %d", UCLN);
}
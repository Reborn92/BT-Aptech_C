//Nhap vao so tien gui ngan hang, so nam gui, gia su lai 8% /nam. Hoi sau bang do nam thu duoc tong bao nhieu tien
#include <stdio.h>

int main(){
    int TG,SN;
    printf("Nhap vao so tien gui ngan hang: ");
    scanf("%d", &TG);
    printf("\nNhap vao so nam gui ngan hang: ");
    scanf("%d", &SN);
    for(int i = 1; i <= SN; i++){
        TG = TG + TG*8/100;
    }printf("\nSau %d nam thi tong tien thu duoc la: %d", SN, TG);
}
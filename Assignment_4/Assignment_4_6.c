// Nhap vao so tien gui ngan hang, so tien muon thu duoc, gia su lai 8% /nam. Hoi can gui bao nhieu nam.
#include <stdio.h>

int main(){
    int TG, ST, SN;
    printf("Nhap vao so tien gui ngan hang: ");
    scanf("%d", &TG);
    printf("\nNhap vao so tien muon thu duoc: ");
    scanf("%d", &ST);
    SN = 0;
    while(TG < ST){
        TG = TG + TG*8/100;
        SN++;
    }printf("\nSo nam can gui la: %d", SN);
}
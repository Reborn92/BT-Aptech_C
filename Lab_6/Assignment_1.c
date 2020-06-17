//Tinh trung binh cong cac so le trong mang n so
#include <stdio.h>

int main(){
    int n;
    printf("Nhap vao so luong cua mang so :");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap vao gia tri thu %d cua mang : ", i+1);
        scanf("%d", &ary[i]);
    }
    int TbCong = 0;
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] % 2 != 0){
            dem++;
            TbCong += ary[i];
        }
    }if(dem == 0){
        printf("\nMang khong co so le!");
    }else{
        TbCong = TbCong / dem;
        printf("Trung binh cong cac so le trong mang la : %d", TbCong);
    }
}
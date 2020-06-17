// Nhap mang n so nguyen, tim so le cuoi cung cua mang
#include <stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
    int ary[n];
    for(int i=0; i<n; i++){
        printf("\nNhap phan tu thu %d : ", i+1);
        scanf("%d", &ary[i]);
    }
    int lastodd = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] % 2 != 0){
            lastodd = ary[i];
        }
    }if(lastodd == 0){
        printf("Mang nay khong co so le!\n");
    }else printf("So le cuoi cung cua mang la : %d", lastodd);
}
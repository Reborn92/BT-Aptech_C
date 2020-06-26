#include <stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int ary[n];
    printf("\nNhap vao mot mang so nguyen tu ban phim ");
    for(int i = 0; i < n; i++){
        printf("\nNhap phan tu thu %d cua mang : ", i+1);
        scanf("%d", &ary[i]);
    }
    int temp = 1;
    for(int i = 0; i < n; i++){
        if(ary[i] % 2 == 0){
            temp = ary[i];
        }
    }
    if(temp % 2 == 0){
        printf("\nSo chan cuoi cung cua mang la : %d ", temp);
    }else{
        printf("\nMang nay khong co so chan!");
    }
}
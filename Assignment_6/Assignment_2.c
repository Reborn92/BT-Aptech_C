// Nhap mang n so nguyen, tim so nguyen duong nho nhat
#include <stdio.h>

int main(){
    int n, min;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int ary[n];
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &ary[i]);
    }
    min = 0;
    for(int i=1; i<n; i++){
        if(ary[i] >0){
            min = ary[i];
            break;
        }
    }if(min == 0){
        printf("\nMang nay khong co so nguyen duong!");
    }else{
            for(int i=0; i<n; i++){
                if(ary[i] < min && ary[i] > 0){
                min = ary[i];
                }
            }printf("\nSo nguyen duong nho nhat cua mang la : %d", min);
    }
}


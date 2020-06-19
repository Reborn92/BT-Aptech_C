// Tim so nguyen to trong mang n so nguyen duong
#include <stdio.h>

int main(){
    int n;
    printf("Nhap so luong phan tu cua mang : ");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap gia tri cua phan tu thu %d ", i+1);
        scanf("%d", &ary[i]);
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 2; j<ary[i]/2; j++){
            if(ary[i]<=2){
                break;
            }else if(ary[i]%j == 0){
                flag = false;
                break;
            }
        }if(flag) printf("%d ",ary[i]);
    }
}
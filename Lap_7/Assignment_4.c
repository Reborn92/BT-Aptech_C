// cho mang n so nguyen va 1 so x, Tim so trong mang co gia tri nho hon va gan x nhat
#include <stdio.h>

int main(){
    int n,x;
    printf("Nhap so luong phan tu cua mang : ");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap gia tri cua phan tu thu %d : ", i+1);
        scanf("%d", &ary[i]);
    }
    printf("Nhap so x : ");
    scanf("%d", &x);

    // Tim hieu lai ve cach sap xep mang. ro rang dieu kien
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(ary[j] > ary[j+1]){
                int temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep lai : ");
    for(int i =0; i < n; i++){
        printf("%d ", ary[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] < x){             // Su dung ham while o day la sai. vi ary[i] ma < x thi thanh vong lap vo tan chu khong phai dieu kien
        count++;      
        }  
    }
    printf("\nGia tri nho hon va gan voi x nhat la : %d", ary[count-1]); // phat hien ra loi quen "," truoc thanh phan muon in
}
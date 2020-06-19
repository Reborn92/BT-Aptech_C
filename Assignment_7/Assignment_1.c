/* Nhap gia tri cho mot mang n so nguyen, 
dam bao la moi lan nhap moi 1 so thi sap xep luon mang de khi xong phan tu cuoi cung se duoc luon mang co gia tri tu be --> lon
*/
#include <stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
    int ary[n];
    int temp;
    for(int i = 0; i < n; i++){
        printf("\nNhap gia tri thu %d cua mang: ", i+1);
        scanf("%d", &ary[i]);
        int j = i-1;
        int temp = ary[i];
        while((temp < ary[j]) && (j >= 0)){
            ary[j+1] = ary[j];
            j--;
        }ary[j+1] = temp;        
    }
    printf("\nMang sau khi nhap la : ");
    for(int i = 0; i < n; i++){
        printf("%d ", ary[i]);
    }
}
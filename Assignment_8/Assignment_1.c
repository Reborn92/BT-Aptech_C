// Viet truong trinh sau su dung con tro:
// Nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *p;
    printf("Nhap so luong cua mang : ");
    scanf("%d", &n);
    p = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu : %d", i);
        scanf("%d", p+i);
    }
    printf("\nin mang : ");
    for(int i = 0; i < n; i++){
        printf("%d", *(p+i));
    }
    int dem = 0, max = 0;
    for(int i = 0; i < n; i++){
        if(*(p+i) > 0){
            dem++;
            if(dem > max){
                max = dem;
            }
        }else{
            dem = 0;
        }
    }printf("So luong cac so duong lien tiep nhieu nhat la : %d ", max);
}
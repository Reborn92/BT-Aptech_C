// Nhap 1 so n, tim cac uoc va tinh tong uoc cua n
#include <stdio.h>

int main(){
    int n;
    int S = 0;
    printf("Nhap so nguyen n: \n");
    scanf("%d", &n);
    printf("Cac uoc cua n: ");
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            printf("%d ", i);
            S = S + i;
        }
    }printf("\nTong cac uoc cua %d la : %d", n, S);
}
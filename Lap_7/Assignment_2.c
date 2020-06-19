//Tim chu so nho nhat cua so nguyen duong n
#include <stdio.h>

int main(){
    int n;
    int min = 10;
    printf("Nhap vao so nguyen duong n tu ban phim: ");
    scanf("%d", &n);
    while(n>0){
        if(n%10 < min){
            min = n%10;
        }n/=10;
    }printf("\n Chu so nho nhat cua so nguyen duong n : %d", min);
}
//Tim chu so lon nhat cua so nguyen duong n
#include <stdio.h>

int main(){
    int n;
    int max = 0;
    printf("Nhap vao so nguyen duong n tu ban phim: ");
    scanf("%d", &n);
    while(n>0){
        if(n%10 > max){
            max = n%10;
        }n/=10;
    }printf("\n Chu so lon nhat cua so nguyen duong n : %d", max);
}
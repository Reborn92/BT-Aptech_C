/* Tuong tuong mang so nay la 1 vong tron. Nhap 1 gia tri la so buoc nhay
    In ra mang sau khi nhay n buoc.
    vd: Khi co mang : 1, 2, 3, 4. Neu nhap vao so buoc la 2 thi mang bien thanh: 3, 4, 1, 2.
*/
#include <stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &ary[i]);
    }
    int x;
    printf("Nhap so buoc nhay : ");
    scanf("%d", &x);
    while(x>n){
        x -=n;
    }
    while(x > 0){
        int temp;
        temp = ary[0];
        for(int i = 0; i < n-1 ; i++){
            ary[i] = ary[i+1];
        }ary[n-1] = temp;
        x--;
    }
    printf("Mang sau khi nhay: ");
    for(int i = 0; i < n; i++){
        printf("%d", ary[i]);
    }
}
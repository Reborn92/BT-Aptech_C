/* Nhap 1 so n tu ban phim. tim so thu n trong day Fibonaci
    Day fibonaci: = 0, 1, 1, 2, 3, 5, 8, .....f(n)....
    voi gia tri cua tu so thu 3 la tong cua 2 so truoc do.
*/
#include <stdio.h>

int main(){
    int n,S;
    int temp1 = 0;
    int temp2 = 1;
    printf("Nhap mot so n tu ban phim: ");
    scanf("%d", &n);
    S=0;
    if(n==0){
        printf("\nSo thu %d trong day Fibonaci la : 0",n);
    }else if(n == 1){
        printf("\nSo thu %d trong day Fibonaci la : 1",n);
    }else{
        for(int i=3; i<=n; i++){
            if(i%2!=0){
            temp1 = temp2 + temp1;
            S = temp1;
            }else{
            temp2 = temp1 + temp2;
            S = temp2;
            }
        }printf("\nSo thu %d trong day Finonaci la : %d", n, S);
    }

}

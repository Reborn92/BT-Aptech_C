#include <stdio.h>

int main(){
    int a,b,c;
    printf("nhap vao 3 so a,b,c \n");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    scanf("%d" ,&c);
    if(a<b){
        if(a<c){
            printf("So nho nhat la so %d \n" ,a);
        }else{
            printf("So nho nhat la : %d \n" ,c);
        }
    }else{
        if(b<c){
            printf("So nho nhat la : %d \n" ,b);
        }else{
            printf("So nho nhat la : %d \n" ,c);
        }
    }
}
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,x,y;    
    printf("Nhap vao so nguyen a thu nhat \n");
    scanf("%f" ,&a);
    x = a-int(a);
    while(x != 0){
        printf("So a vua nhap khong phai la so nguyen");
        printf("Nhap lai so nguyen : ");
        scanf("%f" ,&a);
        x = a-(int)a;
    }printf("Nhap vao so nguyen b thu hai \n");
    scanf("%f" ,&b);
    x = b-int(b);
    while(x != 0){
        printf("So b vua nhap khong phai la so nguyen");
        printf("Nhap lai so nguyen : ");
        scanf("%f" ,&b);
        x = b-(int)b;
    }if(a>=b){
        if(b==0){
            printf("khong tinh duoc y \n");
        }else{
            y = a/b;
            printf("Thuong cua hai so la: %f \n" ,y);
        }
    }else{
        y = a*b;
        printf("Tich cua hai so la : %f \n" ,y);
    }system("pause");
}
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float x,i;
    printf("Nhap vao 3 so a,b,c theo thu tu lan luot \n");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    scanf("%d" ,&c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh co vo so nghiem \n");
            }else{
                printf("Phuong trinh vo nghiem \n");
            }
        }else{
            x = -c/b;
            printf("Phuong trinh co mot nghiem duy nhat : %f \n" ,x);
        }
    }else{
        i = b*b - 4*a*c;
        if(i==0){
            x = -b/(2*a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %f \n" ,x);
        }else{
            if(i<0){
                printf("Phuong trinh vo nghiem \n");
            }
            else{
                x = (-b+sqrt(i))/(2*a);
                printf("Nghiem thu nhat cua phuong trinh la : %f \n" ,x);
                x = (-b-sqrt(i))/(2*a);
                printf("Nghiem thu hai cua phuong trinh la : %f \n" ,x);
            }
        }
    }
}
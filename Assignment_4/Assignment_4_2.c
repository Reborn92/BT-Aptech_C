// yeu cau nguoi dung nhap vao 1 trong cac ki tu y, Y, n, N
#include <stdio.h>

int main(){
    char a;
    do{
        printf("Nhap vao mot trong cac ki tu sau: y, Y, n, N \n");
        scanf("%c", &a);
    }
    while(!(a == 'y'|| a == 'Y' || a == 'n' || a == 'n'));
}
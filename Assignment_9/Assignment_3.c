// Nhap vao mot mang n chuoi, sap xep mang nay theo thu tu alphabe

#include <stdio.h>
#include <string.h>

int main(){
    char n[200];
    printf("Nhap vao mang n chuoi : ");
    scanf("%s", n);
    for(int i = 0; i < strlen(n)-1; i++){
        for(int j = 0; j < strlen(n)-i-1; j++){
            if(n[j] > n[j+1]){
                char temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }printf("Chuoi sau khi sap xep lan 1 : %s", n);
}
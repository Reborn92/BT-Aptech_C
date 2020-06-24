// Nhap vao 1 chuoi, dem xem trong chuoi co cac nguyen am co so luong bao nhieu, va ky tu khac so luong bao nhieu,
#include <stdio.h>
#include <string.h>

void nhapChuoi(char a[]){
    printf("Nhap chuoi : ");
    scanf("%s", a);
}

void inChuoi(char a[]){
    printf("\nChuoi vua nhap la: %s", a);
}

int main(){
    char s1[200];
    nhapChuoi(s1);
    inChuoi(s1);
    char s2[] = "aieouy";
    printf("\ndo dai chuoi s1 : %d ", strlen(s1));
    printf("\ndo dai chuoi s2 : %d ", strlen(s2));
    int count = 0;
    for(int i =0; i < strlen(s2); i++){
        for(int j = 0; j < strlen(s1); j++){
            if(s2[i] == s1[j]){
                count++;
            }
        }
    }printf("\nSo luong nguyen am trong chuoi la : %d va so luong ky tu khac la : %d ", count, (strlen(s1)-count));
}
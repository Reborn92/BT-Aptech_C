//Nhap vao mot chuoi, viet ham tim ki tu trong chuoi

#include <stdio.h>
#include <string.h>

void nhapChuoi(char A[]){
    printf("Nhap chuoi : \n");
    scanf("%s", A);
}

void inChuoi(char A[]){
    printf("Chuoi vua nhap xong: \n: ");
    printf("%s", A);
}

void timKiTuTrongChuoi(char A[], char n){
    int count = 0;
    for(int i = 0; i <= strlen(A); i++){
        if(A[i] == n){
            count++;
            printf("\nPhat hien ki tu %d nam o vi tri thu %d trong chuoi.", n, i);
        }
    }if(count == 0){
        printf("\nKhong phat hien ki tu o trong chuoi!");
    }
}

int main(){
    char s1[200];
    nhapChuoi(s1);
    inChuoi(s1);
    char x;
    printf("\nNhap ki tu can tim trong chuoi: \n");
    scanf("%c", &x);
    timKiTuTrongChuoi(s1, x);
}

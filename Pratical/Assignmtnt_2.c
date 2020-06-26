#include <stdio.h>

float average(int s[], int n){
    int sum = 0;
    float x;
    for(int i = 0; i < n; i++){
        sum += s[i];
    }x = (float)sum/n;
    return x;
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int s[n];
    printf("\nNhap vao mot mang so nguyen tu ban phim ");
    for(int i = 0; i < n; i++){
        printf("\nNhap phan tu thu %d cua mang : ", i+1);
        scanf("%d", &s[i]);
    }
    float a;
    a = average(s, n);
    printf("\nGia tri trung binh cua mang la : %f ", a);
}
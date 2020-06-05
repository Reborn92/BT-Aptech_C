#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,p,cv,S;
    // P la mot nua chu vi
    a = 0;
    b = 0;
    c = 0;
    while(a<=0){
        printf("Do dai a cua canh thu nhat cua tam giac la : (a>0) ");
        scanf("%f" ,&a);
    }
    while(b<=0){
        printf("Do dai b cua canh thu hai cua tam giac la : (b>0) ");
        scanf("%f" ,&b);
    }
    while(c<=0){
        printf("Do dai c cua canh thu ba cua tam giac la : (c>0) ");
        scanf("%f" ,&c);
    }if((a+b)>c){
        if((a+c>b)){
            if((b+c>a)){
                p = (a+b+c)/2;
                cv = 2*p;
                S = sqrt(p*(p-a)*(p-b)*(p-c));
                printf(" Chu vi cua hinh tam giac la : %f \n" ,cv);
                printf("Dien tich cua hinh tam giac la : %f\n" ,S);
            }else{
                printf("a,b,c khong phai la 3 canh cua mot tam giac");
            }
        }else{
            printf("a,b,c khong phai la 3 canh cua mot tam giac");
        }
    }else{
        printf("a,b,c khong phai la 3 canh cua mot tam giac");
    }
    system("pause");    
}
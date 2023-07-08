#include <stdio.h>

int main (){
    int chieu_dai,chieu_rong,chieu_cao;
    double can_nang;

    //printf("Nhap vao chieu dai, chieu rong, chieu cao va can nang:");
    scanf("%d %d %d %lf", &chieu_dai,&chieu_rong,&chieu_cao, &can_nang);

    if (chieu_cao >= 10 && chieu_cao <= 150 || chieu_dai >= 10 && chieu_dai <= 150 || chieu_rong >= 10 && chieu_rong <= 150 || can_nang > 0 && can_nang <= 30 ){
        printf("OK");
    }

    else{
        printf("DENY");
        }
    return 0;
}

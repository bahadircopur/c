#include <stdio.h>
int main(void)
{
    int saat,dakika;
    float saci,daci,aci;
    printf("Saat ve dakika giriniz: ");
    scanf("%d %d",&saat,&dakika);
    daci = (float)dakika*6;
    saci = (float)(saat*30)+(float)(dakika/2);
    if (saat>12) saat = saat-12;
    if (daci>saci) aci = daci-saci;
    else aci = saci-daci; 
    if (aci>180)  aci = 360-aci; 
    printf("Açı: %.2f\n",aci);
    
    
    return 0 ;
}
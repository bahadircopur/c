#include <stdio.h>

int main(void)
{
    
    int x,y,z,enb;
    printf("1.sayıyı giriniz: ");
    scanf("%d",&x);
    printf("2. sayıyı giriniz: ");
    scanf("%d",&y);
    printf("3 sayıyı giriniz: ");
    scanf("%d",&z);
    /*
    if (x>y)
    {
        if (x>z) enb = x; 
        else enb = z;
    }
    else
    {
        if (y>z) enb = y;
        else enb = z;
    }
    
    
    */

    if((x>y)&&(x>z)) enb = x;
    else if(y>z)enb = y;
    else  enb = z; 

    printf("En büyük sayı: %d\n",enb); // çapa sembolü yok arkadasım dikkat et veri çıkıyo ondan yok
    
    

    
    return 0;
}
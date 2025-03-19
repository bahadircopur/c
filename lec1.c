//paralel kenar giriş bilgisini temsil eder 6-9.satırlar 
// long değişkeni yazdırırken ld yazcan 
//bi de sondaki % işareti olmaması için \n koycan
#include <stdio.h>
#include <locale.h>
#define pi 3.14;

int main(void)
{
    /*
    int kenar1, kenar2, alan, cevre;
    setlocale(LC_ALL,"Turkish");
    printf("Uzun kenarı giriniz: ");
    scanf("%d", &kenar1);
    printf("Kısa kenarı giriniz: ");
    scanf("%d", &kenar2);
    
    cevre = 2*(kenar1+kenar2);
    alan = kenar1*kenar2;

    printf("Çevre = %d\n",cevre);
    printf("Alan = %d\n",alan);
    */


    /*
    int kenar,h;
    float alan;
    printf("kenar uzunluğunu giriniz \n");
    scanf("%d",&kenar);
    printf("yüksekliği giriniz \n");
    scanf("%d",&h);

    //alan = (kenar*h)/2; // böyle olunca 3*3/2=4 çıkıyor, değişken tipini dönüştürmek gerekli

    alan = (float)(kenar * h) / 2 ;
    printf("Alan : %f \n",alan);
    */

    /*
    float yaricap,cevre,alan;
    printf("yaricap giriniz \n");
    scanf("%f",&yaricap);
    alan = yaricap*yaricap*pi;
    cevre = yaricap*2*pi;
    printf("Alan : %f \n",alan);
    printf("Çevre : %f \n",cevre);
    */

    int a;
    int b;
    int c;
    int d;
    int enb;
    printf("1.sayıyı giriniz: ");
    scanf("%d",&a);
    printf("2.sayıyı giriniz: ");
    scanf("%d",&b);
    printf("3.sayıyı giriniz: ");
    scanf("%d",&c);
    printf("4.sayıyı giriniz: ");
    scanf("%d",&d);

    if (a>b) enb=a;
    else  enb=b; 
    if (b>enb) enb=b;
    if (c>enb) enb=c;
    if (d>enb) enb=d;
    // tek işlevli komut yasxınca {bunalra} gerek yok
    printf("en büyük sayı : %d\n",enb);
    return(0);


}
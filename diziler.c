#include <stdio.h>
int main(void)
{
    int n,toplam;
    int dizi[n];
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Dizinin %d. elemanini giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }
    for (int i = 0; i < n; i++)
    {
        toplam += dizi[i];
    }
    printf("Dizinin elemanlarinin toplami: %d\n", toplam);
    return 0;
    

}
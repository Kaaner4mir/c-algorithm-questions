#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /* Soru 1: Klavyeden girilen bir sayının tek mi çift mi olduğunu bulan C
    programını yazınız.*/

    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
        printf("%d sayisi cifttir.",sayi);
    else
        printf("%d sayisi tektir.",sayi);

    // -------------------------------------------------------------------------

    /* Soru 2: Klavyeden girilen iki sayının toplamını hesaplayan C programını
    yazınız. */

    // int sayi1,sayi2,sonuc;

    // printf("Birinci sayiyi girin: ");
    // scanf("%d",&sayi1);

    // printf("Ikinci sayiyi girin: ");
    // scanf("%d",&sayi2);

    // sonuc= sayi1+sayi2;

    // printf("%d + %d = %d",sayi1,sayi2,sonuc);

    // -------------------------------------------------------------------------

    /* Soru 3: Girilen bir sayının pozitif, negatif veya sıfır olduğunu belirleyen
    programı yazınız. */

    // int sayi;

    // printf("Bir sayi girin: ");
    // scanf("%d", &sayi);

    // if (sayi > 0)
    //     printf("%d sayisi pozitiftir.", sayi);
    // else if (sayi == 0)
    //     printf("Girilen sayi 0'dir.");
    // else
    //     printf("%d sayisi negatiftir.",sayi);

    // -------------------------------------------------------------------------

    /* Soru 4: Girilen iki sayıdan büyük olanı bulan programı yazınız. */

    // int sayi1, sayi2;

    // printf("Ilk sayiyi girin: ");
    // scanf("%d", &sayi1);

    // printf("Ikinci sayiyi girin: ");
    // scanf("%d", &sayi2);

    // if (sayi1 > sayi2)
    //     printf("%d>%d", sayi1, sayi2);
    //     else if (sayi1==sayi2)
    //     printf("%d = %d",sayi1,sayi2);
    // else
    //     printf("%d>%d", sayi2, sayi1);

    // -------------------------------------------------------------------------

    /* Soru 5: Girilen üç sayıdan en büyüğünü bulan programı yazınız. */

    // int sayi1, sayi2, sayi3, en_buyuk;

    // printf("Birinci sayiyi girin: ");
    // scanf("%d", &sayi1);

    // printf("Ikinci sayiyi girin: ");
    // scanf("%d", &sayi2);

    // printf("Ucuncu sayiyi girin: ");
    // scanf("%d", &sayi3);

    // if (sayi1 > sayi2 && sayi1 > sayi3)
    //     en_buyuk = sayi1;
    // else if (sayi2 > sayi1 && sayi2 > sayi3)
    //     en_buyuk = sayi2;
    // else
    //     en_buyuk = sayi3;

    // printf("\nGirilen 3 sayidan en buyugu: %d", en_buyuk);

    // -------------------------------------------------------------------------

    /* Soru 6: Klavyeden girilen bir sayının karesini ve küpünü hesaplayan programı
    yazınız. */

    // int sayi,kare_sonuc,kup_sonuc;

    // printf("Bir sayi girin: ");
    // scanf("%d",&sayi);

    // kare_sonuc=sayi*sayi;
    // kup_sonuc=sayi*sayi*sayi;

    // printf("%d ^ 2 = %d\n%d ^ 3 = %d",sayi,kare_sonuc,sayi,kup_sonuc);

    // -------------------------------------------------------------------------

    /* Soru 7: Girilen bir sayının faktöriyelini hesaplayan programı yazınız. */

    // int i,sayi;
    // int sonuc=1;

    // printf("Bir sayi girin: ");
    // scanf("%d",&sayi);

    // for (i = sayi; i > 0; i--)
    // {
    //     sonuc*=i;
    // }

    // printf("%d! = %d",sayi,sonuc);

    // -------------------------------------------------------------------------

    /* Soru 8: 1'den N'e kadar olan sayıların toplamını hesaplayan programı
    yazınız. */

    // int n, i;
    // int toplam = 0;

    // printf("Bir sayi girin: ");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     toplam += i;
    // }

    // printf("1'den n e kadar olan sayilarin toplami: %d", toplam);

    // -------------------------------------------------------------------------

    /* Soru 9: Girilen bir sayının asal olup olmadığını kontrol eden programı
    yazınız. */

    // bool asalMi = true;
    // int i, sayi;

    // printf("Bir sayi girin: ");
    // scanf("%d", &sayi);

    // for (i = 2; i * i <= sayi; i++)
    // {
    //     if (sayi % i == 0)
    //     {
    //         asalMi = false;
    //         break;
    //     }
    // }

    // if (asalMi)
    //     printf("%d sayisi asal sayidir.",sayi);
    // else
    //     printf("%d sayisi asal sayi degildir.",sayi);

    // -------------------------------------------------------------------------

    /* Soru 10: 1'den 100'e kadar olan çift sayıları ekrana yazdıran programı
    yazınız. */

    int i;

    for (i = 2; i <= 100; i+=2)
    {
        printf("%d\n",i);
    }
    

    return 0;
}

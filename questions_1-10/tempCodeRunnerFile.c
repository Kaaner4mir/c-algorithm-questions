#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // 1. Soru: 2 sayının toplamını veren programı yazınız.

    // int num1, num2;
    // int sum = 0;

    // printf("Birinci sayiyi girin: ");
    // scanf("%d", &num1);

    // printf("Ikinci sayiyi girin: ");
    // scanf("%d", &num2);

    // sum = num1 + num2;

    // printf("%d + %d = %d", num1, num2, sum);

    // 2. Soru: Kullanıcının girdiği iki sayının karelerinin toplamını veren programı yazınız.

    // int num1, num2;
    // int sum = 0;

    // printf("Birinci sayiyi girin :");
    // scanf("%d", &num1);

    // printf("Ikinci sayiyi girin :");
    // scanf("%d", &num2);

    // sum = (num1 * num1) + (num2 * num2);

    // printf("%d ^ 2 + %d ^ 2 = %d\n", num1, num2, sum);

    // 3. Soru: 1'den 100'e kadar olan sayıların küplerini bulan programı yazınız.

    // for (int i = 1; i < 100; i++)
    // {
    //     printf("%d ^ 3 = %d\n", i, i * i * i);
    // }

    // 4. Soru: Girilen sayının faktöriyelini veren programı yazınız.

    // int number;
    // int result = 1;

    // printf("Faktoriyelini ogrenmek istediginiz sayiyi girin: ");
    // scanf("%d", &number);

    // if (number < 0)
    //     printf("Lutfen gecerli bir sayi giriniz: ");
    // else
    // {
    //     for (int i = number; i > 0; i--)
    //     {
    //         result *= i;
    //     }
    // }

    // printf("%d! = %d", number, result);

    // 5. Soru: Çarpma işlemini toplama kullanarak bulan programı yazınız.

    // int num1, num2;
    // int result = 0;

    // printf("Birinci sayiyi girin: ");
    // scanf("%d", &num1);

    // printf("Ikinci sayiyi girin ");
    // scanf("%d", &num2);

    // for (int i = 0; i < num2; i++)
    // {
    //     result += num1;
    // }

    // printf("%d x %d = %d", num1, num2, result);

    // 6. Soru: Girilen sayının istenilen sayıya göre mod işlemini yaptıran programı yazınız.

    float dividing, divisor;
    float remainder = 0;

    printf("Bolunen sayiyi girin: ");
    scanf("%f", &dividing);

    printf("Bolen sayiyi girin :");
    scanf("%f", &divisor);

    remainder = fmodf(dividing, divisor);

    printf("%f %% %f = %0.2f", dividing, divisor, remainder);
}

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

    // float dividing, divisor;
    // float remainder = 0;

    // printf("Bolunen sayiyi girin: ");
    // scanf("%f", &dividing);

    // printf("Bolen sayiyi girin :");
    // scanf("%f", &divisor);

    // remainder = fmodf(dividing, divisor);

    // printf("%f %% %f = %0.2f", dividing, divisor, remainder);

    // 7. Soru: Girilen sayının kaç basamaklı olduğunu bulan programı yazınız.

    // int number;
    // int digit = 0;

    // printf("Sayiyi girin: ");
    // scanf("%d", &number);

    // int trueNumber = number;

    // while (number > 0)
    // {
    //     number /= 10;
    //     digit++;
    // }

    // printf("%d sayisinin basamak sayisi: %d", trueNumber, digit);

    // 8. Soru: Girilen 3 basamaklı bir sayının basamaklarının küplerinin toplamının
    // kendine eşit olup olmadığını bulan programı yazınız.

    // int number, temp, digit;
    // int sum = 0;

    // printf("Bir sayi girin: ");
    // scanf("%d", &number);

    // temp = number;

    // while (temp > 0)
    // {
    //     digit = temp % 10;
    //     sum += digit * digit * digit;
    //     temp = temp / 10;
    // }

    // if (sum == number)
    //     printf("Sart saglandi.");
    // else
    //     printf("Sart saglanmadi.");

    // 9. Soru: Klavyeden girilen 20 adet sayıdan çift sayıları toplamının
    // tek sayıların toplamına oranın bulan programı yazınız.

    // int number;
    // float result;
    // float totalEvenNumbers = 0;
    // float totalOddNumbers = 0;

    // for (int i = 0; i < 20; i++)
    // {
    //     printf("Bir sayi girin: ");
    //     scanf("%i", &number);

    //     if (number % 2 == 0)
    //         totalEvenNumbers += number;
    //     else
    //         totalOddNumbers += number;
    // }
    // result = totalEvenNumbers / totalOddNumbers;

    // printf("%f / %f = %f", totalEvenNumbers, totalOddNumbers, result);

    // 10. Soru: 10 ile 1000 arasındaki tam kare sayılari bulan programı yazınız.

    // for (int i = 10; i * i < 1000; i++)
    // {
    //     printf("%i ^ 2 = %0.2f\n", i, pow(i, 2.0));
    // }
}

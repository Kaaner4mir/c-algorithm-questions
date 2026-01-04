bool asalMi = true;
    int i, sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    for (i = 2; i * i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asalMi = false;
            break;
        }
    }

    if (asalMi)
        printf("%d sayisi asal sayidir.",sayi);
    else
        printf("%d sayisi asal sayi degildir.",sayi);
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, tdk;
    char z;
    do
    {
        printf("\n=== Game Tebak Angka ===\n\n");
        printf("Pikirkan Angka Dari 1-20\n");

        srand(time(0));
        a = rand() % 20;
        b = rand() % 20;
        c = rand() % 20;
        d = rand() % 20;
        e = rand() % 20;

        printf("%d %d %d %d %d\n", a, b, c, d, e);
        printf("Apakah angka mu ada di antara deret angka ini? ");
        scanf(" %c", &z);
        if (z == 't')
            while (z == 't')
            {
                a = rand() % 20;
                b = rand() % 20;
                c = rand() % 20;
                d = rand() % 20;
                e = rand() % 20;

                printf("%d %d %d %d %d\n", a, b, c, d, e);
                printf("Apakah angka mu ada di antara deret angka ini? ");
                scanf(" %c", &z);
            }
        if (z == 'y')
        {
            f = rand() % 20;
            printf("%d %d %d %d %d\n", f, b, c, d, e);
            printf("Apakah angka mu ada di antara deret angka ini? ");
            scanf(" %c", &z);
            if (z == 't')
            {
                printf("Angkamu Ialah %d\n", a);
            }
        }
        if (z == 'y')
        {
            g = rand() % 20;
            printf("%d %d %d %d %d\n", f, g, c, d, e);
            printf("Apakah angka mu ada di antara deret angka ini? ");
            scanf(" %c", &z);
            if (z == 't')
            {
                printf("Angkamu Ialah %d\n", b);
            }
        }
        if (z == 'y')
        {
            h = rand() % 20;
            printf("%d %d %d %d %d\n", f, g, h, d, e);
            printf("Apakah angka mu ada di antara deret angka ini? ");
            scanf(" %c", &z);
            if (z == 't')
            {
                printf("Angkamu Ialah %d\n", c);
            }
        }
        if (z == 'y')
        {
            i = rand() % 20;
            printf("%d %d %d %d %d\n", f, g, h, i, e);
            printf("Apakah angka mu ada di antara deret angka ini? ");
            scanf(" %c", &z);
            if (z == 't')
            {
                printf("Angkamu Ialah %d\n", d);
            }
        }
        if (z == 'y')
        {
            j = rand() % 20;
            printf("%d %d %d %d %d\n", f, g, h, i, j);
            printf("Apakah angka mu ada di antara deret angka ini? ");
            scanf(" %c", &z);
            if (z == 't')
            {
                printf("Angkamu Ialah %d\n", e);
            }
            if (z == 'y')
            {
                printf("Angkamu Ialah %d\n", j);
            }
        }
        else if (z != 'y' && z != 't')
        {
            printf("Masukkan Yang Benar");
        }
    } while (z == 'y' || z == 't' || z != 'y' || z != 't');
}

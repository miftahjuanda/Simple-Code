#include <stdio.h>
#include <string.h>

char *reverse(char str[256])
{
    char *string = str;
    // declare variable
    int i, len, temp;
    len = strlen(string); // use strlen() to get the length of str string

    // use for loop to iterate the string
    for (i = 0; i < len / 2; i++)
    {
        // temp variable use to temporary hold the string
        temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
    return string;
}

int main()
{
    // Deklarasi variable Char
    char kalimat_1[256];
    char kalimat_2[256];
    char kalimat_3[256];
    char combine_sentence[256];

    printf("=========================================== \n");
    printf("= Selamat mencoba Program Input 3 Kalimat =\n");
    printf("=========================================== \n \n");

    // Input Value pada Variable Char
    printf("Silahkan masukkan Kalimat 1 : ");
    scanf("%s", kalimat_1);
    strcat(combine_sentence, kalimat_1);
    strcat(combine_sentence, " ");

    printf("Silahkan masukkan Kalimat 2 : ");
    scanf("%s", kalimat_2);
    strcat(combine_sentence, kalimat_2);
    strcat(combine_sentence, " ");

    printf("Silahkan masukkan Kalimat 3 : ");
    scanf("%s", kalimat_3);
    strcat(combine_sentence, kalimat_3);

    // Output dari hasil Variable Kalimat 1 - 3
    printf("\nOutput Kalimat 1 : %s\n", kalimat_1);
    printf("Output Kalimat 2 : %s\n", kalimat_2);
    printf("Output Kalimat 3 : %s\n \n", kalimat_3);
    printf("Gabungan 3 Kalimat : %s\n", combine_sentence);

    // Penggunaan strrev disini untuk melakukan reverse isi pada value variable kalimat
    printf("Hasil Membalik Kalimat Gabungan : %s\n", reverse(combine_sentence));
    // Penggunaan strlen disini untuk menghitung jumlah karakter pada variable kalimat
    printf("Jumlah Kalimat 1 = %lu \n", strlen(kalimat_1));
    printf("Jumlah Kalimat 2 = %lu \n", strlen(kalimat_2));
    printf("Jumlah Kalimat 3 = %lu \n", strlen(kalimat_3));
    printf("Total jumlah huruf = %lu\n", strlen(combine_sentence)-2);
    return 0;
}
#include <stdio.h>
#include <conio.h>
int main ()
{
    int angka;
    printf("=====================================================================================\n");
    printf("| MEMERIKSA SEBUAH BILANGAN APAKAH BILANGAN TERSEBUT HABIS DIBAGI 5 DAN 3 ATAU TIDAK |\n");
    printf("|      CREATED BY SYAHRI RAHMAT (JURUSAN TEKNIK INFORMATIKA) NIM : 311810526         |\n");
    printf("====================================================================================\n");

    printf("SILAHKAN MASUKKAN ANGKA YANG ANDA INGINKAN = "); scanf ("%i",&angka);
        if (angka%3 == 0 && angka%5 == 0)
            printf("MAKA ANGKA TERSEBUT HABIS DIBAGI 3 DAN HABIS DIBAGI 5");
        else if (angka%3 == 0 && angka%5 != 0)
        {
            printf("MAKA ANGKA TERSEBUT HABIS DIBAGI 3 NAMUN TIDAK HABIS DIBAGI 5");
        }
        else
        {
            printf("MAKA ANGKA TERSEBUT HABIS DIBAGI 5 NAMUN TIDAK HABIS DIBAGI 3");
        }
    getch ();
}

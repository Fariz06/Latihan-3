#include <stdio.h>
#include <stdlib.h>

// 13220029 Fariz Iftikhar Falakh

struct mahasiswa
{
    int nim;
    char nama;
    float kehadiran;
};


int main()
{
    int i =0;
   struct mahasiswa data[2] = {{13220029, "Fariz", 0.9}, {13220999, "Test", 0.7}};

    while (i < 2)
    {
        if (data[i].kehadiran < 0.8)
        {
            printf("Mahasiswa yang kehadirannya kurang dari 80% adalah : \n");
            printf("NIM : %d\n", data[i].nim);
            printf("Nama : %s\n", data[i].nama);
            printf("Kehadiran : %f\n", data[i].kehadiran);
        }
        i++;
    }
}

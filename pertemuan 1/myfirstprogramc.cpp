#include <stdio.h>

int main()
{
    int nim;
    char kom;
    float ip;
    char nama[50];

    printf("Hello world\n");

    printf("Masukkan nama:");
    //scanf("%d",&nama);
    gets(nama); //gets:get string

    printf("Masukkan NIM: ");
    scanf("%d",&nim);

    printf("Masukkan KOM: ");
    scanf("%s",&kom);

    printf("Masukkan IP: ");
    scanf("%f",&ip);

    printf("nama: ");
    puts(nama); // puts:put string
    
    printf("NIM: %d\n",nim);
    printf("KOM: %c\n",kom);
    printf("IP: %.2f\n",ip);
    printf("Hello world");
}
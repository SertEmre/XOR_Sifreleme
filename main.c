#include <stdio.h>
#include <string.h>

void xor_sifreleme(char *metin, char anahtar) {
    for (int i = 0; i < strlen(metin); i++) {
        metin[i] ^= anahtar;
    }
}

void print_hex(char *metin) {
    for (int i = 0; i < strlen(metin); i++) {
        printf("%02X ", (unsigned char)metin[i]);
    }
    printf("\n");
}

int main() {
    char metin[100];
    char anahtar;

    printf("Sifrelenecek metni girin: ");
    fgets(metin, sizeof(metin), stdin);
    metin[strcspn(metin, "\n")] = 0; // Yeni satýr karakterini temizle

    printf("Anahtar karakterini girin: ");
    scanf(" %c", &anahtar);

    xor_sifreleme(metin, anahtar);
    printf("Sifrelenmis metin (hex formatibanda): ");
    print_hex(metin);

    xor_sifreleme(metin, anahtar);
    printf("Cozulen metin: %s\n", metin);

    return 0;
}

#include <stdio.h>
#include <string.h>  // precisa para strcmp

int main() {
    char ver_inver[20], tipo[20], come[20];

    scanf("%s %s %s", ver_inver, tipo, come);

    if (strcmp(ver_inver, "vertebrado") == 0) {
        if (strcmp(tipo, "ave") == 0) {
            if (strcmp(come, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(come, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(tipo, "inseto") == 0) {
            if (strcmp(come, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcmp(come, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
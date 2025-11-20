#include <stdio.h>

int main() {
    int N, Amin, Amax;

    while (scanf("%d %d %d", &N, &Amin, &Amax) != EOF) {
        int permitidos = 0, altura;

        for (int i = 0; i < N; i++) {
            scanf("%d", &altura);
            if (altura >= Amin && altura <= Amax) {
                permitidos++;
            }
        }

        printf("%d\n", permitidos);
    }

     return 0;
}
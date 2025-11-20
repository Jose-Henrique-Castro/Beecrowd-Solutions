#include <stdio.h>

int main() {
    char letras[27];  
    int n;

    
    while (scanf("%26s", letras) != EOF) {
        scanf("%d", &n);

        int pos;
        for (int i = 0; i < n; i++) {
            scanf("%d", &pos);
            printf("%c", letras[pos - 1]);  
        }
        printf("\n");
    }

    return 0;
}

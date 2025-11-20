#include <stdio.h>

int main() {
    int numero, anterior;


    if (scanf("%d", &numero) != 1) {
        return 0;  
    }
    anterior = numero; 

    
    while (scanf("%d", &numero) == 1) {
        
        if (numero <= anterior) {
            printf("%d\n", anterior + 1);  
            return 0;  
        }
        anterior = numero;  
        
    }
        
    printf("%d\n", anterior + 1);  

    return 0;
}

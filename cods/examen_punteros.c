#include <stdio.h>

void F1(char *c) {
    *c = *c + '1';
}

void F2(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

int main() {

    char letra = '0';

    printf("Valor: %c\n", letra);

    F1(&letra);
    printf("Después de F1: %c\n", letra);

    F2(&letra);
    printf("Después de F2: %c\n", letra);

    return 0;
}




#include <stdio.h>

void F2(char *c) {

    printf("Valor de numero:  ______  ",  ______  );
    printf("Dirección de numero:  ______  ",  ______  );
    printf("Dirección de c:  ______  ",  ______  );
    printf("Valor almacenado en c:  ______  ",  ______  );
    printf("Contenido en la dirección que apunta c: ______ ",  ______  );
}

int main() {

    char numero = '7';

    F2(&numero);

    return 0;
}

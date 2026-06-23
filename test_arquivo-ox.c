#include <assert.h>
#include <stdio.h>
#include "function_flores.c"

int main(void)
{
    assert(validar_caractere('O') == 1);
    assert(validar_caractere('X') == 1);

    assert(validar_caractere('A') == 0);
    assert(validar_caractere('Z') == 0);

    printf("Teste executado com sucesso\n");

    return 0;
}

#include <assert.h>
#include <stdio.h>
#include "function_utils.h"

int main(void)
{
    assert(validar_caractere('O') == 1);
    assert(validar_caractere('X') == 1);

    assert(validar_caractere('o') == 0);
    assert(validar_caractere('x') == 0);
    assert(validar_caractere('A') == 0);

    printf("Todos os testes passaram.\n");

    return 0;
}

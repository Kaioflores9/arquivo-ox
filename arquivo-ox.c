#include <stdio.h>
#include "function_flores.c"

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int i, j;

    if (argc != 2)
    {
        printf("Uso: %s arquivo.txt\n", argv[0]);
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            char caractere;

            printf("Digite o caractere %d: ", (i * 3) + j + 1);
            scanf(" %c", &caractere);

            if (!validar_caractere(caractere))
            {
                printf("Erro: somente O e X sao permitidos.\n");
                return 1;
            }

            matriz[i][j] = caractere;
        }
    }

    if (salvar_tabuleiro(argv[1], matriz) != 0)
    {
        printf("Erro ao criar arquivo.\n");
        return 1;
    }

    printf("Arquivo criado com sucesso: %s\n", argv[1]);

    return 0;
}

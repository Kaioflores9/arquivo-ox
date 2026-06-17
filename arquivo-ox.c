#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validar_caractere(char c);
int salvar_tabuleiro(const char *nomeArquivo, char matriz[3][3]);

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int i, j;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O X O X O X O X O\n", argv[0]);
        return 1;
    }

    int indice = 2;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (strlen(argv[indice]) != 1 ||
                !validar_caractere(argv[indice][0]))
            {
                printf("Erro: somente O e X sao permitidos.\n");
                return 1;
            }

            matriz[i][j] = argv[indice][0];
            indice++;
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

#include <stdio.h>

int validar_caractere(char c)
{
    return c == 'O' || c == 'X';
}

int salvar_tabuleiro(const char *nomeArquivo, char matriz[3][3])
{
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(
            arquivo,
            "| %c | %c | %c |\n",
            matriz[i][0],
            matriz[i][1],
            matriz[i][2]
        );
    }

    fprintf(arquivo, "\n");
    fprintf(arquivo, "Criado por Kaio Rodrigues Das Flores\n");

    fclose(arquivo);

    return 0;
}
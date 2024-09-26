#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float N1, N2, N3, PPD, media;
    int ex_unificado;

    printf("Digite sua nota da N1: ");
    scanf("%f", &N1);

    while (N1 > 4.5)
    {
        printf("CODIGO DE ERRO 3");
        printf("Digite sua nota novamente, lembre-se que ela vale 4,5: ");
        scanf("%f", &N1);
    }
    
    printf("Digite sua nota da N1: ");
    scanf("%f", &N2);

    while (N2 > 4.5)
    {
        printf("CODIGO DE ERRO 3");
        printf("Digite sua nota novamente, lembre-se que ela vale 4,5: ");
        scanf("%f", &N2);
    }

    printf("Digite sua nota do PPD: ");
    scanf("%f", &PPD);

    while (PPD > 1)
    {
        printf("CODIGO DE ERRO 3");
        printf("Digite sua nota novamente, lembre-se que ela vale 1: ");
        scanf("%f", &PPD);
    }

    printf("Voce realizou o exame unificado? Responda com 0 para nao, e 1 para sim: ");
    scanf("%d", &ex_unificado);

    if (ex_unificado == 0) {
        ex_unificado = 0;
    } else {
        ex_unificado = 1;
    }
    
    printf("Voce realizou a N3? Responda com 0 para nao, e 1 para sim: ");
    scanf("%f", &N3);

    if (N3 == 0) {
        printf("Aqui esta sua nota:\n");
    } else {
        printf("Digite sua nota da N3: ");
        scanf("%f", &N3);

        while (N3 > 4.5)
        {
            printf("CODIGO DE ERRO 3");
            printf("Digite sua nota novamente, lembre-se que ela vale 4,5: ");
            scanf("%f", &N3);
        }
        N2 = N3;
    }
    
    media = N1 + N2 + PPD + ex_unificado;
    printf("Sua media foi de = %.2f\n", media);
    if (media >= 7.0) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
    

    return 0;
}
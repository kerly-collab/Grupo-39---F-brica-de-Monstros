#include <stdio.h>
#include <string.h>

int main() {

    char cabeca[20];
    char olhos[20];
    char predominancia[20];

    int wackus, vegitas, spritem;

    // ----- ENTRADAS -----
    printf("Digite o tipo da cabeca (Franken, Zombos, Happy): ");
    scanf("%s", cabeca);

    printf("Quantas caracteristicas Wackus o monstro tem? ");
    scanf("%d", &wackus);

    printf("Quantas caracteristicas Vegitas o monstro tem? ");
    scanf("%d", &vegitas);

    printf("Quantas caracteristicas Spritem o monstro tem? ");
    scanf("%d", &spritem);

    printf("Qual a familia dos olhos? (Wackus, Vegitas, Spritem): ");
    scanf("%s", olhos);

    // ----- TRATAMENTO DE CATEGORIAS NULAS -----
    if (wackus == 0 && vegitas == 0 && spritem == 0) {
        strcpy(predominancia, "nulo");
    } else {

        // ----- IDENTIFICAR PREDOMINÂNCIA -----
        if (wackus > vegitas && wackus > spritem) {
            strcpy(predominancia, "Wackus");
        }
        else if (vegitas > wackus && vegitas > spritem) {
            strcpy(predominancia, "Vegitas");
        }
        else if (spritem > wackus && spritem > vegitas) {
            strcpy(predominancia, "Spritem");
        }
        else {
            strcpy(predominancia, olhos);
        }
    }

    printf("\nO monstro criado é: %s %s\n", cabeca, predominancia);

    return 0;
}

#include <stdio.h>

void CreateAndWrite(char text[]) {
    FILE *archive;
    archive = fopen("./textos/text.txt", "w");
    fprintf(archive, "%s", text);
    fclose(archive);
    printf("Progama Finalizado. ;D");
}

int main() {
    char userText[100];
    printf("Ola, digite um texto.\n");
    fgets(userText, sizeof(userText), stdin);
    CreateAndWrite(userText);
}

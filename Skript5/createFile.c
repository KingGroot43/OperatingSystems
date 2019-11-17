#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

void createFile(const char filename[]) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Datei konnte nicht geöffnet werden.\n");
    } else {
        getchar();
        printf("Was soll in die Datei eingetragen werden?\n");
        char input[255];
        fgets(input, 255, stdin);
        fprintf(fp, "%s\n", input);         
    }
    fclose(fp);
}

void fileExists(const char filename[], char *confirm) {
    struct stat attribut;
    stat(filename, &attribut);
    if (attribut.st_mode & __S_IFREG) {
        printf("Datei existiert bereits. Möchten Sie die Datei überschreiben? y/n\n");
        scanf("%c", confirm);
    }
}

int main(void) {
    const char filename[255] = "NewFile.txt";
    char confirm;

    fileExists(filename, &confirm);
    if (confirm == 'y') {
        createFile(filename);
    }
    
    return 0;
}
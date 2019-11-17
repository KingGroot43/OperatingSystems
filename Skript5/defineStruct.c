#include <stdio.h>
#include <string.h>

struct file {
    char filename[255];
    char date[255];
    int size;
    char creator[255];
    char auth[255];
};

typedef struct filetype {
    char filename[255];
    char date[255];
    int size;
    char creator[255];
    char auth[255]; 
} File;

void printContent(struct file data) {
    printf("%s\t\t%s\t%i\t\t%s\t\t%s\n",data.filename, data.date, data.size, data.creator, data.auth);
}

void printContentTypeDef(File data) {
    printf("%s\t\t%s\t%i\t\t%s\t\t%s\n",data.filename, data.date, data.size, data.creator, data.auth);
}

int main(void) {
    struct file data;

    printf("filename\tdate\t\tsize\t\tcreator\t\tauthorization\n");

    strcpy(data.filename, "Datei");
    strcpy(data.date, "2019-11-16");
    data.size = 15;
    strcpy(data.creator, "domi");
    strcpy(data.auth, "rwx");     
    printContent(data);

    File newData;
    strcpy(newData.filename, "Datei");
    strcpy(newData.date, "2019-11-16");
    newData.size = 15;
    strcpy(newData.creator, "domi");
    strcpy(newData.auth, "rwx");  

    printContentTypeDef(newData);

    return 0;
}
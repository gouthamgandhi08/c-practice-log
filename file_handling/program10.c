/*
10)	Write a Program to implement sort command.
(Check the command:  sort  filename.c )
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000     
#define MAX_LEN   1024     

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("USAGE: %s filename\n", argv[0]);
        return 0;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("File doesn't exist!\n");
        return 0;
    }
    FILE *fd=fopen("temp.txt","w");
    char lines[MAX_LINES][MAX_LEN];
    int count = 0;

    
    while (fgets(lines[count], MAX_LEN, fp) != NULL) {
        count++;
        if (count >= MAX_LINES) break;
    }
    
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(lines[i], lines[j]) > 0) {
                char temp[MAX_LEN];
                strcpy(temp, lines[i]);
                strcpy(lines[i], lines[j]);
                strcpy(lines[j], temp);
            }
        }
    }

    
    for (int i = 0; i < count; i++) {
        fputs(lines[i],fd);
    }
    fclose(fp);
    fclose(fd); 

    remove(argv[1]);
    rename("temp.txt", argv[1]);
    return 0;
}

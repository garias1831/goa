#include <errno.h>
#include <getopt.h>
#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char **argv) {

    // TODO: add -o flag to customize output file name
    if (argc < 2) {
        printf("goa: error: no input files\n");
        return 1;
    } else if (argc > 2) {
        printf("goa: error: too many arguments\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror("goa");
        return 1;
    }

    // Compile and stuff

    if(fclose(fp) != 0) {
        perror("goa");
        return 1;
    }
    return 0;
}
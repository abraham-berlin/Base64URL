#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "base64.h"

int main(int argc, char *argv[]) {
    if (argc == 2) {
        const char *buff_base64 = argv[1];
        char *url = malloc(Base64decode_len(buff_base64));
        Base64decode(url, buff_base64);
        char * open = malloc(strlen(url)+5);
        sprintf(open, "open %s", url);
        system(open);
        free(url);
        free(open);
    } else {
        fprintf(stderr, "Incorrect Arguments");
        exit(0);
    }
}
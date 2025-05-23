#include<stdio.h>
#include<stdint.h>
//A copying code
typedef uint8_t BYTE;

int main(int argc, char *argv[]){
    FILE *src=fopen(argv[1], "rb");//rb-read binary
    FILE *dst=fopen(argv[1], "wb");//wb-write binary

    BYTE b;

    while(fread(&b, sizeof(b), 1, src) != 0){
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}

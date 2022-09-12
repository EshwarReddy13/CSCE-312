#include <bits/types/struct_timeval.h>
#include <stdio.h>

int main(){
    unsigned int uint;
    char character;
    unsigned char ucharacter;
    short int sint;
    float fint;
    double dint;
    long long int llint;
    FILE file;
    struct timeval thistime;
    printf("Unsigned int bits: %d and bytes: %d \n",sizeof(uint),sizeof(uint)*8);
    printf("Char bits: %d and bytes: %d \n",sizeof(character),sizeof(character)*8);
    printf("Unsigned Char bits: %d and bytes: %d \n",sizeof(ucharacter),sizeof(ucharacter)*8);
    printf("Short int bits: %d and bytes: %d \n",sizeof(sint),sizeof(sint)*8);
    printf("Float bits: %d and bytes: %d \n",sizeof(fint),sizeof(fint)*8);
    printf("Double bits: %d and bytes: %d \n",sizeof(dint),sizeof(dint)*8);
    printf("Long long int bits: %d and bytes: %d \n",sizeof(llint),sizeof(llint)*8);
    printf("FILE bits: %d and bytes: %d \n",sizeof(file),sizeof(file)*8);
    printf("Struct bits: %d and bytes: %d \n",sizeof(thistime),sizeof(thistime)*8);
    return 0;
}
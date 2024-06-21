#include<stdio.h>
#include<stdlib.h>


int main() {
    char str[] = {'d','h','r','u','v','\0'};
    char *ptr = str;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    } 

return 0;
}
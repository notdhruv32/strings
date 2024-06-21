#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str = "Thara Bhai Joginder";
    char bhai[50];
    strcpy(bhai, str);
    printf("%s", bhai);

return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter ur name: ");
    gets(str);
    int a = strlen(str);
    printf("ur name is %d characters long", a);

return 0;
}
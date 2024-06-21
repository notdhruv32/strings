#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
    char str[50];
    char *ptr = str;
    printf("Enter ur name: ");
    gets(str);  //this is for the beginners othervise fgets recommended still gets inputs
    puts(str);  //puts outputs

return 0;
}
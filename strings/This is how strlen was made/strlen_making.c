/*
This is how scientist Dennis M. Ritchie designed strlen() func. in c 
*/

#include<stdio.h>
#include<stdlib.h>
//not including <string.h> cuz i am gonna make it of my own;

int string_lenght(char *str); //not giving the same name as strlen cuz thats gonna confuse GCC

int main() {
    char str[50];
    printf("Enter your name: ");
    gets(str);
    int a = string_lenght(str);
    printf("Your name is %d characters long", a);

return 0;
}

int string_lenght(char *str) {
    int i = 0, empty = 0;
    while(str[i] != '\0'){
        i++;
        }
        return i;
    }
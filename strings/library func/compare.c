#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[100] = {"hi"};
    char *bhai = "hello";
    int val = strcmp(str, bhai);
    printf("%d", val);  //1 states they are not same, 0 states they are same.

return 0;
}
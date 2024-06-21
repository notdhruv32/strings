#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[100] = {"Thara Bhai Joginder"};
    char *bhai = " Itne laaddoo khajaga kisine sochi na hogi.";
    strcat(str, bhai);
    printf("%s", str);

return 0;
}
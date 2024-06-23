#include<stdio.h>
#include<stdlib.h>

void slicestr(char *str, int m, int n);

int main() {
    char str[50];
    int m, n;
    printf("Enter a word: ");
    scanf("%s", str);
    printf("%s", str);
    printf("\n123456789\n");
    printf("you can now slice this word\n");
    printf("Enter the starting character no. to slice: ");
    scanf("%d", &m);
    printf("Enter the ending character no. to slice: ");
    scanf("%d", &n);
    slicestr(str, m, n);
    printf("%s", str);

return 0;
}

void slicestr(char *str, int m, int n){
    int i = 0;
    while((m+i)<n){
        str[i] = str[i + m];
        i++;
    }
    str[i+m] = '\0';
}
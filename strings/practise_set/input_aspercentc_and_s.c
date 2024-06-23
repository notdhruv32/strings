/*
Write a program to take strings as input using 
%s.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char st1[50];
    char st2[50];
    int i = 0;
    char a;
    printf("Enter the firdt string : ");
    scanf("%s", st1);
    printf("Enter for second string: ");

    while(a != '\n'){
        fflush(stdin);
        scanf("%c", &a);
        st2[i] = a;
        i++;
    }
    st2[i - 1] = '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st1 is %s", st2);
}
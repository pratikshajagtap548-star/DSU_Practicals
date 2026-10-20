#include<stdio.h>
#include<string.h>
#include<conio.h>
char stack[50];
void copyString(char str1[], char str2[], int top)
{
    if (top == -1)
        return;

    copyString(str1, str2, top - 1);
    str2[top] = stack[top];
}

int main()
{
    char str1[50], str2[50];
    int i, top;

    printf("Enter a String:");
    scanf("%49s", str1);

    top = strlen(str1) - 1;

    for (i = 0; i <= top; i++)
    {
        stack[i] = str1[i];
    }

    copyString(str1, str2, top);
    str2[top + 1] = '\0';

    printf("\nOriginal String:%s", str1);
    printf("\nCopied String:%s", str2);

    getch();
}
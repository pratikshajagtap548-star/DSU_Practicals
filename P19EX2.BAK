#include <stdio.h>
#include<conio.h>
#include<string.h>
char stack[20];
int checkPalindrome(char str[], int top, int i)
{
    if (top == -1)
	return 1;

    if (str[i] != stack[top])
	return 0;

    return checkPalindrome(str, top - 1, i + 1);
}
void main()
{
    char str[20];
    int top = -1, i, n, result;
    clrscr();
    printf("Enter a string:");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        top++;
        stack[top] = str[i];
    }

    result = checkPalindrome(str, top, 0);

    if (result == 1)
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not Palindrome");
    }

    getch();
}
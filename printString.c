#include <stdio.h>

int main()
{
    char myStr[100];
    
    printf("Enter the string: \n");
    gets(myStr);
    
    printf("Here is what you have input: \n%s\n", myStr);

    printf("Program ends");
    
    return 0;
}

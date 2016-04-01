#include <stdio.h>

main()
{
    char myStr[100];
    
    printf("Enter the string: \n");
    gets(myStr);
    
    printf("Here is what you have input: \n%s", myStr);
    
}

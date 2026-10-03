#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }
   
    str--;
    
    while(start <= str)
    {
        printf("%s\n", str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    return 0;
}
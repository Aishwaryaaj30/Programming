#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }
   
    str--;
    end = str;
    
    while(start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp; 

       start++;
       end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    printf("Updated string is : %s\n", Arr);

    return 0;
}
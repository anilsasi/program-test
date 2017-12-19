#include <stdio.h>
#include <string.h>

#define ASCI_SIZE 256

int max_count(char* str)
{
    long int count[ASCI_SIZE] = {0};
    int i = 0;
    int max = 0;
    char resutl = 0;
    char previus = 0;
    
    for (i = 0; i < strlen(str); i++)
    {
        count[str[i]]++;
    }

    for (i=0; i < ASCI_SIZE; i++)
    {
        printf("%d", count[i]);
    } 
    
    printf("\n");
    for (i = 0; i < strlen(str); i++)
    {
        previus = resutl;
        if (count[str[i]] > max)
        {
            max = count[str[i]];
            resutl = str[i];
        }   
    }
    printf("%c\n %c\n", resutl, resutl);
    return 0;
}

int remove_spaces(char* str)
{
    for (int i=0; i < strlen(str); i++)
    {
    }
}

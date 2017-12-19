#include <stdio.h>
#include <string.h>

int main()
{
    char* str = "anil sasidhar";
    char* sub_str = "sasi";
    char* travp = str;
    int sub_len = strlen(sub_str);
    int count = 0;
    char* sub = sub_str;
    int flag = 0;

    while(*travp != '\0')
    {
        if (*travp == *sub && flag == 0)
        {
            for (count = 0; count < sub_len; count++)
            {
                if (*travp == *sub)
                {
                    travp++;
                    sub++;
                }
                else
                {
                    break;
                }
            }
        }
        sub = sub_str;
        if (count == sub_len && flag == 0)
        {
            flag = 1;
            printf("sub string found\n");
            printf("%s\n", sub);
        }
        travp++;
    }
return 0;
    
}


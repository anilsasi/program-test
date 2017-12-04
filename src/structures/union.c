#include <stdio.h>

union example
{
    int x;
    int y;
}union_var_t;


int main()
{
    union_var_t.x = 12;
    printf("%d\n", union_var_t.y);
    printf("%d\n", union_var_t.x);
}



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int y, m;
    scanf("%d %d", &y, &m);
    if((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0))
    {
        if(m == 1 || m == 3 || m == 5|| m == 7 || m == 8 || m == 10 || m == 12)
        {
            printf("31");
        }
        else if(m==2)
        {
            printf("29");
        }
        else
        {
            printf("30");
        }
    }

    else
    {
        if(m == 1 || m == 3 || m == 5|| m == 7 || m == 8 || m == 10 || m == 12)
        {
            printf("31");
        }
        else if(m == 2)
        {
            printf("28");
        }
        else
        {
            printf("30");
        }
    }
}

#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
       int X, Y, money;
       scanf("%d %d", &X, &Y);
       
       if (Y <= X) 
        {
            money = Y;
        }
        else 
        {
        money = X + (Y - X) * 2;
        }
        printf("%d\n", money);

    }

    return 0;
}

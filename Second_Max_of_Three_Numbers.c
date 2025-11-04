#include <stdio.h>

int main()
{
   int N;
   scanf("%d",&N);

   for(int i=1;i<=N;i++)
   {
       int x,y,z;
       scanf("%d %d %d",&x,&y,&z);

       if((x>y && x<z) || (x>z && x<y))
       {
           printf("%d\n",x);
       }
       else if((y>x && y<z) || (y>z && y<x))
       {
           printf("%d\n",y);

       }
       else
       {
         printf("%d\n",z);
       }


    }

    return 0;
}

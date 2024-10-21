#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int u;
  int v;

  printf("Podaj pierwsz¹ liczbê:");
  scanf("%d", &u);

   printf("Podaj drug¹ liczbê:");
  scanf("%d", &v);

    int k=0;
    int t;

    while (u%2==0 && v%2==0)
    {
        k++;
        u=u/2;
        v=v/2;
    }

    if (u%2==0)
    {
        t=u;
        t=t/2;

        while (t%2==0)
        {
            t=t/2;;
        }

        if (t>0)
        {
            u=t;
        }

        else
        {
            v=-t;
        }

        t=u-v;
    }

    else
    {
        t=-v;
        while (t!=0)
        {
            while (t%2==0)
            {
                t=t/2;;
            }

            if (t>0)
            {
                u=t;
            }
            else
            {
                v=-t;
            }

        t=u-v;

        }
    }

    int a;
    a=u*pow(2,k);
    printf("a=%d", a);

return 0;
}

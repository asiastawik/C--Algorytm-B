#include <stdio.h>
#include <stdlib.h>
#include <math.h> //do funkcji powA

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
        u=u/2;
        v=v/2;
        k++;
    }

    if (u%2!=0)
    {
        t=-v;
        goto k4;
    }

    else
    {
        t=u;
        k3: t=t/2;
    }

    k4: if(t%2==0)
        {
            goto k3;
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

        if (t!=0)
        {
            goto k3;
        }

        else
        {
            int a;
            a=u*pow(2,k); //potega
            printf("a=%d", a);
        }

return 0;

}

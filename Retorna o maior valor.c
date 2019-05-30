#include <stdio.h>

float devolvemaior (float a, float b, float c)

    {
        float d;
        if (a>b && b>c)
        {
            d = a;
        }

        else if (c>a && c>b)
        {
            d = c;
        }

        else if (b>a && b>c)
        {
            d = b;
        }

        else
        {
            d = a;
        }
        return d;
    }

    main ()
    {
        float a, b, c, d;
        printf("insira 3 numeros: \n");
        scanf("%f %f %f", &a, &b, &c);

        d = devolvemaior (a, b, c);
        printf("maior %.2f", d);
    }

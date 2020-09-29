#include <stdio.h>
int main()
{
        int a;
        char b;
        float c;
        double d;

        a = 520;
        b = 'F';
        c = 3.14;
        d = 3.1415926;

        printf("a=%d\n",a);
        printf("b=%c\n",b);
        printf("c=%.2f\n",c);
        printf("d=%11.9f\n",d);

        return 0;
}

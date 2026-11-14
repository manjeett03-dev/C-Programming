#include <stdio.h>
int main()
{
    int n;
    float n1, n2;

    while (1)
    {
        printf("1: Km - Miles\n");
        printf("2: Inches - Foot\n");
        printf("3: Cm - Inches\n");
        printf("4. Pound - Kg\n");
        printf("5: Inches - Meters\n");

        printf("Choose your Conversion type (1-5) or 0 to EXIT: ");
        if (scanf("%d", &n) != 1)
            ;
        {
            printf("INVALID I/O !!,Enter a number: \n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (n == 0)
        {
            printf("EXITING THE PROGRAM !!\n");
            return 0;
        }
        printf("Enter value: ");
        scanf("%f", &n1);

        switch (n)
        {
        case 1:

            n2 = n1 * 0.621371;
            printf("%.2f km = %.2f miles\n", n1, n2);
            break;

        case 2:

            n2 = n1 * 0.0833;
            printf("%.2f inch = %.2f foot\n", n1, n2);
            break;

        case 3:

            n1 = n2 * 2.54;
            printf("%.2f cm = %.2f inch\n", n1, n2);
            break;

        case 4:

            n1 = n2 * 0.454;
            printf("%.2f pound = %.2f kg\n", n1, n2);
            break;

        case 5:

            n1 = n2 * 0.0254;
            printf("%.2f inch = %.2f meter\n", n1, n2);
            break;

        default:
            printf("Enter valid option\n");
            break;
        }
    }
    return 0;
}
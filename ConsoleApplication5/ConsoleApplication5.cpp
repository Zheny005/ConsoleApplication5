#include <iostream>

int main()
{
    int max, min, number, number1, cOdd, cDif;
    cOdd = cDif = 0;
    printf("Enter min: ");
    scanf_s("%d", &min);
    printf("Enter max: ");
    scanf_s("%d", &max);

    while (min < max)
    {
        number = min;
        for (; number > 0; number /= 10)
            if ((number % 10) % 2 == 0)
                break;
        if (number == 0)
            cOdd++;

        number = min;
        for (; number > 0; number /= 10)
        {
            for (number1 = number / 10; number1 > 0; number1 /= 10)
                if ((number1 % 10) == (number % 10))
                    break;
            if (number1 != 0)
                break;
        }
        if (number == 0)
            cDif++;

        min++;
    }

    printf("Odd number %d\n", cOdd);
    printf("Different numbers %d\n", cDif);

    system("pause");
    return 0;
}
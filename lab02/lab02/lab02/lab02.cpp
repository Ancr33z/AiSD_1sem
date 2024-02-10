#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int choose, counter = 2;
    long int x,n;
    printf("Enter number n: ");
    cin >> n;

    int* stepCounter = new int(100);

    n % 2 == 0 ? x = n / 2 : x = (n + 1) / 2;

    stepCounter[0] = n;
    stepCounter[1] = x;


    do
    {
        printf(" 1 <= %d <= %d\n", x, n);
        printf("choose your ansver (1 - Few, 2 - Lots, 3 - You guess it)\n");
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            n = x;
            n % 2 == 0 ? x = n / 2 : x = (n + 1) / 2;
            stepCounter[counter] = x;
            counter++;
            break;
        }
        case 2:
        {
            n - x % 2 == 0 ? x += (n - x) / 2 : x += ((n - x) + 1) / 2;
            stepCounter[counter] = x;
            counter++;
            break;
        }
        case 3:
        {
            printf("Максимальное количество шагов = %d", (sizeof(stepCounter) / sizeof(stepCounter[0])));
            for (int i = 0; i < (sizeof(stepCounter) / sizeof(stepCounter[0])); i++)
                printf("%d\n", stepCounter[i]);
            break;
        }
        default:
            printf("You entered wrong input option");
            break;
        }

    } while (choose != 3);

}
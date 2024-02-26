#include <iostream>


using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");

    int i, j = 0;
    int* correctString = new int[3] {0,0,0};
    char inputString[255];


    cout << "Введите строку" << endl;
    cin >> inputString;

    for (i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] == '[')
            correctString[0]++;
        else if (inputString[i] == ']')
            correctString[0]++;
        else if (inputString[i] == '(')
            correctString[1]++;
        else if (inputString[i] == ')')
            correctString[1]++;
        else if (inputString[i] == '{')
            correctString[2]++;
        else if (inputString[i] == '}')
            correctString[2]++;

    }

    if (correctString[0] % 2 == 0 && correctString[1] % 2 == 0 && correctString[2] % 2 == 0)
        cout << "\nСкобки расставлены верно\n";
    else
        cout << "\nСкобки расставлены не верно\n";

    return 0;
}
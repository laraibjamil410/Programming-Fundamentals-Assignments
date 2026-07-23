#include <iostream>
#include <iomanip>





// Problem1_Average.cpp
/*
using namespace std;

double calculateAverage(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (double)sum / size;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average Score: " << calculateAverage(marks, n);

    return 0;
} */
// Problem2_HighestLowest.cpp

/*
int calculateHighest(int arr[], int size)
{
    int highest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > highest)
            highest = arr[i];
    }

    return highest;
}

int calculateLowest(int arr[], int size)
{
    int lowest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < lowest)
            lowest = arr[i];
    }

    return lowest;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Highest Score: " << calculateHighest(arr, n) << endl;
    cout << "Lowest Score: " << calculateLowest(arr, n);

    return 0;
} */



// Problem3_CustomPower.cpp


/*
int calculatePower(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << base << " raised to the power "
         << exponent << " is: "
         << calculatePower(base, exponent);

    return 0;
}*/


/*

//===========================
// Problem 4 : Voltage Calculator
//===========================

double calculateVoltage(double current, double resistance)
{
    return current * resistance;
}

int main()
{
    double current, resistance;

    cout << "Enter current: ";
    cin >> current;

    cout << "Enter resistance: ";
    cin >> resistance;

    cout << "Total Voltage: "
         << calculateVoltage(current, resistance)
         << " V";

    return 0;
}

*/


/*

//===========================
// Problem 5 : Cricket Team Initial Finder
//===========================

bool searchPlayer(char arr[], int size, char target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
            return true;
    }

    return false;
}

int main()
{
    char team[11] =
    {
        'b','r','f','s','i',
        'n','h','a','m','k','t'
    };

    char target;

    cout << "Enter player initial: ";
    cin >> target;

    if(searchPlayer(team,11,target))
        cout << "Player is in the team";
    else
        cout << "Player not found";

    return 0;
}

*/

/*

//===========================
// Problem 6 : Word Length Calculator
//===========================

int getLength(char word[])
{
    int length = 0;

    while(word[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char word[100];

    cout << "Enter a word: ";
    cin >> word;

    cout << "Length of the word is: "
         << getLength(word);

    return 0;
}

*/

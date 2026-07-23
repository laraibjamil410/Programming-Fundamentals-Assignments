#include <iostream>
#include <iomanip>
using namespace std;


//===========================
// Problem 1 : 2nd Highest and 2nd Lowest
//===========================

int calculate2Low(int arr[], int size)
{
    int lowest = arr[0];
    int secondLowest = arr[1];

    if (lowest > secondLowest)
    {
        int temp = lowest;
        lowest = secondLowest;
        secondLowest = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] < lowest)
        {
            secondLowest = lowest;
            lowest = arr[i];
        }
        else if (arr[i] < secondLowest && arr[i] != lowest)
        {
            secondLowest = arr[i];
        }
    }

    return secondLowest;
}

int calculate2High(int arr[], int size)
{
    int highest = arr[0];
    int secondHighest = arr[1];

    if (highest < secondHighest)
    {
        int temp = highest;
        highest = secondHighest;
        secondHighest = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > highest)
        {
            secondHighest = highest;
            highest = arr[i];
        }
        else if (arr[i] > secondHighest && arr[i] != highest)
        {
            secondHighest = arr[i];
        }
    }

    return secondHighest;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "2nd Lowest: " << calculate2Low(arr, n) << endl;
    cout << "2nd Highest: " << calculate2High(arr, n);

    return 0;
}


/*

//===========================
// Problem 2 : Sum of Array
//===========================

double calculateSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << fixed << setprecision(2);
    cout << "Sum = " << calculateSum(arr, n);

    return 0;
}

*/


/*

//===========================
// Problem 3 : Temperature Converter
//===========================

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << fixed << setprecision(1);
    cout << "Fahrenheit = "
         << celsiusToFahrenheit(celsius);

    return 0;
}

*/

/*

//===========================
// Problem 4 : Leap Year
//===========================

bool isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }

    return false;
}

int main()
{
    int year;

    cout << "Enter Year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";

    return 0;
}

*/



/*

//===========================
// Problem 5 : Vowel Counter
//===========================

int countVowels(char word[])
{
    int count = 0;

    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' ||
           word[i] == 'i' || word[i] == 'o' ||
           word[i] == 'u' || word[i] == 'A' ||
           word[i] == 'E' || word[i] == 'I' ||
           word[i] == 'O' || word[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char word[100];

    cout << "Enter a word: ";
    cin >> word;

    cout << "Total Vowels: "
         << countVowels(word);

    return 0;
}

*/

/*

//===========================
// Problem 6 : Alphabetical Sorter
//===========================

void bubbleSort(char arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char letters[5];

    cout << "Enter 5 letters:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> letters[i];
    }

    bubbleSort(letters, 5);

    cout << "Sorted Letters: ";

    for(int i = 0; i < 5; i++)
    {
        cout << letters[i] << " ";
    }

    return 0;
}

*/




#include <iostream>
using namespace std;

//===========================
// Problem 1 : Count Even and Odd Numbers
//===========================

int countEvenNumbers(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int countOddNumbers(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    int numbers[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Even Numbers: "
         << countEvenNumbers(numbers, n) << endl;

    cout << "Odd Numbers: "
         << countOddNumbers(numbers, n);

    return 0;
}

/*

//===========================
// Problem 2 : Display 2D Array
//===========================

int main()
{
    int rows, cols;

    cout << "Enter Rows and Columns: ";
    cin >> rows >> cols;

    int arr[20][20];

    cout << "Enter Elements:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "2D Array:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

*/

/*

//===========================
// Problem 3 : GCD
//===========================

int findGCD(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int num1, num2;

    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = "
         << findGCD(num1, num2);

    return 0;
}

*/
/*

//===========================
// Problem 4 : Batting Strike Rate
//===========================

double calculateStrikeRate(int runs, int balls)
{
    return ((double)runs / balls) * 100;
}

int main()
{
    int runs, balls;

    cout << "Enter Runs: ";
    cin >> runs;

    cout << "Enter Balls: ";
    cin >> balls;

    cout << "Strike Rate: "
         << calculateStrikeRate(runs, balls);

    return 0;
}

*/

/*

//===========================
// Problem 5 : String Length
//===========================

int getLength(char arr[])
{
    int length = 0;

    for(int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    char name[100];

    cout << "Enter String: ";
    cin >> name;

    cout << "Length = "
         << getLength(name);

    return 0;
}

*/

/*

//===========================
// Problem 6 : Copy Word
//===========================

void copyWord(char src[], char dest[], int length)
{
    for(int i = 0; i < length; i++)
    {
        dest[i] = src[i];
    }

    dest[length] = '\0';
}

int main()
{
    char original[100];
    char backup[100];

    cout << "Enter Word: ";
    cin >> original;

    int length = 0;

    while(original[length] != '\0')
    {
        length++;
    }

    copyWord(original, backup, length);

    cout << "Copied Word: "
         << backup;

    return 0;
}

*/

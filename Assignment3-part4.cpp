#include <iostream>
using namespace std;

//===========================
// Problem 1 : Sum of 2D Array
//===========================

int main()
{
    int rows, cols;

    cout << "Enter Rows and Columns: ";
    cin >> rows >> cols;

    int arr[20][20];
    int sum = 0;

    cout << "Enter Elements:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum = " << sum;

    return 0;
}

/*

//===========================
// Problem 2 : Subtract All Values
//===========================

int main()
{
    int rows, cols;

    cout << "Enter Rows and Columns: ";
    cin >> rows >> cols;

    int arr[20][20];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = arr[0][0];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == 0 && j == 0)
                continue;

            result -= arr[i][j];
        }
    }

    cout << "Result = " << result;

    return 0;
}

*/

/*

//===========================
// Problem 3 : Function Overloading
//===========================

double calculateArea(double side)
{
    return side * side;
}

double calculateArea(double length, double width)
{
    return length * width;
}

int main()
{
    double side, length, width;

    cout << "Enter Side: ";
    cin >> side;

    cout << "Enter Length and Width: ";
    cin >> length >> width;

    cout << "Area of Square: "
         << calculateArea(side) << endl;

    cout << "Area of Rectangle: "
         << calculateArea(length, width);

    return 0;
}

*/
/*

//===========================
// Problem 4 : Bowling Average
//===========================

double getBowlingAverage(int runsConceded, int wicketsTaken)
{
    if(wicketsTaken == 0)
    {
        return 0.0;
    }

    return (double)runsConceded / wicketsTaken;
}

int main()
{
    int runs, wickets;

    cout << "Enter Runs Conceded: ";
    cin >> runs;

    cout << "Enter Wickets Taken: ";
    cin >> wickets;

    cout << "Bowling Average: "
         << getBowlingAverage(runs, wickets);

    return 0;
}

*/
/*

//===========================
// Problem 5 : Vertical Word Printer
//===========================

void printVertical(char word[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << word[i] << endl;
    }
}

int main()
{
    char word[100];

    cout << "Enter Word: ";
    cin >> word;

    int size = 0;

    while(word[size] != '\0')
    {
        size++;
    }

    printVertical(word, size);

    return 0;
}

/*



//===========================
// Problem 6 : Reverse Word
//===========================

void reverseWord(char word[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char word[100];

    cout << "Enter Word: ";
    cin >> word;

    int size = 0;

    while(word[size] != '\0')
    {
        size++;
    }

    reverseWord(word, size);

    cout << "Reversed Word: "
         << word;

    return 0;
}

*/

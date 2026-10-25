#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 5 + rand() % 86;
    }
}

void printArray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

int countSelected(const int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 || i % 8 != 0)
        {
            count++;
        }
    }

    return count;
}

int sumSelected(const int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 || i % 8 != 0)
        {
            sum += a[i];
        }
    }

    return sum;
}

void replaceSelected(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 || i % 8 != 0)
        {
            a[i] = 0;
        }
    }
}

int main()
{
    srand((unsigned)time(0));

    const int n = 25;
    int c[n];

    fillArray(c, n);

    cout << "Original array:" << endl;
    printArray(c, n);

    cout << "Count = " << countSelected(c, n) << endl;
    cout << "Sum = " << sumSelected(c, n) << endl;

    replaceSelected(c, n);

    cout << "Modified array:" << endl;
    printArray(c, n);

    return 0;
}
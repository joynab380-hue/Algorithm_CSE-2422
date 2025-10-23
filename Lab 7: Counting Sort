#include <iostream>
  using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    int count[maxVal + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    cout << "Sorted array: ";
    for (int i = 0; i <= maxVal; i++)
    {
        while (count[i] > 0)
        {
            cout << i << " ";
            count[i]--;
        }
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;


int sumArray(int arr[]) {
    int sum = 0;
    for (int i = 0; i < sizeof(arr); i++)
        sum += arr[i];

    return sum;
}

void rev(int arr[]) {
    reverse(arr, arr + sizeof(arr));
}

int main()
{
    int arr[4];
    cout << "Please enter 4 integers" << endl;
    for (int i = 0; i < 4; ++i)
        cin >> arr[i];

    cout << "Sum of the integers is: " << sumArray(arr) << endl;

    cout << "Reversed array: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }


}
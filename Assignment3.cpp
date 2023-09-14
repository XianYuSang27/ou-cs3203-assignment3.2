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

#include <iostream>
using namespace std;
template <typename T>
T findSmallestValue(T arr[], int size) {
    T smallest = arr[0]; // Initialize smallest with the first element

    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller element is found
        }
    }

    return smallest;
}

int main() {
    // Example usage
    int intArray[] = {5, 2, 9, 1, 7};
    double doubleArray[] = {3.14, 2.71, 1.618, 0.001};

    int smallestInt = findSmallestValue<int>(intArray,5);
    double smallestDouble = findSmallestValue<double>(doubleArray,4);

    cout << "Smallest integer value: " << smallestInt << endl;
    cout << "Smallest double value: " << smallestDouble << endl;

    return 0;
}

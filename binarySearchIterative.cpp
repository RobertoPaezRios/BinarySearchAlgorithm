#include <iostream>

using namespace std;

int binarySearch(int array[], int left, int right, int objective);

int main ()  {

    int array[] = {1, 5, 10, 43, 101, 202};
    int objective = 101;
    int sizeArray = sizeof(array);
    int result = binarySearch(array, 0, sizeArray - 1, objective);

    if (result == -1) {
        cout << "El elemento no se ha encontrado" << endl;
    } else {
        cout << "El elemento se ha encontrado " << result << endl;
    }

    system("pause");
    return 0;
}
int binarySearch (int array[], int left, int right, int objective) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == objective) { return mid; }
        if (array[mid] < objective) { left = mid + 1; }
        else { right = mid - 1; }
    }
    return -1;
}

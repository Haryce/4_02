#include <iostream>
using namespace std;
int* doubleArr(const int* arr, int size) {
    int* nArr = new int[size];
    for (int i = 0; i < size; i++) {
        nArr[i] = arr[i] * 2;
    }
    return nArr; 
}

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 5;
    int* arr = new int[size];
    cout << "Введите " << size << " целых чисел:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int* arr1 = doubleArr(arr, size);
    cout << "Новый массив (удвоенные значения): ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    delete[] arr;
    delete[] arr1;
    return 0;
}

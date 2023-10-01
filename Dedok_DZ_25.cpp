#include <iostream>
using namespace std;
//функция к заданию 4
void getSumAndProduct(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *product *= arr[i];
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    const int SIZE = 5; 
    int sourceArray[SIZE] = { 1, 2, 3, 4, 5 }; 
    int destinationArray[SIZE]; 

    
    int* sourcePtr = sourceArray; 
    int* destinationPtr = destinationArray; 

    
    for (int i = 0; i < SIZE; i++) {
        *(destinationPtr + i) = *(sourcePtr + i);
    }

    
    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(sourceArray + i) << " ";
    }

    cout << "\nСкопированный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(destinationArray + i) << " ";
    }
    cout << "\n";
    cout << "\n";
    //Task_2
    const int SIZE_1 = 5; 
    int arr[SIZE_1] = { 1, 2, 3, 4, 5 }; 

    int* ptr = arr; 
    int* endPtr = arr + SIZE_1 - 1; 
    while (ptr < endPtr) {
        
        int temp = *ptr;
        *ptr = *endPtr;
        *endPtr = temp;

        ptr++;
        endPtr--;
    }
   
    cout << "Массив с перевернутым порядком: ";
    for (int i = 0; i < SIZE_1; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "\n";
    //Task_3
    const int SIZE_2 = 5; 
    int sourceArray_1[SIZE_2] = { 6,7,8,9,10 }; 
    int destinationArray_1[SIZE_2]{};

    int* sourcePtr_1 = sourceArray_1;
    int* destinationPtr_1 = destinationArray_1 + SIZE_2 - 1;

    for (int i = 0; i < SIZE_2; i++) {
        *destinationPtr_1 = *sourcePtr_1;
        sourcePtr_1++;
        destinationPtr_1--;
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE_2; i++) {
        cout << sourceArray_1[i] << " ";
    }
    cout << "\nСкопированный массив (в обратном порядке): ";
    for (int i = 0; i < SIZE_2; i++) {
        cout << destinationArray_1[i] << " ";
    }
    cout << "\n";
    cout << "\n";
    //Task_4
    const int SIZE_3 = 5;
    int arr_1[SIZE_3] = { 1, 2, 3, 4, 5 };

    int sum, product;
    getSumAndProduct(arr, SIZE, &sum, &product);
    cout << "Сумма элементов: " << sum << "\n";
    cout << "Произведение элементов: " << product << "\n";
    cout << "\n";
}
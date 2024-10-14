/*

reads a list of integers from input into an array and modifies the array by shifting numbers to the right
 and moving the numbers to the front of the list. 
 The input begins with an integer indicating the number of values that follow. 
 The last input is the index of the number to start shifting from. 
 Output the modified array and end with a newline.

Ex: If the input is:

6 
2 4 6 8 10 12
4


the output is:

10 12 2 4 6 8 


Ex: If the input is:

6 
2 4 6 8 10 12
2


the output is:

6 8 10 12 2 4

compile and run:
g++ -Wall -o main main.cpp && ./main

compile and run with test input:
g++ -Wall -o main main.cpp && ./main < test1.txt

Compile and run with test input and compare to expected output:
diff -b <(g++ -Wall -o main main.cpp && ./main < test1.txt) test1-expected.txt 

*/

#include <iostream>

using namespace std;

void shiftLeft(int arr[], int size, int shift);

void print(int arr[], int size);

int main() {
    int size = 0;
    int arr[20] = {0};
    int shift = 0;

    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cin >> shift;
    shiftLeft(arr, size, shift);
    print(arr, size);
}


void shiftLeft(int arr[], int size, int shift){
    for(int i = 0; i < shift; i++) {
        int temp = arr[0];
        for(int j = 0; j < size - 1; j++){
            //arr[j] = arr[j+1];
        }
        arr[size - 1] = temp;
    }
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
#include <iostream>
#include <cstring>

using namespace std;

class PastQuestions {
public:
    // Function to add two numbers using pointer
    void addNumbers() {
        int num1, num2, sum;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        sum = num1 + num2;
        cout << "The sum is: " << sum << endl;
    }

    // Function to calculate the sum of an array
    void sumArray() {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        int* arr = new int[size];
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        cout << "The sum of the array elements is: " << sum << endl;
        delete[] arr;
    }

    // Function to perform bubble sort
    void bubbleSort() {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        int* arr = new int[size];
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Sorted array:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }

    // Function to calculate the length of a string
    void getStringLength() {
        char str[50];
        cout << "Enter a string: ";
        cin >> str;

        int length = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            length++;
        }

        cout << "Length of the string: " << length << endl;
    }

    // Function to check if a number is even or odd
    void evenOdd() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
    }

    // Function to check if a number is prime
    void primeNumber() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num <= 1) {
            cout << num << " is not prime." << endl;
        } else {
            bool isPrime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                cout << num << " is prime." << endl;
            } else {
                cout << num << " is not prime." << endl;
            }
        }
    }

    // Function to check if a number is a palindrome
    bool isPalindrome(int num) {
        int original = num;
        int reversed = 0;

        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        return original == reversed;
    }

    // Function to perform linear search
    void linearSearch() {
        int size;
        cout << "Enter the number of elements: ";
        cin >> size;

        int* arr = new int[size];
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int target;
        cout << "Enter the target element to search: ";
        cin >> target;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Target element found in the array." << endl;
        } else {
            cout << "Target element not found in the array." << endl;
        }

        delete[] arr;
    }

    // Function to calculate the sum and average of an array
    void sumAndAvgArray() {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        int* arr = new int[size];
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        cout << "The sum of the array elements is: " << sum << endl;
        float average = (float)sum / size;
        cout << "The average of the array elements is: " << average << endl;

        delete[] arr;
    }

    // Function to check the properties of a number
    void numberChecker() {
        int num;
        cout << "Input an integer: ";
        cin >> num;

        if (num == 0) {
            cout << "Number is Zero" << endl;
        } else if (num > 0) {
            if (num % 2 == 0) {
                cout << "Number is positive-even" << endl;
            } else {
                cout << "Number is positive-odd" << endl;
            }
        } else {
            if (num % 2 == 0) {
                cout << "Number is negative-even" << endl;
            } else {
                cout << "Number is negative-odd" << endl;
            }
        }
    }

    // Function to calculate the factorial of a number
    long long factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        }
        return num * factorial(num - 1);
    }

    // Function to get personal information
    void personalInfo() {
        string name, phoneNumber, dob;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your phone number: ";
        cin >> phoneNumber;
        cout << "Enter your Date of Birth: ";
        cin >> dob;
    }
};

int main() {
    PastQuestions pq;

    pq.addNumbers();
    pq.sumArray();
    pq.bubbleSort();
    pq.getStringLength();
    pq.evenOdd();
    pq.primeNumber();
    int num;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> num;
    if (pq.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    pq.linearSearch();
    pq.numberChecker();
    cout << "Input the number: ";
    cin >> num;
    cout << "The factorial of " << num << " is: " << pq.factorial(num) << endl;
    pq.personalInfo();

    return 0;
}

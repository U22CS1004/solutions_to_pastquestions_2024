# include  <iostream>
# include <cstring>
using namespace std;

class PastQuestions{
    public:


        // Function to add two numbers using pointer
        void addNumbers(int* a, int* b, int* result) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            int* a = &num1;
            int* b = &num2;
            sum = *a + *b;
            int* result = &sum
        
            cout << "The sum is of num1 and num2: " << *ptrSum << endl;
        }

        void sumArray(int arr, int size, int sum) {
            cout << "Enter the size of the array: ";
            cin >> size;

            // Dynamically allocate memory for the array
            int arr = new int[size];

            cout << "Enter " << size << " elements:" << endl; 
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int sum = 0;
            for (int i = 0; i < size; i++) {
                sum += arr[i]
            }
            
        }

        void bubbleSort() {
            int size;
            cout << "Enter the size of the array: ";
            cin >> size;

            int arr = new int[size];
            cout << "Enter " << size << " elements:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - i - 1; j++) { // compare adjacent elements
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

        }

        void getStringLength() {
            char str[50];
            cout << "Enter a string: ";
            cin >> str;
            int length = 0;
            int i = 0;
            while (str[i] != '\0') { // Traverse until null terminator
                length++;
                i++;
                cout << "Length of the string: " << length << endl;      
            }
        }


        void evenOdd(int num) {
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << num << " is even." << endl;
            } else {
                cout << num << " is odd." << endl;
            }
        }

        void primeNumber() {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num <= 1) { // 0 and 1 are not prime numbers
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
        bool isPalindrome() {
            int a;
            cout << "Enter a number to check if it's a palindrome: ";
            cin >> a;

            if (isPalindrome()) {
                cout << a << " is a palindrome." << endl;
            } else {
                cout << a << " is not a palindrome." << endl;
            }

            int original = a; // Store the original number
            int reversed = 0, digit;

            while (a > 0) {
                digit = a % 10; // Extract the last digit
                reversed = reversed * 10 + digit;
                a /= 10; // Remove the last digit
            }

            return original == reversed; // Compare the original and reversed numbers
        }


        void linearSearch() {
            int arr[], size;
            cout << "Enter the number of elements : ";
            cin >> size;

            cout << "Enter the array elements: ";
            cin >> arr[size]
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        
            int target;
            cout << "Enter the target element to search: ";
            cin >> target;

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
        }
        
        void sumAndAvgArray() {
            int arr, int size;
            cout << "Enter the size of the array: ";
            cin >> size;

            cout << "Enter " << size << " elements:" << endl;
            cin >> arr[size];
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }

            int sum = 0;
            for (int i = 0; i < size; i++) {
                sum += arr[i];
            }

            cout << "The sum of the array elements is: " << sum << endl;
            float average = sum/size
            cout << "The average of the array elements is: " << average << endl;
            
        }

        void numberChecker(int num) {
            int num; 
            cout << "Input an integer: ";
            cin >> num; 

            if (num == 0) {
                cout << "Number is Zero" << endl; 
            } 
            // Check if the number is positive
            else if (num > 0) {
                // Check if the positive number is even
                if (num % 2 == 0) {
                cout << "Number is positive-even" << endl; 
                } 
                else {
                cout << "Number is positive-odd" << endl; 
                }
            } 
            // If the number is not zero or positive, it is negative
                if (num % 2 == 0) {
                    cout << "Number is negative-even" << endl; 
                } 
                else {
                    cout << "Number is negative-odd" << endl; 
                }
            }

            return 0; 
        

        void factorial(){
            int num;
            cout << "Input the number: ";
            cin >> num;
            if (num == 0 || num == 1) {
                return 1;
            }
            return n * factorial(n - 1);
            cout << "The factorial of " << num << " is: " << factorial(num) << endl;
        }


        void personalInfo(string name, string phoneNumber, string dob){
            cout << "Enter your name";
            cin >> name;
            cout << "Enter your phone number";
            cin >> phoneNumber;
            cout << "Enter your Date of Birth";
            cin >> dob;
        }
}


int main() {
    PastQuestions pq;
    pq.addNumbers(result);
    pq.sumArray(sum);
    pq.bubbleSort();
    pq.getStringLength();
    pq.evenOdd(num);
    pq.primeNumber();
    pq.isPalindrome();
    pq.linearSearch()
    pq.numberChecker(num);
    pq.factorial();
    pq.personalInfo(name, phoneNumber, dob)

    
    // Create two student objects
    Student student1, student2;

    // Input information for student 1
    cout << "6a. Enter name of student 1: ";
    cin >> student1.name;
    cout << "Enter marks of student 1: ";
    cin >> student1.marks;
    cout << "Enter age of student 1: ";
    cin >> student1.age;

    // Input information for student 2
    cout << "Enter name of student 2: ";
    cin >> student2.name;
    cout << "Enter marks of student 2: ";
    cin >> student2.marks;
    cout << "Enter age of student 2: ";
    cin >> student2.age;

    // Display information of both students
    cout << "\nInformation of Student 1:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Marks: " << student1.marks << endl;
    cout << "Age: " << student1.age << endl;

    cout << "\nInformation of Student 2:" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Marks: " << student2.marks << endl;
    cout << "Age: " << student1.age << endl;

    // Calculate and display average marks
    float averageMarks = (student1.marks + student2.marks) / 2.0;
    cout << "\nAverage Marks: " << averageMarks << endl;
    return 0;
}
// 3. WRITE A PROGRAM TO SWAP TWO NUMBERS.

#include<iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << " " << b;

    return 0;
}
// 4. WRITE A PROGRAM TO SWAP TWO NUMBERS WITHOUT USING TEMP VARIABLE.

#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: " << a << " " << b;

    return 0;
}
// 5. WRITE A PROGRAM TO FIND OUT THE SIZE OF INT, FLOAT, DOUBLE AND CHAR.

#include<iostream>
using namespace std;

int main() {

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;

    return 0;
}

// 6. WRITE A PROGRAM TO FIND THE COMPOUND INTEREST.

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    float p, r, t, ci;

    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;

    ci = p * pow((1 + r / 100), t) - p;

    cout << "Compound Interest = " << ci;

    return 0;
}

// 10. WRITE A PROGRAM TO GENERATE THE FIRST N TERMS OF THE SEQUENCE (FIBONACCI).

#include<iostream>
using namespace std;

int main() {

    int n, a = 0, b = 1, c;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
// 11. WRITE A PROGRAM TO GENERATE ALL PRIME NUMBERS BETWEEN 1 AND N.

#include<iostream>
using namespace std;

int main() {

    int n, i, j, flag;

    cout << "Enter value of N: ";
    cin >> n;

    for (i = 2; i <= n; i++) {

        flag = 0;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << i << " ";
    }

    return 0;
}

// 12. WRITE THE PROGRAM TO FIND BOTH THE LARGEST AND SMALLEST NUMBER IN A LIST OF INTEGERS.

#include<iostream>
using namespace std;

int main() {

    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}

// 13. WRITE A PROGRAM OF CLASS DECLARATION, DEFINITION, ACCESSING CLASS MEMBERS.

#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.display();

    return 0;
}

// 14. WRITE A PROGRAM BY USING SCOPE RESOLUTION OPERATOR WITH ALL USE CASES.

#include<iostream>
using namespace std;

class Demo {
public:
    void show();
};

void Demo::show() {
    cout << "Function defined using scope resolution operator.";
}

int main() {

    Demo obj;
    obj.show();

    return 0;
}

// 15. WRITE A PROGRAM OF FUNCTION OVERLOADING.

#include<iostream>
using namespace std;

class Add {
public:
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    Add obj;

    cout << "Sum of two numbers: " << obj.sum(4,5) << endl;
    cout << "Sum of three numbers: " << obj.sum(3,4,5);

    return 0;
}

// 16. WRITE A PROGRAM OF OPERATOR OVERLOADING.

#include<iostream>
using namespace std;

class Complex {

public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {

    Complex c1(2,3);
    Complex c2(4,5);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}
// 17. WRITE A PROGRAM TO CHECK IF TWO ARRAYS ARE EQUAL OR NOT.

#include<iostream>
using namespace std;

int main() {

    int a[5], b[5];
    bool equal = true;

    cout << "Enter elements of first array:\n";
    for(int i=0;i<5;i++)
        cin >> a[i];

    cout << "Enter elements of second array:\n";
    for(int i=0;i<5;i++)
        cin >> b[i];

    for(int i=0;i<5;i++) {
        if(a[i] != b[i]) {
            equal = false;
            break;
        }
    }

    if(equal)
        cout << "Arrays are equal";
    else
        cout << "Arrays are not equal";

    return 0;
}


// 18. WRITE A PROGRAM OF CALL BY REFERENCE.

#include<iostream>
using namespace std;

void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 5, y = 10;

    swap(x,y);

     cout << "After swapping: " << x << " " << y;

   return 0;
 }

// 19. WRITE A PROGRAM OF CALL BY VALUE.

#include<iostream>
using namespace std;

void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 5, y = 10;

    swap(x,y);

    cout << "Values after swap attempt: " << x << " " << y;

    return 0;
}

// 20. WRITE A PROGRAM OF POINTER DECLARATION, PRINT THE VALUES AND ADDRESS.

#include<iostream>
using namespace std;

int main() {

    int x = 10;
    int *ptr;

    ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer value (address): " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
// 21(A). PROGRAM TO ILLUSTRATE NEW AND DELETE KEYWORDS FOR SINGLE VARIABLE.

#include<iostream>
using namespace std;

int main() {

    int *p;

    p = new int;

    *p = 50;

    cout << "Value = " << *p << endl;

    delete p;

    return 0;
}

// 21(B). PROGRAM TO ILLUSTRATE NEW AND DELETE KEYWORDS FOR ARRAY.

#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Array elements:\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    delete[] arr;

    return 0;
}

// 22. C++ PROGRAM TO IMPLEMENT MATRIX ADT USING A CLASS (READ, PRINT, SUBTRACT, MULTIPLY)

#include<iostream>
using namespace std;

class Matrix {

public:
    int a[10][10], b[10][10], c[10][10];
    int r, col;

    void read() {

        cout << "Enter rows and columns: ";
        cin >> r >> col;

        cout << "Enter first matrix:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<col;j++)
                cin >> a[i][j];

        cout << "Enter second matrix:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<col;j++)
                cin >> b[i][j];
    }

    void subtract() {

        cout << "Subtraction Result:\n";

        for(int i=0;i<r;i++){
            for(int j=0;j<col;j++){
                c[i][j] = a[i][j] - b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    Matrix m;

    m.read();
    m.subtract();

    return 0;
}
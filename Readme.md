# Basic Syntax

```bash
1. #include <iostream>
This is a preprocessor directive.
The #include directive tells the compiler to include the standard library file <iostream>.
<iostream> stands for "input-output stream" and is used to handle standard input (cin), standard output (cout), and standard error (cerr).

2. using namespace std;
This statement allows you to use names from the std (standard) namespace without qualifying them with the std:: prefix.
For example, you can use cout instead of std::cout.
The std namespace includes all the standard functions and objects provided by the C++ Standard Library.


3. int main()
This is the main function, where the execution of a C++ program begins.
int: Indicates that the function will return an integer value to the operating system upon completion.
Parentheses () indicate that this function does not take any arguments in this example.

4. { and }
Curly braces {} are used to define the body of a function or block of code.
Everything inside {} in the main function constitutes the executable code for the program.

5. cout << "Hello World!";
cout: Part of the <iostream> library, used for outputting data to the console.
It is an object of the class ostream, which is part of the C++ Standard Library.

cout stands for "character output."
It is an instance of the ostream class, defined in the <iostream> header file.

Purpose of cout :
It is used to send output to the standard output stream, typically the console.

How cout Works:

cout uses the stream insertion operator (<<) to output data.
The << operator is overloaded in the ostream class to handle different types of data (e.g., integers, floats, strings).

<<: The stream insertion operator, used to send data to cout.

"Hello World!": A string literal that will be displayed on the console.
The statement outputs the text "Hello World!" to the console.

6. return 0;
Indicates that the program has executed successfully.
Returning 0 is a conventional way to signal successful execution to the operating system.


```

# Important point from constant :

```bash

const int MYNUM = 89  ;

When you declare a constant variable, it must be assigned with a value.

```

# How to take input from user :

```bash

// first way :

int x;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value


cin is a object of iostream class that reads data from the keyboard with the extraction operator (>>).

However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):


// second way
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);


we often use the getline() function to read a line of text.


```

# Important point from Primitive Data type :

In C++ , Primitive data types are not object which voilates the object oriented rules.

# Important point from String :

String is an object in c++. standard string and (string from "<string>" library) are mutable but the string literals are immutable.
<br>
```bash 
const char* str = "Hello, World!";  
// String literal (Immutable)

```
<br>
If we want to concatenate a string and int then it causes error.
<br>
We can find the string length with "length()" function and "size()" function. This does not require to include the "string" library.  
<br>
we can include "<string>" library to use the string function.
<br>

```bash
We can use the c-type styling in c++ :

char greeting2[] = "Hello";
greeting2[0] = 'w';

cout << greeting2 ; //wello


```

# Important point from math in c++:

we can use "max(a,b)" and "min(a,b)" without including "<cmath>" library.
<br>
For other math function we need to include "<cmath>" library. like : sqrt(a)

# Important Point from Array :

Arrays are mutable. Its size is fixed. 
<br>
We can calculate size of array by using "sizeof()" function .
<br>
sizeof() operator returns the size of a type in bytes.
<br>
Example: int myNumbers[5] = {10, 20, 30, 40, 50};
<br>
we know that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
<br>
To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array:
<br>

```bash
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
cout << getArrayLength;

```

<br>

# C++ Structures

In C++, a structure (struct) is a user-defined data type that groups together different variables (possibly of different types) under a single name.

```bash
struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

```

<br>
```bash 
struct Rectangle {
    int length;
    int breadth;

    // Member function
    int area() {
        return length * breadth;
    }

};

int main() {
Rectangle r1 = {10, 20};
cout << "Area: " << r1.area() << endl; // Outputs: 200
return 0;
}

````
<br>
<br>
```bash
struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here

````

<br>
<br>
```bash

// Named Structures

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

```
<br>


# Important point from Reference :
A reference variable is a "reference" to an existing variable, and it is created with the & operator.
<br>
```bash
string food = "Pizza";  // food variable
string &meal = food;    // reference to food



cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
cout << &food ;  // memory address is 0x7ffe94c4ae90


```

# Important point from Pointer :
A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer.
<br>
Note that the type of the pointer has to match the type of the variable you're working with.
<br>
```bash 

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

```
# Dereference
```bash 
#include <iostream>
  #include <string>
  using namespace std;
  
  int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration
  
    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";
  
    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";
    return 0;
  }

```
<br>

```bash 

// Modify a pointer 

#include <iostream>
  #include <string>
  using namespace std;
  
  int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration
  
    // Output the memory address of food with the pointer
    cout << *ptr << "\n"; // Pizza
  
    // *ptr = "Apple"

    // Output the value of apple with the pointer
    cout << *ptr << "\n"; // Apple
    return 0;
  }


```

# Function : 
```bash 

// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"





// This is the way in which we can define the function after the main function. 


// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}

```
<br>


# Important point from Psss by reference and Pass by value:
```bash 


// pass by value 
#include <iostream>
  void modifyValue(int x) {
      x = 42; // Modifying the copy
  }
  
  int main() {
      int num = 10;
      modifyValue(num);
      std::cout << "Original Value: " << num << std::endl; // Output: 10
      return 0;
  }




// pass by reference 
#include <iostream>
  void modifyValue(int &x) {
      x = 42; // Modifies the original variable
  }
  
  int main() {
      int num = 10;
      modifyValue(num);
      std::cout << "Modified Value: " << num << std::endl; // Output: 42
      return 0;
  }

  
```


<br>

# Pass array :
```bash 
void myFunction(int myNumbers[]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}



// Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[]).

```
<br>

# Vector : 
STL : STL (Standard Template Library) in C++ is a powerful library that provides a set of template-based classes and functions to manage data structures and algorithms efficiently.
<br>
A vector in C++ is a dynamic array provided by the Standard Template Library (STL).
<br>
Vector is like a sequence container and elements are stored in contiguous memory as same in array. 
<br>
In vector there are some functions which provide bound checking like if we have an array of size 5 then if we want to access array[5] then using some functions of vectors we can bound check and it will not show error. 
<br>
By default it also not provide any bound checking like array. 
<br>
```bash 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";  // Output: 10 20 30
    }
}





// Two D vector :
vector<vector<int>> vec = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

```


# Function overloading :
In Function overloading ,multiple functions can have the same name as long as but the number and/or type of parameters are different.

# C++ classes and object and method:
```bash 
class MyClass {         // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

```
<br>
```bash 
//To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function.


class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

```
<br>
In C++, classes themselves do not have a default access specifier. 



# Constructor :
The constructor has the same name as the class, it is always public, and it does not have any return value.
<br>
```bash 
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

```
<br>
Note : Like fucntion we can define the constructor inside the constructor inside and outside the classes with same rule.

# Access specifiers :
In C++, there are three access specifiers:
<br>
public - members are accessible from outside the class
<br>
private - members cannot be accessed (or viewed) from outside the class
<br>
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
<br>
Note: By default, all members of a class are private if you don't specify an access specifier.

# Encapsulation 
When we use private accsess variable in the Encapsulation then :
<br>
We use "getter" and "setter" method to set and get the value of that variable within the same class.  
<br>
When we use protected accsess variable in base class then :
<br>
We use "getter" and "setter" method to set and get the value of that variable within the derived class.  
<br>

# Inheritance :
Inheritance can be single level,multilevel,multiple,Hierarchical and Hybrid inheritance. 
<br>
```bash 
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

```
<br>
```bash 
class Base {};  
class Derived : Base {};  // Inherits privately by default  


// This is same as 
class Derived : private Base {};  
```

# Polymorphism
Polymorphism means "many forms" and allows the same function or operator to behave differently in different contexts. It enables code reusability and flexibility.
<br>
Types of Polymorphism in C++:
<br>
C++ supports two types of polymorphism:
<br>
Compile-time Polymorphism (Static Binding / Early Binding)
<br>
Function Overloading
<br>
Operator Overloading
<br>
Runtime Polymorphism (Dynamic Binding / Late Binding)
<br>
Function Overriding (Using Virtual Functions)
<br>
1. Compile-Time Polymorphism
This is resolved at compile time.
<br>
🔹 Function Overloading
Multiple functions can have the same name but different parameters.

```bash
#include <iostream>
using namespace std;

class Math {
public:
    void add(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }
    void add(double a, double b) {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Math obj;
    obj.add(5, 10);      // Calls first add()
    obj.add(5.5, 2.5);   // Calls second add()
}
✅ The compiler decides which function to call based on arguments.
```
<br>

🔹 Operator Overloading :
<br>
Operators like +, -, *, etc., can be overloaded for user-defined types.

```bash
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}
    
    // Overloading +
    Complex operator+(Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // Calls overloaded + means this calls operator+ method

    // The + operator (overloaded) is called on c1. The operator+ function takes c2 as its parameter.
    c3.display();
}
✅ Now, + works with Complex objects.


// Initializer List (: real(r), imag(i)):
// This directly initializes real and imag using the values of r and i before entering the constructor body.
// It's more efficient than assigning values inside the constructor body.
// Equivalent to:

// Complex(int r, int i) { 
//     real = r;  
//     imag = i;  
// }
// But initializer lists are preferred because they directly initialize variables instead of assigning values.





```
<br>
2. Runtime Polymorphism :
<br>
This is achieved through function overriding and virtual functions. The function call is resolved at runtime.
<br>
🔹 Function Overriding (Virtual Functions):
<br>
A virtual function in C++ is a function that is defined in a base class and is meant to be overridden in a derived class. 
<br>
A derived class can override a function from the base class.
<br>
```bash
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;

    ptr->show(); // Calls Derived's show() because of virtual function
}
✅ Without virtual, it would call Base::show().
✅ With virtual, it calls Derived::show() at runtime (late binding).

```
<br>

# Abstraction :
C++ supports abstraction through:
<br>
Abstract Classes (using pure virtual functions)
<br>
Interfaces (only pure virtual functions)
<br>
1️⃣ Abstract Class (Using Pure Virtual Functions)
<br>
A class that contains at least one pure virtual function (= 0) is called an abstract class.
It cannot be instantiated directly, but a derived class must override its pure virtual function.
<br>
Example: Abstract Class with Pure Virtual Function
<br>
```bash 
#include <iostream>
using namespace std;

class Shape { // Abstract class
public:
    virtual void draw() = 0;  // Pure virtual function (must be overridden)
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape obj; // ❌ ERROR: Cannot instantiate abstract class

    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  // Output: Drawing a Circle
    s2->draw();  // Output: Drawing a Square

    delete s1;
    delete s2;
}
// ✅ Explanation:

// Shape is an abstract class because it has a pure virtual function.
// Circle and Square are concrete classes that implement draw().
// We use a pointer to the base class (Shape*) to call overridden methods at runtime (dynamic binding).
// 2️⃣ Abstraction via Interface (Only Pure Virtual Functions)
// If a class has only pure virtual functions, it acts as an interface.
```

<br>
Example: Interface in C++
<br>
```bash
#include <iostream>
using namespace std;

class Animal { // Interface
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();  // Output: Woof! Woof!
    a2->makeSound();  // Output: Meow! Meow!

    delete a1;
    delete a2;
}
//✅ Explanation:

//Animal is an interface since it only has pure virtual functions and it also cannot instantiate.
//Dog and Cat implement the makeSound() function.

```


# Exception Handling :
```bash 
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}


//Note : If we throw a number then we can also include that in the catch block by taking as parameter. like : catch(int myNum){}

```

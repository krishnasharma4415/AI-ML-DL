#include <iostream>
using namespace std;

// A template class for adding numbers of different types
template <typename T>
class Adder
{
public:
    // A virtual function for adding two numbers
    virtual T add(T a, T b)
    {
        return a + b;
    }
};

// A derived class that inherits from Adder and overrides the add function
// to add three numbers instead of two
template <typename T>
class TripleAdder : public Adder<T>
{
public:
    // An override function for adding three numbers
    T add(T a, T b, T c)
    {
        return a + b + c;
    }
};

template <typename T>
class Subtractor
{
public:
    virtual T Subtract(T a, T b)     // A virtual function for subtracting two numbers
    {
        return a - b;
    }
};

template <typename T>
class TripleSubtractor : public Subtractor<T> // A derived class that inherits from Subtractor and overrides the Subtract function to subtract three numbers instead of two
{
public:
    // An override function for adding three numbers
    T Subtract(T a, T b, T c)
    {
        return (a - b - c);
    }
};

template <typename T>
T Multiply(T a, T b) {
  return a*b;
}

template <typename T>
T Divide(T a, T b) {
  return a/b;
  
}


int main()
{
    Adder<int> int_adder;                            // Create an object of Adder class for int type
    TripleAdder<int> int_triple_adder;               // Create an object of TripleAdder class for int type
    Subtractor<int> subtractor;                      // Create an object of Subtractor class for int type
    TripleSubtractor<int> triple_subtractor;         // Create an object of TripleSubtractor class for int type
    Adder<float> float_adder;                        // Create an object of Adder class for float type

    int choice;     // A variable to store the user's choice
    // A loop to repeat the menu until the user exits
    do
    {
        // Display the menu
        cout << "Choose an option:\n";
        cout << "1. Add two integer numbers\n";
        cout << "2. Add three integer numbers\n";
        cout << "3. Add two floating point numbers\n";
        cout << "4. Subtract two numbers\n";
        cout << "5. Subtract three numbers\n";
        cout << "6. Multiply two numbers\n";
        cout << "7. Divide two numbers\n";
        cout << "8. Exit\n";
        // Read the user's choice
        cin >> choice;
        // A switch case to perform the corresponding operation
        switch (choice)
        {
        case 1:
        {
            // Declare two int variables
            int a, b;
            // Read the input from the user
            cout << "Enter two integer numbers:\n";
            cin >> a >> b;
            // Call the add function of int_adder and print the result
            cout << "The sum is " << int_adder.add(a, b) << "\n";
            break;
        }
        case 2:
        {
            // Declare three int variables
            int a, b, c;
            // Read the input from the user
            cout << "Enter three integer numbers:\n";
            cin >> a >> b >> c;
            // Call the add function of int_triple_adder and print the result
            cout << "The sum is " << int_triple_adder.add(a, b, c) << "\n";
            break;
        }
        case 3:
        {
            // Declare two float variables
            float a, b;
            // Read the input from the user
            cout << "Enter two floating point numbers:\n";
            cin >> a >> b;
            // Call the add function of float_adder and print the result
            cout << "The sum is " << float_adder.add(a, b) << "\n";
            break;
        }
        case 4:
        {
            // Declare two variables of int type
            int a, b;
            // Read the input from the user
            cout << "Enter two numbers:\n";
            cin >> a >> b;
            // Call the Subtract function and print the result
            cout << "The difference is " << subtractor.Subtract(a, b) << "\n";
            break;
        }
        case 5:
        {
            // Declare three int variables
            int a, b, c;
            // Read the input from the user
            cout << "Enter three integer numbers:\n";
            cin >> a >> b >> c;
            // Call the add function of triple_subtractor and print the result
            cout << "The sum is " << triple_subtractor.Subtract(a, b, c) << "\n";
            break;
        }
        case 6: {
      // Declare two variables of any type
      auto a=0, b=0;
      // Read the input from the user
      cout << "Enter two numbers:\n";
      cin >> a >> b;
      // Call the subtract function and print the result
      cout << "The difference is " << Multiply(a, b) << "\n";
      break;
    }
case 7: {
      // Declare two variables of any type
      auto a=0, b=0;
      // Read the input from the user
      cout << "Enter two numbers:\n";
      cin >> a >> b;
      // Call the subtract function and print the result
      cout << "The difference is " << Divide(a, b) << "\n";
      break;
    }

        case 8:
        {
            // Exit the loop
            cout << "Thank you for Playing. Goodbye!\n";
            break;
        }
        default:
        {
            // Invalid choice
            cout << "Invalid option. Please try again.\n";
            break;
        }
        }
    } while (choice != 6);
    return 0;
}

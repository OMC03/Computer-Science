#include<iostream>
#include"MyInteger.h"

using namespace std;

int main()
{
cout << "Omar Cano" << "\n" << endl;

cout<< "Creating MyInt object with private number = 0" << endl;
MyInt Integer1(0);

cout << "\n" << "Value stored inside object Integer1: " << Integer1.get() << endl;

cout << "\n" << "After setting num to 5" << endl;
Integer1.set(5);

cout << "\n" << "Value stored inside object Integer1 is: " << Integer1.get() << endl;

cout << "\n" << "After adding 10 to num " << endl;
Integer1.add(10);

cout << "\n" << "Value stored inside object Integer1 is: " << Integer1.get() << endl;

cout << "\n" << "After subtracting 30 from num" << endl;
Integer1.subtract(30);

cout << "\n" << "Value stored inside object Integer1 is:   " << Integer1.get() << endl;

cout << "\n" << "After multiplying 15 by num" << endl;
Integer1.multiply(15);

cout << "\n" << "Value stored inside object Integer1 is: " << Integer1.get() << endl;

MyInt Integer2(0);
cout << "\n" << "Creating MyInt object with private number = 0" << endl;

if( Integer2.compare(Integer1) == 0)
    {
        cout << "\n" << "Integer1 is greater than Integer2" << endl;
    }
if( Integer2.compare(Integer1) == 1)
    {
        cout << "\n" << "Integer1 is equal to Integer2" << endl;
    }
if( Integer2.compare(Integer1) == 2)
    {
        cout << "\n" << "Integer1 is less than Integer2" << endl;
    }
return 0;
}

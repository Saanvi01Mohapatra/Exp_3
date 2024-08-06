# Exp3
# Aim:To study and implement Operators in C++
## Theory:

## Table of Contents

- [Introduction](#introduction)
- [Arithmetic Operators](#arithmetic-operators)
- [Logical Operators](#logical-operators)
- [Comparison Operators](#comparison-operators)
- [Assignment Operators](#assignment-operators)
- [Bitwise Operators](#bitwise-operators)
- [Contributing](#contributing)
- [License](#license)



## Arithmetic Operators

Arithmetic operators perform mathematical operations such as addition, subtraction, multiplication, and division.

- **Addition (+)**: Adds two operands.
- **Subtraction (-)**: Subtracts the second operand from the first.
- **Multiplication (*)**: Multiplies two operands.
- **Division (/)**: Divides the first operand by the second.
- **Modulus (%)**: Returns the remainder of a division operation.

## Logical Operators

Logical operators are used to combine or invert boolean expressions.

- **AND (&&)**: Returns true if both operands are true.
- **OR (||)**: Returns true if at least one operand is true.
- **NOT (!)**: Inverts the value of the operand.

## Comparison Operators

Comparison operators are used to compare two values.

- **Equal to (==)**: Returns true if both operands are equal.
- **Not equal to (!=)**: Returns true if operands are not equal.
- **Greater than (>)**: Returns true if the left operand is greater than the right.
- **Less than (<)**: Returns true if the left operand is less than the right.
- **Greater than or equal to (>=)**: Returns true if the left operand is greater than or equal to the right.
- **Less than or equal to (<=)**: Returns true if the left operand is less than or equal to the right.

## Assignment Operators

Assignment operators are used to assign values to variables.

- **Assignment (=)**: Assigns the right operand's value to the left operand.
- **Add and assign (+=)**: Adds the right operand to the left operand and assigns the result to the left operand.
- **Subtract and assign (-=)**: Subtracts the right operand from the left operand and assigns the result to the left operand.
- **Multiply and assign (*=)**: Multiplies the left operand by the right operand and assigns the result to the left operand.
- **Divide and assign (/=)**: Divides the left operand by the right operand and assigns the result to the left operand.
- **Modulus and assign (%=)**: Takes the modulus using the two operands and assigns the result to the left operand.


## code
```
//Saanvi Mohapatra
//23070123110
//EnTC B2
//Exp-2 operators
#include <iostream>
using namespace std;
int main()
{
    //arithmetic operators:
    int x,y,sum,sub,mult,divs,mod,inc,dcr;
    cout<<"enter the first number for arithmetic:";
    cin>>x;
    cout<<"enter the number for arithmetic:";
    cin>>y;
    sum=x+y;
    cout<<"x+y="<<sum;
    sub=x-y;
    cout<<"\nx-y="<<sub;
    mult=x*y;
    cout<<"\nx*y="<<mult;
    divs=x/y;
    cout<<"\nx/y="<<divs;
    mod=x%y;
    cout<<"\nx%y="<<mod;
    cout<<"\nx++="<<++x;
    cout<<"\nx--="<<--x;
    //comparision operators:
    int w,z,eq,neq,geq,leq,g,l;
    cout<<"\nenter the first number for comparision:";
    cin>>w;
    cout<<"enter the second number for comparision:";
    cin>>z;
    eq=(w==z);
    cout<<"\n"<<eq;
   
    leq=(w<=z);
    cout<<"\n"<<leq;
   
    geq=(w>=z);
    cout<<"\n"<<geq;
   
    g=(w>z);
    cout<<"\n"<<g;
   
    l=(w<z);
    cout<<"\n"<<l;
   
    neq=(w!=z);
    cout<<"\n"<<neq;
   
     //logical operators:
    int j,k,a,o,n;
    cout<<"\nenter the first number for logical:";
    cin>>j;
    cout<<"enter the second number for logical:";
    cin>>k;
    cout<<"\n" << (x > 1 && x < 10);
    cout<<"\n" << (x > 1 || x < 10);
    cout <<"\n"<< (!(x > 1 && x < 10));
   
    //assignment operators:
        int s;
        cout<<"\nenter the first number for assignment:";
        cin>>s;
        cout<<"\n" <<s;
        s += 3;
        cout<<"\n"<< s;
        s -= 3;
        cout<<"\n"<<s;
        s *= 3;
        cout<<"\n"<<s;
        s /= 3;
        cout<<"\n"<<s;
        s %= 3;
        cout<<"\n"<<s;
        s &= 3;
        cout<<"\n"<<s;
        s |= 3;
        cout<<"\n"<<s;
        s ^= 3;
        cout<<"\n"<<s;
        s >>= 3;
        cout<<"\n"<<s;
        s <<= 3;
        cout<<"\n"<<s;
        return 0;
}
```
## Output:

```
enter the first number for arithmetic:5
enter the number for arithmetic:3
x+y=8
x-y=2
x*y=15
x/y=1
x%y=2
x++=6
x--=5
enter the first number for comparision:7
enter the second number for comparision:2

0
0
1
1
0
1
enter the first number for logical:14
enter the second number for logical:3

1
1
0
enter the first number for assignment:6

6
9
6
18
6
0
0
3
0
0
0
```

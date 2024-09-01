#include <iostream>

using namespace std;

int math_operator(int input1, int input2, int type)
{
    if (type == 1)
    {
        return (input1 + input2);
    }

    else if (type == 2)
    {
        return (input1 - input2);
    }

    else if (type == 3)
    {
        return (input1 * input2);
    }

    else if (type == 4)
    {
        return (input1 / input2);
    }

    else if (type == 5)
    {
        return (input1 % input2);
    }

    else if (type == 6)
    {
        return input1 & input2;
    }

    else if (type == 7)
    {
        return input1 | input2;
    }

    else if (type == 8)
    {
        return input1 ^ input2;
    }

    else if (type == 9)
    {
        return input1 << input2;
    }

    else if (type == 10)
    {
        return input1 >> input2;
    }

    else
    {
        return 0;
    }

}

bool math_comparator (int input1, int input2, int type)
{
    if (type == 1)
    {
        return (input1 < input2);
    }

    else if (type == 2)
    {
        return (input1 <= input2);
    }

    else if (type == 3)
    {
        return (input1 > input2);
    }

    else if (type == 4)
    {
        return (input1 >= input2);
    }

    else if (type == 5)
    {
        return (input1 == input2);
    }

    else if (type == 6)
    {
        return (input1 != input2);
    }

    else
    {
        return 0;
    }

}

// For the first function,
// The first input is the first number to be calculated
// The second input is the second number to be calculated
// The third input is the type of operation
// 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division (quotient),
// 5 for division (remainder), 6 for bitwise AND operator, 7 for bitwise OR operator, 8 for bitwise XOR operator,
// 9 for left shift operator and 10 for right shift operator
// All inputs, as well as the output, are integers (int)

// For the second function,
// The first input is the first number to be compared
// The second input is the second number to be compared
// The third input is the type of comparison
// 1 for less than, 2 for less than or equal, 3 for more than, 4 for more than or equal,
// 5 for equal and 6 for unequal
// All inputs are integers (int)
// The output is a boolean

#include <iostream>

using namespace std;

int rockpaperscissors(int choice)
{
    int my_choice = (rand() % 3) + 1;
    if (choice + 1 == my_choice || choice - 2 == my_choice)
    {
        return -1;
    }

    else if (choice - 1 == my_choice || choice + 2 == my_choice)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

int main()
{
    cout << rockpaperscissors(3);
    return 0;
}

// Input the number you want to play and the output is whether you win or not
// Input: 1 is rock, 2 is paper, 3 is scissors
// Output: -1 is lose, 0 is tie, 1 is win
// Both input and output are integers (int)

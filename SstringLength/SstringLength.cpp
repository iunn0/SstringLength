#include <iostream>
#include "stringLength.h"
using namespace std;

int main()
{
    const int maxLength = 32;
    char input[maxLength];

    cout << "Put away your text, Walter" << endl;
    std::cin.getline(input, maxLength);

    cout << "Length of the input text: " << lengthCalculator(input);

    return 0;
}

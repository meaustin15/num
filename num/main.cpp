#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int sum(int x, int y);
int main()
{
    int num1, num2;
    float answer;

    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2 ";
    cin >>num2;

    answer = sum(num1, num2);

    cout << "The sum of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout <<" is " << answer << endl;
}

int sum(int x, int y)
{
    return x + y;
}

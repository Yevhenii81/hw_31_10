#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 35;

    cout << (long long int) & a << "\n";
    cout << (long long int) & b << "\n";

    int* ptr_a = &a;
    int* ptr_b = &b;
    int distance = (char*)ptr_b - (char*)ptr_a;

    cout << distance << "\n";
}


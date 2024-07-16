//ADD SUB MULT DIV WITH TIME EXECUTION

#include <iostream>
#include <chrono>  // For timing

using namespace std;
using namespace std::chrono;

int add(int, int);
int su(int, int);
int mul(int, int);
float dv(int, int);

int main()
{
    int m, n, sum, multiply, subtract;
    float divide;

    cout << "Enter two numbers: ";
    cin >> m >> n;

    auto start = high_resolution_clock::now();

    sum = add(m, n);
    multiply = mul(m, n);
    divide = dv(m, n);
    subtract = su(m, n);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nAddition: " << sum << endl;
    cout << "Multiply: " << multiply << endl;
    cout << "Division: " << divide << endl;
    cout << "Subtract: " << subtract << endl;

    cout << "\nTime taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}

int su(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

float dv(int a, int b)
{
    return static_cast<float>(a) / b;
}

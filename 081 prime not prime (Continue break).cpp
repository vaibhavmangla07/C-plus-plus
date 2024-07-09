//PRIME NOT PRIME
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    std::cout << "Enter number : ";
    cin >> n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            std::cout << "Non Prime" << std::endl;
            break;
        }
    }
    if(i==n)
    std::cout << "Prime" << std::endl;

    return 0;
}

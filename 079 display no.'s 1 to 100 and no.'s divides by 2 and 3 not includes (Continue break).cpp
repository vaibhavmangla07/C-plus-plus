//CONTINUE 
#include <iostream>

using namespace std;

int main()
{
    int i;
    
    for(i=0;i<=100;i++)
    {
        if(i%3==0 || i%2==0)
        {
        continue;
        }
    
    std::cout << i << " ";
    }

    return 0;
}

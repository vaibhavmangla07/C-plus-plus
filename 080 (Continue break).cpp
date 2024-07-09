//POCKETMONEY 
#include <iostream>

int main()
{
    int pocketmoney=3000;
    
    for(int days=1;days<=31;days++)
    {
       if(days%2==0)
       {
           continue;
       }
       if(pocketmoney==0)
       {
           break;
       }
    std::cout << "Go out Today for party" << std::endl;
    pocketmoney=pocketmoney-500;
    
    }
    
    std::cout << "\nOops! Pocket Money is Empty!" << std::endl;

    return 0;
}

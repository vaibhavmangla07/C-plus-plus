//Calculate price with 18% GST
#include <iostream>
using namespace std;

void price(float value){
    value += (0.18 * value);
    cout << "Price after 18% GST : " << value << endl;
}

int main() {
    float value = 0;
    cout << "Enter price : ";
    cin >> value;
    
    cout << "Price before GST : " << value << endl;
    
    price(value);
    
    return 0;
}
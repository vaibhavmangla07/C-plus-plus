//Pythagorean Triplet

#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

bool check(int x, int y, int z){
    int a = max(x, max(y, z));
    int b, c;
    
    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c){
        return true; // return 1;
    }
    else{
        return false; // return 0;
    }
}

int main() {
    int x, y, z;

    cout << "Enter three value : ";
    cin >> x >> y >> z;
    
    auto start = high_resolution_clock::now();
    
    if(check(x, y, z)){
        cout << "Pythagorean Triplet" << endl;
    }
    else{
        cout << "Not a Pythagorean Triplet" << endl;
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}





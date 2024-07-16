//Adding two Binary Numbers 

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int reverse(int n){
    int ans = 0;
    
    while(n>0){
        int lastdigit = n%10;
        ans = ans*10 + lastdigit;
        n /= 10;
    }
    return ans;
}

int addBinary(int a, int b){
    int ans = 0;
    int prevCarry = 0;
    
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
            else{
                ans = ans*10 + prevCarry;
                prevCarry = 1;
            }
            a /= 10;
            b /= 10;
        }
        
        while(a > 0){
            if(prevCarry == 1){
                if(a%2 == 1){
                    ans = ans*10 + 0;
                    prevCarry = 1;
                }
                else{
                    ans = ans*10 + 1;
                    prevCarry = 0;
                }
            }
            else
                ans = ans * 10 + (a%2);
              
            a /= 10;
        }
        
        while(b > 0){
            if(prevCarry == 1){
                if(b%2 == 1){
                    ans = ans*10 + 0;
                    prevCarry = 1;
                }
                else{
                    ans = ans*10 + 1;
                    prevCarry = 0;
                }
            }
            else
                ans = ans*10 + (b%2);
            
            b /= 10;
        }
        if(prevCarry == 1)
            ans = ans*10 + 1;
        
        ans = reverse(ans);
    
    return ans;
}

int main() {
    int a, b;

    cout << "Enter two binary number : ";
    cin >> a >> b;
    
    auto start = high_resolution_clock::now();
    
    cout << addBinary(a, b) << endl; 
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
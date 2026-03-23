#include<iostream>
using namespace std ;

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) return false;  // Negative numbers are not palindrome
        
        int original = x;
        long long reversed = 0;
        
        while(x > 0) {
            int digit = x % 10;           
            reversed = reversed * 10 + digit;
            x = x / 10;                  
        }
        
        return original == reversed;
    }
};
int main(){
    int n ;
    cout << "Enter the number : " ;
     cin>> n ;
    Solution S1 ;
    cout << S1.isPalindrome(n) << endl ;
}

#include<iostream>
using namespace std ;

class Solution {
public:
    double myPow(double x, int n) {
        long BinForm = n ;
        double ans = 1 ;
        if(n==0) return 1.0 ;
        if(x==0) return 0.0 ;
        if(x==1) return 1.0 ;
        if(x == -1 && n%2==0) return 1.0 ;
        if(x == 1 && n%2!=0) return -1.0 ;
        
        if(n<0){
            x = 1/x ;
            BinForm = -BinForm ;
        }
        while(BinForm>0){
            if(BinForm % 2 == 1){
                ans*=x ;
            }
            x*=x ;
            BinForm /= 2 ;
        }

        return ans ;
    }
};

int main(){
    int n ;
    double x ;
    cout << "Enter the base element : "  << endl ;
    cin >> x ;
    cout << "Enter the power in binary form : " << endl ;
    cin >> n ;
    Solution S ;
    S.myPow(x,n) ;
    return 0;
}
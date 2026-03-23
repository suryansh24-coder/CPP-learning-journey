#include<iostream>
using namespace std ;

int BinToDec(int BinNum){
    int ans =0 ,pow = 1; 
    while(BinNum >0){
    int rem = BinNum % 2 ;
     BinNum /= 10 ;
     ans += (pow*rem);
     pow *= 2 ;
    }
    return ans ; // Decimal Number :-
}
int main(){
    int BinNum;
    cout << "Enter the Binary number : " ;
    cin >> BinNum ;
    cout << "The Entered number in decimal formate is : " << BinToDec(BinNum) << "  " ;
    return 0 ;
}
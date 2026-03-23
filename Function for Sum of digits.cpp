#include<iostream>
using namespace std ;

int SumDigit(int num){
    int digitSum = 0 ;
    while(num>0){
        int lastDigit = num % 10 ;
        num = num / 10 ;
        digitSum += lastDigit ;
    }
    return digitSum ;
}
int countDigit(int num){
    int count = 0 ;
    while (num >0){
        int lastDigit = num % 10 ;
        count ++ ;
        num = num / 10 ;
    }
    return count ;
}
int main(){
   int num ;
   cout << "Enter the number you want : " << endl ;
   cin >> num ;
   cout << "The sum of digits of the entered number is  : " << SumDigit(num) << endl ;
   cout << "The total numbers of digits are : " << countDigit(num) << endl ;
    return 0;
}
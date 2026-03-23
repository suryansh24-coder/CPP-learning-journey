#include<iostream>
#include<vector>
using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0 , bestBuy = prices[0] ;
        for(int i=0 ; i<prices.size() ; i++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit, prices[i]-bestBuy) ;
            }
            bestBuy = min(bestBuy , prices[i]) ;
        }
        return maxProfit ;
    }
};

int main(){
    int size ; 
    cout<< "Enter the size of the array : " << " " ;
    cin >> size; 
    vector<int> price(size) ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ; i<size; i++){
        cin >> price[i] ;
    }
    cout << "The entered array is : " << endl ;
    for(int val : price ) {
        cout << val << " " ;
    }
    Solution S ;
    cout << "\nMaximum Profit: " << S.maxProfit(price);
    
    return 0 ;
}
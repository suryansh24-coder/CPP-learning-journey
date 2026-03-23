#include<iostream>
using namespace std;

int DecToBin(int DecNum){
    int pow=1,ans=0 ;
    while(DecNum>0){
        int rem = DecNum % 2;
        DecNum /= 2;
        ans += (pow*rem);
        pow *= 10 ;
    }
    return ans ;
}
 int main()
{
    int n ;
    cout << "Enter the range till where you want decimal to binary conversion : " ;
    cin >> n ;
          for(int i=1 ; i<=n ; i++){
               cout << "The number" << " " << i << "  in binary is :  " << DecToBin(i) << endl ;
             }
  return 0;
}
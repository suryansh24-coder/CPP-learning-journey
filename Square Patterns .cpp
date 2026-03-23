#include<iostream>
using namespace std ;

int main(){
    //Square pattern :-
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
       for(int i=1;i<=n;i++){
          for(int j=1 ; j<=n ;j++){
            cout<<j<<" ";
          }
          cout<<endl;
       }
   


    //Square pattern : Printing star:
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
       for(int i=1;i<=n;i++){
          for(int j=1 ; j<=n ;j++){
            cout<<"*"<<" ";
          }
          cout<<endl;
       }
    


    //Square pattern : Printing alpbhabets :-
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
       for(int i=0 ; i<n ;i++){
        char ch= 'A';
          for(int j=0 ; j<n ;j++){
            cout<<ch<<" ";
            ch=ch+1;
          }
          cout<<endl;
       }
    

    //Square pattern : Sequencial way(Continue):-
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
    int num=1;
       for(int i=0 ; i<n ; i++){
          for(int j=0 ; j<n ;j++){
            cout<<num<<" ";
            num++;
          }
          cout<<endl;
       }




    //Square pattern : Sequencial way(Continue) in alphabet:-
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
    char num='A';
       for(int i=0 ; i<n ; i++){
          for(int j=0 ; j<n ;j++){
            cout<<num<<" ";
            num++;
          }
          cout<<endl;
       }
   
    //Square pattern : Sequencial way(Continue):-
    int n;
    cout<<"Enter the value of n : \t";
    cin>>n;
   
       for(int i =0; i<n ; i++){
          for(int j=0 ; j<n ;j++){
            cout<<n<<" ";
            n++;
          }
          cout<<endl;
       }
    return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"value of a:";
//     cin>>a;
//     cout<<"value of b:";
//     cin>>b;
//     cout<<" Sum is:"<<(a+b)<<endl;
//     cout<<" Difference is:"<<(a-b)<<endl;
//     cout<<" Prdouct is:"<<(a*b)<<endl;
//     cout<<" Divison is:"<<(a/b)<<endl;
//     cout<<" Modulus is:"<<(a%b)<<endl;
//     return 0 ;
// }
// int main(){// Return answer true or false :
//     cout<<"Greater than: "<<(3<4)<<endl;
//     cout<<"Less than: "<<(3>4)<<endl;
//     cout<<"Greater than equal to : "<<(3<=4)<<endl;
//     cout<<"Less than equal to : "<<(3>=4)<<endl;
//     cout<<"Not equal to : "<<(3!=9)<<endl;
//     cout<<"Equal to than: "<<(3==3)<<endl;
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number n";
//     cin>>n;
//     if(n>0){
//         cout<<"Positive number \n";
//     }else {
//        cout<<"Negative number \n"; 
//     }
//     return 0;
// }

// int main(){
//     int age;
//     cout<<"Enter your age : ";
//     cin>>age;
//     if(age>=18){
//         cout<<"Eligible for voting \n";
//     }else if(age>13){
//         cout<<"Teenager\n";
//     }
//     else{
//         cout<<"Not eligible for voting\n";
//     }
//     return 0;
// }
// function for odd or even ;
// int main(){
//  int num;
//  cout<<"Enter the number : ";
//  cin>>num;
//  if(num%2==0){
//     cout<<"It's a Even number."<<endl;
//  }else if(num==0){
//     cout<<"It's a whole number."<<endl;
//  }else{
//     cout<<"It's a Odd number."<<endl;
//  }
//     return 0;
// }
// Grading system

// int main(){
//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;
//     if(marks>=90  &&  marks<=100){
//         cout<<"Excellent you got 'A'"<<endl;
//     }else if(marks>=75 && marks<=90){
//         cout<<"Very good you got 'B'"<<endl;
//     }else if (marks>=50 && marks<=75){
//         cout<<"Good you got 'C'"<<endl;
//     }else{
//         cout<<"Sorry you failed  you got 'F'"<<endl;
//     }
//     return 0;
// }

// int main(){

//     char x;
//     cout<<"Enter the character :";
//     cin>>x;
//     if(x>=65 && x<=90){
//         cout<<"It's a uppercase character."<<endl;
//     }else if(x>=97 && x<=122){
//         cout<<"It's a lowercase character."<<endl;
//     }else{
//         cout<<"It's not a character."<<endl;
//     }
//     return 0;
// }

// int main() {
//      char x;
//     cout<<"Enter the character :";
//     cin>>x;
//     if(x>='A' && x<='Z'){
//         cout<<"It's a uppercase character."<<endl;
//     }else if(x>='a' && x<='z'){
//         cout<<"It's a lowercase character."<<endl;
//     }else{
//         cout<<"It's not a character."<<endl;
//     }
//     return 0;
// }
// Using ternary operators :
// int main(){
//   int n;
//   cout<<"Enter the number";
//   cin>>n;
//   cout<< (n>0)?"Positive":"Negative"<<endl;
//     return 0;
// }
// int main(){
//     char i= 'R';
//     while(i<=500){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;
// int main(){
//     int i= 0;
//     while(i<=10){
//         cout<<i<<"";
//         i++;
//     }
//     cout<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the Number of which you want table to print.";
//     cin>>n;
//     for(i=1;i<=10;i++){
//         cout<<n*i;
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n, sum=0;
//     cout<<"Enter the number n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//         cout<<sum;
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     int sum = 1;
//     while(sum<=num){
//         cout<<sum<<" ";
//         sum++;
//     }
//     cout<<endl;
//     return 0;
// }

// using for loop printing ;
// int main(){
//     int n;
//     cout<<"Enter the value of n :";
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// for sum of n numbers;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//          sum+=i ;
//     }
//     cout<<sum;
    
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//        if(i%2!=0){
//         cout<<i<<" "<<endl ;
//          sum+=i;
//          }
//        }
//     cout<<sum<<endl;
    
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the integer number: ";
//     cin>>n;
//     if(n<=1){
//         cout<<"Not a prime number."<<endl;
//     }
//     else if(n==2){
//         cout<<"It's a prime number."<<endl;
//     }
//     else if(n==3){
//         cout<<"It's a prime number."<<endl;
//     }
//     else if (n%2==0){
//         cout<<"It's not a prime number."<<endl;
//     }
//     else{
//         for(int i= 3 ;i<n/2;i++){
//             n%i==0;
//             cout<<"It's a prime number."<<endl;
//             break;
//         }
//     }
//     return 0 ; 
// }

// int main(){
//     int n,f;
//     cout<<"enter the repetation.";
//     cin>>f;
//     for(int i=1;i<=f;i++){
//         cout<<"***********";
//         for(int j=1;j<=n;j++){
//             cout<<"**";
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             cout<<i<<" ";
//             sum+=i;
//         }
//     }
//     cout<<"sum is : "<<sum<<endl;
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int fcat=1;
//     for(int i =n; i<=1;i--){
//         int fact=i*n;
//         cout<<fact;
//         fcat++;
//     }
//     cout<<fcat;
//     return 0;
// }
int main(){
    
}
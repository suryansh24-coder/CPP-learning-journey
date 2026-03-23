#include<iostream>
using namespace std ;

class Player{
    public :
      int score ;
      string name ;
      void showScore(){
        cout << "Player name is : "<< name << endl ;
        cout << "Score : " << score << endl ;
        cout << "------------------------------------" << endl ;
      }
};



int main(){
    Player P1; // first Object 
    Player P2; // Second Object

    cout << "Enter the name of player : " << endl ;
    cin >> P1.name ;
    cout << "Enter the score of player : " << endl ;
    cin >> P1.score ;
    cout << "Enter the name of player : " << endl ;
    cin >> P2.name ;
    cout << "Enter the score of player : " << endl ;
    cin >> P2.score ;

    P1.showScore(); // Message to P1 :
    P2.showScore(); // Message to P2 :
    return 0;
}
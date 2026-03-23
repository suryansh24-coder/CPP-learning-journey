#include<iostream>
#define MAX 100
using namespace std ;

int stack[MAX];
int top = -1 ;

void push(int value){
    if(top == MAX-1){
       cout<<"Stack Overflow ! element can't be pushed." << endl ;
    }
    else{
        top++ ;
        stack[top] = value ;
        cout << value <<" Element is pushed succesfully !" << endl;
    }
}
void pop(int value){
    if(top==-1){
        cout << "Stack is empty ! Element can't be popped."<<endl ;
    }
    else{
        cout <<"Element popped Succesfully !" << stack[top] << endl ;
        top-- ;
    }
}
void display(){
    cout << "The stack after the operations : " << endl ;
    for(int i=0 ;i<=top ; i++){
        cout << stack[i] << " " ; 
    }
}
int main(){
    int value , choose ;
    while(1){
    cout <<"\nEnter 1 for push.\nEnter 2 for pop.\nEnter 3 for display.\nEnter 4 for exit."<<endl ; 
    cout <<"Enter your choice :" << " " ;
    cin >> choose ; 
    if(choose == 1){
        cout << "Enter the value to be pushed :"<< " " ;
        cin >> value ;
        push(value);
    }
    else if(choose == 2){
        pop(value);
    }
    else if(choose == 3){
        display();
    }
    else if(choose == 4){
        break ;
    }
    else{
        cout << "Enter a valid choice !" << endl ;
    }
  }
    return 0;
}
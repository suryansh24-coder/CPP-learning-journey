#include<iostream>
using namespace std ;

class student{
public :
    string name ;
    string rollNo ;
    float Marks ;

    void Getdata(){
        cin.ignore();
        cout << "Enter the Students name : ";
        getline(cin,name);

        cout << "Enter the Student roll no : ";
        getline(cin , rollNo);

        cout << "Enter the CGPA : ";
        cin >> Marks ;
    }

    void display(){
        cout << "----------------------------------\n" ;
        cout << "Student name : "  << name << endl ;
        cout << "Student Roll no : " << rollNo << endl ; 
        cout << "Students CGPA : " << Marks << endl ; 
        cout << "----------------------------------\n" ;
    }
};

int main(){
    int stu ;
    cout << "Enter the number of students : ";
    cin >> stu ;

    student s[stu] ;

    int n ;
    int count = 0;

    while(1){
        cout << "\nEnter 1 for entering the data\n";
        cout << "Enter 2 for displaying data\n";
        cout << "Enter 3 for exiting\n";

        cin >> n ;

        if(n==1){
            if(count < stu){
                s[count].Getdata();
                count++;
            }
            else{
                cout << "Reached the limit !" << endl ;
            }
        }

        else if(n==2){
            for(int i=0 ; i<count ; i++){
                s[i].display();
            }
        }

        else{
            break;
        }
    }

    return 0;
}
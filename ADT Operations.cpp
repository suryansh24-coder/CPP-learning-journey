#include<iostream>
using namespace std ;

class Matrix_Operation{
    private :
       int row1 ,row2 ,col1 , col2 ;
       int matrix1[100][100];   
       int matrix2[100][100]; 
       int Add_Matrix[100][100] ;
       int Multiply_Matrix[100][100] ;
    public :
      void input_data(){
        cout<< "--------------------------------------------- \n "  ;
        cout << "Enter the no. of rows of of matrix 01 :  " ;
        cin >> row1 ;
        cout << "Enter the no. of coloumns of matrix 01 :  " ;
        cin >> col1 ;
        cout << "Enter the no. of rows of of matrix 02 :  " ;
        cin >> row2 ;
        cout << "Enter the no. of coloumns of matrix 02 :  " ;
        cin >> col2 ;
        cout << "---------------------------------------------- \n" ;
    }
     void Entering_Matrix(){
        cout << "Enter the 1st matrix of " << row1 << " x " << col1 << endl ;
        for(int i=0 ; i< row1 ; i++){
            for(int j=0 ; j<col1 ; j++){
                cin >> matrix1[i][j] ;
            }
        }
        cout << "Enter the 2nd matrix of " << row2 << " x " << col2 << endl ;
        for(int i=0 ; i< row2 ; i++){
            for(int j=0 ; j<col2 ; j++){
                cin >> matrix2[i][j] ;
            }
         }
     }   
     void Display_Matrix(){
        cout << "The entered matrix 01 is : " << endl ;
        for(int i=0; i< row1 ;i++){
            for(int j =0 ; j<col1 ;j++){
                cout<< matrix1[i][j] << " " ;
            }
            cout << endl ;
        }
        cout << "The entered matrix 02 is : " << endl ;
        for(int i=0; i< row2 ;i++){
            for(int j =0 ; j<col2 ;j++){
                cout<< matrix2[i][j]  << " ";
            }
            cout << endl ;
         }
       }

      void Matrix_addition(){
        if(col1 == col2 && row1 == row2){
            cout<< "The matrix after addition is : " << endl ;
         for(int i=0 ; i<row1 ; i++){
            for(int j=0  ;j<col1 ; j++){
                Add_Matrix[i][j] = matrix1[i][j] + matrix2[i][j] ;
                cout << Add_Matrix[i][j] << " " ;
            }
            cout << endl ;
          }
        }
        else{
          cout << "The matrix addition is not possible due to the dimensional error ! " << endl ;
        }
      } 

      void Matrix_Multiplication(){
        if(col1 == row2){
          for(int i=0 ; i<row1 ;i++){
            for(int j=0 ; j<col2 ; j++){
                Multiply_Matrix[i][j] = 0 ;
            }
          }
          for(int i=0 ; i<row1 ; i++){
            for(int j=0 ; j<col2 ; j++){
                for(int k=0 ;k<col1 ;k++){
                    Multiply_Matrix[i][j] += matrix1[i][k]*matrix2[k][j] ;
                }
            }
          }

          cout << "The multiplied matrix obtained is : " << endl ;
          for(int i=0 ; i< row1 ;i++){
            for(int j=0 ; j< col2 ;j++){
                cout << Multiply_Matrix[i][j] << " " ;
             }
            cout << endl ;
          }
        }
        else{
            cout << "Sorry , matrix multiplication is not possible ! " << endl ;
        }
      }
};   
int main(){
    int choice ;
    while(true){
    cout << "Enter the Operation want to perform :  " << endl ;
    cout << "01. Enter 1 to enter matrix data\n02. Enter 2 to enter the respective matrices\n03. Enter 3 to display the entered matrix\n04. Enter 4 to do matrix addition\n05. Enter 5 to do matrix multiplication\n06. Enter 6 to Exit the operation\n" ;
    cin >> choice ;
 Matrix_Operation MP ;
 if(choice == 1){
    MP.input_data() ;
 }else if(choice == 2){
     MP.Entering_Matrix() ;
 }else if(choice == 3 ){
    MP.Display_Matrix() ;
 }else if(choice == 4){
     MP.Matrix_addition() ;
 }else if(choice == 5){
     MP.Matrix_Multiplication() ;
 }else if(choice == 6){
    cout << "Exiting the programe !" ;
    break ; 
  }
 }
  return 0 ;
}
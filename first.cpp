#include <iostream>
using namespace std;


void matrixAddition(int a[2][2] , int b[2][2]){

    int rows = 2;
    int columns = 2;
    int result [rows][columns]  = {};

    for(int i = 0;i<rows; i++){
        for(int j = 0 ;j<columns;j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0;i<rows; i++){
        for(int j = 0 ;j<columns;j++){
           cout << result[i][j] << " ";
        }

        cout << endl;
    }




}


void matrixMultiplication(int a[2][2] , int b[2][2]){

    int rows1 = 3;
    int columns1 = 2;
    int rows2 = 2; 
    int columns2 = 2;

    int result [rows1][columns2]  = {};

    for(int i = 0;i<rows1; i++){
        for(int j = 0 ;j<columns2;j++){
            
            int sum = 0 ;

            for(int k =0;k< columns1;k++ ){
                sum += a[i][k] * b[k][j];
            }
            result[i][j]= sum;
            
        }
    }



    for(int i = 0;i<rows1; i++){
        for(int j = 0 ;j<columns2;j++){
           cout << result[i][j] << " ";
        }

        cout << endl;
    }




}

int main(){

    int a[3][2] =  {{1,2},{2,3},{7,8}};
    int b[2][2]  = {{4,5},{3,2}};
    // matrixAddition(a,b);
    matrixMultiplication(a,b);

    return 0;
}
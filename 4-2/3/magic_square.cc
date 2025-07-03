#include <iostream>
using namespace std;

void magicSquare(int** Array, int n) { //takes nxn matrix and fills elements
    //fill the matrix with 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            Array[i][j] = 0; 
        }
    }

    int row = 0; 
    int column = n/2; // 1 is stored in Array[0][n/2]
    //filling the matrix
    for (int num = 1; num <= n*n; ++num) {
        Array[row][column] = num;

        //checking areas
        if (num%n==0) {
            row = row+2;
            column--;
        }

        //if row/column goes out of square
        if ((row-1) < 0) { //row 
            row = n-1;
        }
        else {
            row--;
        }
        if ((column+1) == n) { //column 
            column = 0;
        }
        else {
            column++;
        }
    }
}

int main(int argc, char *argv[]) { //prints magic square
    int N = atoi(argv[1]);
    
    if (N%2 == 0 || N < 3) { 
        exit(1);
    }
    else { //main code
        int** Array = new int*[N];

        for (int i = 0; i < N; i++) {
            Array[i] = new int[N]; //int array[N][N]
        }
        magicSquare(Array, N);
        
        //printing
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << Array[i][j] << " "; 
            }
            cout << endl;
        }

        for (int i = 0; i < N; i++) {
            delete[] Array[i];
        }
        delete[] Array;

    }

}





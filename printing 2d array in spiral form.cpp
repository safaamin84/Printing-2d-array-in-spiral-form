#include <iostream>
using namespace std;

void spiralPrint(int no_rows, int no_columns, int a[4][4]){
    int i, start_row=0, start_column=0;

    while(start_row < no_rows && start_column < no_columns){
        
        // print right
        for(i = start_column; i < no_columns; i++){
            cout << a[start_row][i] << " ";
        }
        start_row++;
        
        // print down
        for(i = start_row; i < no_rows; i++){
            cout << a[i][no_columns-1] << " ";
        }
        no_columns--;
        
        //print left
        if(start_row < no_rows){
            for(i = no_columns-1; i>=start_column; i--){
                cout << a[no_rows-1][i] << " ";
            }
            no_rows--;
        }
        
        //print up
        if(start_column < no_columns){
            for(i = no_rows-1; i >= start_row; i--){
                cout << a[i][start_column] << " ";
            }
            start_column++;
        }
    }
}

int main() {
    int a[4][4] = { { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 },
                    { 13, 14, 15, 16 } };
  
    // Function Call
    spiralPrint(4, 4, a);
    return 0;
}
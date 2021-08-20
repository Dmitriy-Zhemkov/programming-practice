#include <iostream>
#include <vector>

using namespace std;

class matrix
{
private:
    vector<vector<double>> data;
    int row;
    int column;
public:
 matrix() : row(0), column(0) {};
 matrix(int row_, int column_) : row(row_), column(column_) {
     data.resize(row, vector<double>(column));
     for(int i=0; i<row; i++) {
         for(int j=0; j<column; j++) {
            data[i][j]=i+j;
        }
     }
 };
 void print() {
     for(int i=0; i<row; i++) {
         for(int j=0; j<column; j++) {
            cout<<data[i][j] <<" ";
        }
        cout<<endl;
     }
 }
};

int main() {
    matrix A;
    //A.print();
    matrix B(4,4);
    B.print();
}
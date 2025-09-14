#include <iostream>
#include <vector>

// This class is the storage of compressed sparse matrix
class MatrixStorage {
private:
    // The below created vectors store only non zero values.
    std::vector<int> rowIndex;      // Here are non zero elements in row position
    std::vector<int> columnIndex;   
    std::vector<int> nonZeroValues; 
    int numRows, numCols;           

public:
    // This constructor is created to control the size of matrix
    MatrixStorage(int rows, int cols) : numRows(rows), numCols(cols) {}

    // This function converts only non zero elements into sparse representation.
    void insertValue(int r, int c, int val) {
        if (val != 0) { 
            rowIndex.push_back(r);
            columnIndex.push_back(c);
            nonZeroValues.push_back(val);
        }
    }

    // This Function is created to print the converted sparse representation
    void printSparse() {
        std::cout << "Row\t";
        for (int i : rowIndex) std::cout << i << " ";
        std::cout << "\nColumn\t";
        for (int j : columnIndex) std::cout << j << " ";
        std::cout << "\nValue\t";
        for (int v : nonZeroValues) std::cout << v << " ";
        std::cout << std::endl;
    }
};

int main() {
    // Defined a 4x5 matrix with as many as zeros in it
    int matrix[4][5] = {
        {0, 1, 3, 0, 0},
        {0, 0, 6, 8, 0},
        {0, 0, 0, 0, 0},
        {0, 3, 9, 0, 0}
    };

    // This object is created for class matrixstorage for 4x5 matrix
    MatrixStorage storage(4, 5);

    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] != 0) {
                storage.insertValue(i, j, matrix[i][j]);
            }
        }
    }

    // Here we are Printing the original matrix representation
    std::cout << "Original Matrix Representation:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Here we are Printing the representation of converted sparse matrix
    std::cout << "\nRepresentation of Sparse Matrix:\n";
    storage.printSparse();

    return 0;
}

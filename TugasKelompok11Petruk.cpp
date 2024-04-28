#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool searchHorizontal(vector<string>& matrix, string word) {
    for (int i = 0; i < matrix.size(); ++i) {
        if (matrix[i].find(word) != string::npos) {
            return true;
        }
    }
    return false;
}


bool searchVertical(vector<string>& matrix, string word) {
    int row = matrix.size();
    int col = matrix[0].size();

    for (int j = 0; j < col; ++j) {
        string column;
        for (int i = 0; i < row; ++i) {
            column += matrix[i][j];
        }
        if (column.find(word) != string::npos) {
            return true;
        }
    }
    return false;
}


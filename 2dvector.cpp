#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<vector<int>> matrix {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    cout << matrix[0][0] << endl;
    cout << matrix[0][1] << endl;
    cout << matrix[0][2] << endl;
    cout << matrix[0][3] << endl;
    cout << matrix[0][4] << endl;
    cout << matrix[1].at(0) << endl;
    cout << matrix[1].at(1) << endl;
    cout << matrix[1].at(2) << endl;
    cout << matrix[1].at(3) << endl;
    cout << matrix[1].at(4) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a[3][3], b[3][3], result[3][3];
    cout << "Matrix A:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    cout << "Matrix B:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
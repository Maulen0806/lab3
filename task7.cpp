#include <iostream>
using namespace std;

int main(){
    int a[3][3], b[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        b[0][i] = a[i][0];
    }
    for(int i = 0; i < 3; i++){
        b[1][i] = a[i][1];
    }
    for(int i = 0; i < 3; i++){
        b[2][i] = a[i][2];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
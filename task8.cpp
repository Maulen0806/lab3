#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    int maxsum = 0;
    int row = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for(int i = 0; i < 4; i++){
        int rowsum = 0;
        for(int j = 0; j < 4; j++){
            rowsum += a[i][j];
        }
        if(rowsum > maxsum){
            maxsum = rowsum;
            row = i + 1;
        }
    }
    cout << "Row " << row << " has the maximum sum: " << maxsum;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    bool found = false;
    for(int i = 0; i < n; i++){
        if(num == arr[i]){
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Not found" << endl;
    }
    return 0;
}
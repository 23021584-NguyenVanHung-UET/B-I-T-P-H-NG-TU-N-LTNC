#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
int a[n][n];
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        int m = (i + j+1)%n;
        if(m == 0){
            a[i][j] = n;
        }
        else{
            a[i][j] = m;
        }
    }
}
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
}
}

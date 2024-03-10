#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int i = 0; i< n;i++){
    int j = i+1;
    int t = j;
    while(j < n){
        cout << " ";
        j++;
    }
    for(int j = 0;j < 2*t-1; j++){
        cout << "*";
    }
    while(t < n){
        cout << " ";
        t++;
    }
    cout << endl;
}
}

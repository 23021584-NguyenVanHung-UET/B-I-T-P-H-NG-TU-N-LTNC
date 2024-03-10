#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int j = n;
int t = n;
for(int i = 0; i< n;i++){
    while(j > 0 && j < n){
        cout << " ";
        j++;
    }
    for(int j = 0;j < 2*t-1; j++){
        cout << "*";
    }
    cout << endl;
    t--;
    j = n-i-1;
}
}

#include<iostream>
using namespace std;
int main(){
int m;
cin >> m;
int n = m+1;
for(int i = 0; i < n; i++){
    int j = i;
    while(j > 0 && j < n){
        cout << " ";
        j--;
    }
    int k = n - i;
    while(k < n && k > 0) {
        cout << "*" ;
        k--;
    }
    cout << endl;
}

}

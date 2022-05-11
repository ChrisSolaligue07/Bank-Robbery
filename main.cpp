// Bank Robbery
// https://codeforces.com/problemset/problem/794/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void print(vector<int> &vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main(){
    int O = 0, G1 = 0, G2 = 0, B = 0;
    cin >> O;
    cin >> G1;
    cin >> G2;
    cin >> B;
    int tam = B;
    for(int i = 0; i < tam; i++){
        int tmp = 0;
        cin >> tmp;
        if(tmp <= G1 || tmp >= G2) {
            B--;
        }
    }
    cout << B << endl;
}
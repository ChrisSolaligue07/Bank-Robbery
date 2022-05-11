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
    int O, G1, G2, B;
    cin >> O;
    cin >> G1;
    cin >> G2;
    cin >> B;

    vector<int> pos(B);
    for(int i = 0; i < pos.size(); i++){
        int tmp;
        cin >> tmp;
        pos[i] = tmp;
    }
    for(int i = 0; i < pos.size(); i++){
        if(pos[i] <= G1 || pos[i] >= G2){
            B--;
            // cout << pos[i] << endl;
        }
    }
    cout << B << endl;
    // print(pos);
}
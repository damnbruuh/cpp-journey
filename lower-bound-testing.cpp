#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool compsortf(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}

bool complowf(const vector<int>& a, int val) {
    return a[0] < val;
}

int main() {
    vector<vector<int>> vec = {{0, 6, 9}, {2, 3, 5}, {1, 4, 8}, {6, 8, 3}, {4, 2 ,1}, {9, 9, 9}};
    sort(vec.begin(), vec.end(), compsortf);

    for(int i = 0; i < vec.size(); i++) {

        for(int k = 0; k < vec[0].size(); k++) {
            cout << vec[i][k] << " ";
        }
    cout << "" << endl;
    }

    vector<vector<int>>::iterator it = lower_bound(vec.begin(), vec.end(), 9, complowf);
    cout << "iterator:" << endl;
    cout << it - vec.begin() << endl;
    return 0;
}
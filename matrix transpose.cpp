#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> A;
    int val,n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            cin >> val;
            temp.push_back(val);
        }
        A.push_back(temp);
        temp.clear();
    }
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) 
            cout << A[j][i] << " "; 
        cout << endl; 
    }

    return 0;
}

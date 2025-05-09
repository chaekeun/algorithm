#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int L, R;
    int ans;
    string line;
    vector<int> cntArr(n, 0);
    
    cin >> n >> m;
    
    for (int i=0; i<n; i++){
        int cnt = 0; 
        int temp;
        for (int j=0; j<m; j++){
            cin >> temp;
            // 아 꼭 다 저장할 필요가 없이 그 행에 몇명이 있는지만 알면 되는거였겠구나
            if (temp == 1) cnt++;
        }
        cntArr[i] = cnt;
    }

    for (int i=0; i<2; i++){
        cin >> L >> R;
        for (int j=L-1; j<=R-1; j++){
            if (cntArr[j] > 0){
                cntArr[j]--;
            }
        }
    }

    for (int i=0; i<n; i++){
        ans += cntArr[i];
    }
    cout << ans;
    return 0;
}
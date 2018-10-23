#include <bits/stdc++.h>
using namespace std;
/* pattern <===================.========================.================
 1 1 1 1 1 
1 0 1 0 1 0 
1 1 0 1 0 1 
1 0 1 0 1 0 
1 1 0 1 0 1 
1 0 1 0 1 0
*/
//////recursive solution...............
string strn;
string strm;
bool fun(int i, int j, bool type) {
    if(i == 1 && j == 1) {
        if(strn[0] == '0' || strm[0] == '0') {
            return type;
        }
        else {
            return !type;
        }
    }
    if(i == 1) {
        if(strm[j - 1] == '0') {
            return type;
        }
        else {
            return fun(i, j - 1, !type);
        }
    }
    else if(j == 1) {
        if(strn[i - 1] == '0') {
            return type;
        }
        else {
            return fun(i - 1, j, !type);
        }
        
    }
    if(type) {
        bool ans1 = fun(i - 1, j, 0);
        if(type == ans1)
            return type;
        else
            return fun(i, j - 1, 0);
    }
    else {
        bool ans1 = fun(i - 1, j, 1);
        if(type == ans1)
            return type;
        else
            return fun(i, j - 1, 1);
    }
    
}
int ans[1000][1000];
int main() {
    int t;
    cin >> t;
  // cout << fun(2, 3, 1);
    while(t--) {
        cin >> strm;
        cin >> strn;
        for(int i = 1; i < 10; i++) {
            for(int j = 1; j < 10; j++) {
                ans[i][j] = fun(i, j, 1);
            }
        }
        bool type = true;
        int q;
        cin >> q;
        while(q--) {
            int x, y;
            cin >> x >> y;
           // cout << fun(x, y, 1);
            if(x == 2 && y == 1)
                cout << fun(2, 1, 1);
        }
        for(int i = 0; i <= strn.size(); i++) {
            for(int j = 0; j <= strm.size(); j++){
                if(i == 0 && j == 0){
                    cout << " ";
                }
                else {
                    if(i == 0) {
                        cout << strm[j - 1] << " ";
                    }
                    else if(j == 0)
                            cout << strn[i - 1] << " ";
                    else {
                        cout << ans[i][j] << " ";
                    }
                }
                /*if(i == 0 && j != 0){
                    cout << strm[j - 1] << " ";
                }
                else if(i != 0 && j != 0)
                  cout << ans[i][j] << " ";
                else if(j == 0)
                    cout << strn[i - 1] << " ";*/
            }
            cout << endl;
        }
        cout << "\n";
    }
	return 0;
}
///end.................
/*int main(){
    int t;
    cin >> t;
    string h;
    string v;
    cin >> h;
    cin >> v;
    vector<vector<int, int>> ans;
    for(int i = h.size(); i <= h.size(); i++) {
        ans[1][i]
    }
    for(int j = 0; j <= v.size(); j++) {
        
    }
}*/
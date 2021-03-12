#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int n,m,x,y;
int cnt=0;
int been[100005]={0};
vector<vector<int>>edges;
void dfs(int v) {
    if (been[v] > 1)
        return;
    been[v] = cnt;
    for(int i=0;i<edges[v].size();i++){
        if(been[edges[v][i]]==0){
            dfs(edges[v][i]);
        }
    }
}
int main() {
    freopen(input.txt, r, stdin);
    freopen(output.txt, w, stdout);
    cin >> n >> m;
    edges.resize(n + 1);
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (been[i] == 0) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++) {
        cout << been[i] << ' ';
    }
    cout << endl;
}

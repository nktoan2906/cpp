#include<bits/stdc++.h>
using namespace std;
char x[105];
int  a[105];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)  {
        cin >> x[i]; 
        a[x[i]]++;
    } 
    int max = 0;
    for(int i=1;i<=n;i++) {
        if(max < a[x[i]]) max = a[x[i]];
    }
    priority_queue<char, vector<char>, greater<char>> priorityquere;
    for(int i=1;i<=n;i++) {
        if(a[x[i]] == max) priorityquere.push(x[i]);
    }
    char u;
    while(!priorityquere.empty()) {
        u = priorityquere.top();
        break;
    }
    cout << u;
    return 0;
}
#include<iostream>
#include <queue>
#define FOR(i,n) for(int i=1;i<=n;i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    char x[n];
    FOR(i,n)  {
        cin >> x[i]; 
        a[x[i]]++;
    } 
    int max = 0;
    FOR(i,n) {
        if(max < a[x[i]]) max = a[x[i]];
    }
    priority_queue<char, vector<char>, greater<char>> priorityquere;
    FOR(i,n) {
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
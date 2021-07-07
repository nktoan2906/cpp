#pragma GCC optimize(2) /* code chạy nhan hơn*/ 
#pragma GCC optimize(3) /* code chạy nhan hơn*/ 
#include<iostream>
#include <vector>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0)  /* code chạy nhan hơn*/ 
#define ll long long
#define l(x) (ll)x.size()
typedef vector<ll> vll;
bool check(ll n) {
    vll a;
    ll i = 2;
    while(i <= n / i) { // dùng while() để ... 
        if(n % i == 0) {  // ... tìm SNT chia hết cho i 
            a.push_back(i); // đếm xem có bao nhiêu SNT nhân với nhau
            n /= i;
            if(l(a) > 2) return false; // nếu trên 2 -> F 
        }
        else i++;
    }
    a.push_back(n);
    if(l(a) == 2){
	    return true; //  hết vòng while mà chỉ có 2 số là ai * aj = n -> T
	}
    return false;
}
signed main() {
    FASTER;
    ll q; cin >> q;
    while(q--){ // while(q--) giống while(q > 0) nhưng mà q-- tốt hơn 
        ll x; 
		cin >> x;
        if(check(x)) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}
#include<iostream>
#define FOR(i,n) for (int i = 1; i <= n; i++)
#define max 20
using namespace std;
int n,check[max] = { 0 };//Đánh dấu chưa có phần tử nào sử dụng hết
int a[max];//Lưu hoán vị vào mảng a
void COUT() {
    FOR(i,n) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void ListHoanVi(int k) {
    FOR(i,n) {
        if (!check[i]) { //Kiểm tra nếu phần tử chưa được chọn thì sẽ đánh dấu
            a[k] = i; // Lưu một phần tử vào hoán vị
            check[i] = 1;//Đánh dấu đã dùng
            if (k == n) COUT(); //Kiểm tra nếu đã chứa một hoán vị thì xuất
            else {
                ListHoanVi(k + 1);
            }
            check[i] = 0;
        }
    }
}
int main() {
    cin >> n;
    ListHoanVi(1);
}
    

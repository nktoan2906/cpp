#include<iostream>
#define RUN for (int i = 0; i < n; ++i)
using namespace std;
int n,check[20] = { 0 }; //Đánh dấu chưa có phần tử nào sử dụng hết
int a[20]; //Lưu hoán vị vào mảng a
void COUT() {
    RUN {
        cout << a[i] << " ";
    }
    cout << endl;
}
void ListHoanVi(int k) {
    RUN {
        if (!check[i]) {  //Kiểm tra nếu phần tử chưa được chọn thì sẽ đánh dấu
            a[k] = i;  // Lưu một phần tử vào hoán vị
            check[i] = 1; //Đánh dấu đã dùng
            if (k == n) COUT();  //Kiểm tra nếu đã chứa một hoán vị thì xuất
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
    

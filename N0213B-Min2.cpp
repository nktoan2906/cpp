#include <iostream>
#define sui short unsigned int
#define RUNO3 for (sui i = 0; i < 3; i++)
#define AFROM(min, min2) a > min && a < min2
#define SWAP(min2, a) min2 = min; min = a;
using namespace std;
int main() {
	int max, min, min2, a;
	cin >> max >> min;
	if (max < min) {					 //- Nếu số nhập vào này lớn hơn max thì số này là max còn giá trị cần tìm lớn nhì sẽ là max hiện tại
		max += min;		 //- Nếu số nhập vào này nhỏ hơn min thì số này là min còn giá trị còn tìm nhỏ nhì sẽ là min hiện tại
		min = max - min; //- Nếu số nhập vào này nhỏ hơn max và lớn hơn giá trị lớn nhì hiện lại (ở lần đầu thì giá trị lớn nhì là min) thì nó sẽ là giá trị lớn nhì --> gán lớn nhì là giá trị nhập vào
		max -= min;		 //- Tương tự với nhỏ nhì
	}
	min2 = max;
	RUNO3 {
		cin >> a;
		if (a < min) SWAP(min2, a);
		if (AFROM(min, min2)) min2 = a;
	}
	cout << min2;
	return 0;
}

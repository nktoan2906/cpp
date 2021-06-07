#include <iostream>
#define sui short unsigned int
#define RUNO3() for (sui i = 0; i < 3; i++) 
#define min_nho_cde_nho_min2 cde > min && cde < min2
#define SWAP(min2,cde) min2 = min; min = cde;
using namespace std;
int main() {
	int max, min, min2, cde;
    cin>>max>>min;
	if (max < min) {                 //- Nếu số nhập vào này lớn hơn max thì số này là max còn giá trị cần tìm lớn nhì sẽ là max hiện tại
		max += min;                 //- Nếu số nhập vào này nhỏ hơn min thì số này là min còn giá trị còn tìm nhỏ nhì sẽ là min hiện tại
		min = max - min;           //- Nếu số nhập vào này nhỏ hơn max và lớn hơn giá trị lớn nhì hiện lại (ở lần đầu thì giá trị lớn nhì là min) thì nó sẽ là giá trị lớn nhì --> gán lớn nhì là giá trị nhập vào
		max -= min;               //- Tương tự với nhỏ nhì
	}
	min2 = max;
	RUNO3(){
		cin>>cde;
		if (cde < min) SWAP(min2,cde);
		if (min_nho_cde_nho_min2) min2 = cde;
	}
	cout<<min2;
	return 0;                                                                     
}

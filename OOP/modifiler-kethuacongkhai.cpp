#include <iostream>
using namespace std;
// kế thừa công khai làm cho public các members của lớp cs public trong lớp dẫn 
// xuất & các protected members của lớp cs vẫn protected ở trong lớp dẫn xuất.
class Base {
    private: int riengtu = 1;
    protected: int dcbaove = 2;
    public: int congkhai = 3;
    int getPVT() {
        return riengtu;
    }
};
class PublicDerived : public Base {
    public:
    int getProt() {
        return dcbaove;
    }
};
int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.congkhai << endl;
    return 0;
}
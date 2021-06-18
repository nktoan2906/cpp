#include <iostream>
using namespace std;
// kế thừa công khai làm cho public các members của lớp cơ sở public trong lớp dẫn 
// xuất và các protected members của lớp cơ sở vẫn protected ở trong lớp dẫn xuất.
class Base {
    private: int pvt = 1;
    protected: int prot = 2;
    public: int pub = 3;
    int getPVT() {
        return pvt;
    }
};
class PublicDerived : public Base {
    public:
    int getProt() {
        return prot;
    }
};
int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}
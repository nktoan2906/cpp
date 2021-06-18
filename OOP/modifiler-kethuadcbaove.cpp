#include <iostream>
using namespace std;
// kế thừa được bảo vệ làm cho public & protected các member của lớp cơ sở 
// protected trong lớp dẫn xuất.
class Base {
    private: int pvt = 1;
    protected: int prot = 2;
    public: int pub = 3;
    int GetPrivate() {
        return pvt;
    }
};
class ProtectedDerived : protected Base {
    public:
    int GetProtected() {
        return prot;
    }
    int GetPublic() {
        return pub;
    }
};
int main() {
    ProtectedDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.GetProtected() << endl;
    cout << "Public = " << object1.GetPublic() << endl;
    return 0;
}
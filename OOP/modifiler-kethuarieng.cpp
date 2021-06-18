#include <iostream>
using namespace std;
class Base {
    private: int riengtu = 1;
    protected: int dcbaove = 2;
    public: int congkhai = 3;
    int getPVT() {
        return riengtu;
    }
};
class PrivateDerived : private Base {
    public:
    int GetProtected() {
        return dcbaove;
    }
    int GetPublic() {
        return congkhai;
    }
};
int main() {
    PrivateDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.GetProtected() << endl;
    cout << "Public = " << object1.GetPublic() << endl;
    return 0;
}
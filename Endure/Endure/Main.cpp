#include <iostream>
using namespace std;

class MyClass {
public:
    int count = 0;
    // ����Ʈ ������
    MyClass() {
        cout << "Default constructor called" << endl;
    }
};

int main() {
    //MyClass obj = 10;  // �Ͻ��� ��ȯ: int -> MyClass
    return 0;
}

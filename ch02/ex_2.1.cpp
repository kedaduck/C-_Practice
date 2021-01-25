#include <iostream>

using namespace std;

//引用

int main()
{
    int i1 = 1024, i2 = 2048;
    int &r1 = i1, &r2 = i2;
    cout<< "i1 = " << i1 << ", i2 = " << i2 << endl;
    cout<< "r1 = " << r1 << ", r2 = " << r2 << endl;

    cout<< "======================================"<<endl;

    i1 = 4096;
    i2 = 8192;
    cout<< "i1 = " << i1 << ", i2 = " << i2 << endl;
    cout<< "r1 = " << r1 << ", r2 = " << r2 << endl;

    cout<< "======================================"<<endl;

    r1 = 32;
    r2 = 64;
    cout<< "i1 = " << i1 << ", i2 = " << i2 << endl;
    cout<< "r1 = " << r1 << ", r2 = " << r2 << endl;
    
    cout<<"----------------------------------------"<<endl;

    int n1 = 32, n2 = 64;

    int *p1 = &n1, *p2 = &n2;
    cout << "p1 = " << p1 << ", p2 = " << p2 << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    return 0;
}

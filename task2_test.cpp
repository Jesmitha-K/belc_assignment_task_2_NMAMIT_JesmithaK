#include <iostream>
using namespace std;

string get_crease(int n, int x);

int main() {
    cout<<"n=1,x=1\n"<<get_crease(1,1)<<endl;
    cout<<"n=2,x=3\n"<<get_crease(2,3)<<endl;
    cout<<"n=3,x=6\n"<<get_crease(3,6)<<endl;
    cout<<"n=4,x=11\n"<<get_crease(4,11)<<endl;
    cout<<"n=5,x=16\n"<<get_crease(5,16)<<endl;
    cout<<"n=8,x=255\n"<<get_crease(8,255)<<endl;
}
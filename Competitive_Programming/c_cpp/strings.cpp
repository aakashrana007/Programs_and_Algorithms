#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c;
    cin>>a;
    cin>>b;
    int alen = a.length();
    int blen = b.length();
    cout<<alen<<" "<<blen<<endl;
    c = a + b;
    cout<<c<<endl;
    char a0 = a[0];
    char b0 = b[0];
    
    a.erase(0,1); //removes 1 character starting from index 0
    b.erase(0,1);
    
    string new_a = b0 + a;
    string new_b = a0 + b;
    cout<<new_a<<" "<<new_b;
    
    return 0;
}

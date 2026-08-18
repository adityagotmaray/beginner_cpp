#include <iostream>
using namespace std;
class item{
    static int count;
    // int number;
    public:
        void getdata(int a)
        {
            
            count++;
        }
        void getcount(void){
            cout << "count: ";
            cout << count <<"\n";
        }
};
int item ::count;
int main() {
    item a,b,c,d;
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    d.getdata(0);
    cout << "after reading data";
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    return 0;
}
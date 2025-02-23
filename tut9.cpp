#include <iostream>
useing namespace std;

class Employe{
    private{
        int a,b,c,d;
    }
    public{
        int e,f;
        void show(int a1, int b2, int c3, int d4);
        void get(){
            cout<<This is a: <<a<<endl;
            cout<<This is b: <<b<<endl;
            cout<<This is c: <<c<<endl;
            cout<<This is d: <<d<<endl;
            cout<<This is e: <<e<<endl;
            cout<<This is f: <<f<<endl;f
            };
    }

    void Employe :: show(int a1, int b2, int c3, int d4){
        a1=a;
        b1=b;
        c1=c;
        d1=d;
    }
}
int main() {
    
    
    return 0;
}
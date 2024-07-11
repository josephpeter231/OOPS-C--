#include <bits/stdc++.h>
using namespace std;
class Base{
    private:
        int number;
        string name;
    public:
        Base(int num,string nam){
            number = num;
            name = nam;
        }
        void print(){
            cout<<number<<" "<<name<<endl;
        }
        void setNumber(int n){
            number= n;
        }
        void check(){
            if(number>5) cout<<name<<" "<<"Your score is awesome";
            else cout<<name<<" "<<"need to work on your score";
        }

};

class Inherit:public Base{
    public:
    Inherit(int num,string nam):Base(num, nam){
    }
};

class Inherit2:public Base{
    public:
    Inherit2(int num,string nam):Base(num, nam){
    }
};
int main() {
    Inherit I1(10,"Joseph");
    I1.print();
    Inherit2 I2(4,"stanley");
    I2.print();

    Base* b1 = &I1;
    Base* b2 = &I2;
    b1->check();
    b2->check();

    return 0;       
}
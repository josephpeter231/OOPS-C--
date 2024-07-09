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
            cout<<number<<" "<<name;
        }
        void Number(int n){
            number= n;
        }

};

class Inherit:public Base{
    public:
    Inherit(int num,string nam):Base(num, nam){


    }



};
int main() {
    // Base bs(38,"Joseph");
    // bs.Number(5);
    // bs.print();
    Inherit In(5,"Hii");
    In.Number(6);
    

    
    return 0;
}
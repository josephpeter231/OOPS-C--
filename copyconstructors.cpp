#include <bits/stdc++.h>
using namespace std;

class Books{
    private:
    int booknumber;
    public:
   
    int serial;
    Books(int booknumber,int serial){
        this->booknumber = booknumber;
        this->serial = serial;
    }
    void display(){
        cout<<booknumber<<endl;
    }
    //Implementation of copy constructors
    Books(Books& book){
        booknumber = book.booknumber;
        serial = book.serial;
    }

};
int main() {
    Books b(1,2);
    Books b1(345678901,3);
    Books b3(b1);
    b3.display();
    
    return 0;
}
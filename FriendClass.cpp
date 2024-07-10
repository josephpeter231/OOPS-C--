#include <bits/stdc++.h>
using namespace std;

class Details{
    private:
    int no;
    string name;
    public:
    Details(int no,string name){
        this->name = name;
        this->no = no;
    }
    // friend void checkfriend(Details);
    friend class checkfriend;

};

// void checkfriend(Details det){
//     cout<<det.name<<endl;
//     cout<<det.no;
// }

class checkfriend{
    public:
    void checkfrdDetails (Details det){
        cout<<det.name<<endl;
        cout<<det.no;
    }

};
int main() {
    Details det(5,"Joseph");
    checkfriend chk;
    chk.checkfrdDetails(det);


    
    return 0;
}
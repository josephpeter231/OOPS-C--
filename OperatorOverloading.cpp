#include <bits/stdc++.h>
using namespace std;

struct yt {
    string name;
    int no;

    yt(string n, int number) {
        name = n;
        no = number;
    }
};

// Overload the << operator for the yt struct
// ostream& operator<<(ostream& os, const yt& obj) {
//     os << "Name: " << obj.name << ", Number: " << obj.no;
//     return os;
// }

ostream& operator<<(ostream& COUT,yt& yt1){
    COUT<<"Name"<<yt1.name;
    return COUT;
    
}

int main() {
    yt yt1("Joseph", 5);
    cout << yt1 << endl;  // Compiler doesnt know how the Insertion operator should perform
                          //So we need to overload to print it out.
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct yt {
    string name;
    int no;

    yt(string n, int number) {
        name = n;
        no = number;
    }

    // Overloading equality operator for std::list::remove to work correctly
    bool operator==(const yt& other) const {
        return name == other.name && no == other.no;
    }
};

struct channels {
    list<yt> lst;

    void operator+=(const yt& name) {  // +=
        this->lst.push_back(name);
    }

    void display() const {
        for (const auto& it : lst) {
            cout << it.name << endl;
        }
    }

    void operator-=(const yt& name) {  // -=
        this->lst.remove(name);
    }
};

// Overloading the << operator for yt struct
ostream& operator<<(ostream& COUT, const yt& yt1) {
    COUT << "Name: " << yt1.name;
    return COUT;
}

// Overloading the << operator for channels struct
ostream& operator<<(ostream& COUT, const channels& stp) {
    for (const yt& it : stp.lst) {
        COUT << it << endl;  // Using the overloaded << operator for yt
    }
    return COUT;
}

int main() {
    yt yt1("Joseph", 5);
    yt yt2("Peter", 5);

    channels ch;
    ch += yt1;
    ch += yt2;
    ch -= yt1;

    cout << ch;

    return 0;
}

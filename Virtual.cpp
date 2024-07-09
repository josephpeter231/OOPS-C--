#include <bits/stdc++.h>
using namespace std;
class Instrument{
    public:
    virtual void play(){ //virtual key word is used for run time polymorphism to regulate it
        cout<<"Instrument is Playing";  //So the most function name(same method) present in the derived class is executed.
    }
};

class flute:public Instrument{
    public:
    void play(){
        cout<<"Flute is Playing";
    }
};
int main() {
    Instrument* Inst = new flute();
    Inst->play();
    
    return 0;
}
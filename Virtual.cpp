#include <bits/stdc++.h>
using namespace std;
// class Instrument{
//     public:
//     virtual void play(){ //virtual key word is used for run time polymorphism to regulate it
//         cout<<"Instrument is Playing";  //So the most function name(same method) present in the derived class is executed.
//     }
// };

class Instrument{
    public:
    virtual void play()=0; //pure virtual function so that the right method is invoked and executed.
        
};

class flute:public Instrument{
    public:
    void play(){
        cout<<"Flute is Playing";
    }
};

class Piano:public Instrument{
    public:
    void play(){
        cout<<"Piano is Playing";
    }
};

class NormalPiano:public Piano{
    public:
    void play(){
        cout<<"NormalPiano is Playing";
    }
};
int main() {
    Instrument* Inst = new NormalPiano();
    Inst->play();
    Instrument* Inst2 = new Piano();
    Inst2->play();

    //U can use array to play the Instruments like concert using array storing it in array and iterating.
    //Instrument* arr[2]={Inst,Inst2};
    //Perform for loop and call the function
    //instruments[i]->play();
    
    return 0;
}
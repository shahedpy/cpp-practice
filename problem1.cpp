#include <iostream>

using namespace std;


class Mammal {
    public:
        void mPrint(){
            cout << "I am mammal" << endl;
        }
};

class MarineAnimals {
    public:
        void maPrint(){
            cout << "I am a marine animal" << endl;
        }
};

class BlueWhale:public Mammal, public MarineAnimals{
    public:
        void bwPrint(){
            cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
        }
};

int main() {
    Mammal m;
    MarineAnimals ma;
    BlueWhale bw;

    m.mPrint();
    ma.maPrint();
    bw.bwPrint();

    return 0;
}

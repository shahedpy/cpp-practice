#include <iostream>

using namespace std;

class Apples {
    public:
        int apple_in_basket;

        Apples(int apples) {
            apple_in_basket = apples;
        }
};

class Mangoes {
    public:
        int mango_in_basket;
        
        Mangoes(int mangoes) {
            mango_in_basket = mangoes;
        }
};

class Fruit : public Apples, public Mangoes {
    public:
        Fruit(int apples, int mangoes) : Apples(apples), Mangoes(mangoes) {}

        int total_fruit_in_basket() {
            return apple_in_basket + mango_in_basket;
        }

        void display() {
            cout << "Number of apples in the basket: " << apple_in_basket << endl;
            cout << "Number of mangoes in the basket: " << mango_in_basket << endl;
            cout << "Total number of fruits in the basket: " << total_fruit_in_basket() << endl;
        }
};

int main() {
    int apples, mangoes;
    cout << "Enter the number of apples in the basket: ";
    cin >> apples;
    cout << "Enter the number of mangoes in the basket: ";
    cin >> mangoes;

    Fruit basket(apples, mangoes);
    basket.display();

    return 0;
}

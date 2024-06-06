#include <iostream>

using namespace std;

class Vehicle {
    public:
        int milage;
        int price;
};

class Car : public Vehicle {
    public:
        int ownership_cost;
        int warranty;
        int seating_capacity;
        string fuel_type;
};

class Bike : public Vehicle {
    public:
        int number_of_cylinders;
        int number_of_gears;
        string cooling_type;
        string wheel_type;
        int fuel_tank_size;
};

class Audi:public Car {
    public:
        string model_type;
}

class Ford:public Car {
    public:
        string model_type;
}

class Bajaj:public Bike {
    public:
        string make_type;
}

class TVS:public Bike {
    public:
        string make_type;
}
int main() {
    Audi a;
    a.milage = 20;
    a.price = 5000000;
    a.ownership_cost = 100000;
    a.warranty = 2;
    a.seating_capacity = 5;
    a.fuel_type = "Petrol";
    a.model_type = "Sedan";

    Ford f;
    f.milage = 15;
    f.price = 4000000;
    f.ownership_cost = 90000;
    f.warranty = 2;
    f.seating_capacity = 5;
    f.fuel_type = "Petrol";
    f.model_type = "SUV";
    
    Bajaj b;
    b.milage = 50;
    b.price = 100000;
    b.number_of_cylinders = 1;
    b.number_of_gears = 4;
    b.cooling_type = "Air";
    b.wheel_type = "Alloy";
    b.fuel_tank_size = 10;
    b.make_type = "Commuter";

    TVS t;
    t.milage = 45;
    t.price = 80000;
    t.number_of_cylinders = 1;
    t.number_of_gears = 5;
    t.cooling_type = "Air";
    t.wheel_type = "Alloy";
    t.fuel_tank_size = 12;
    t.make_type = "Sports";

    // Displaying the details of the vehicles
    cout << "Audi Details: " << endl;
    cout << "Milage: " << a.milage << endl;
    cout << "Price: " << a.price << endl;
    cout << "Ownership Cost: " << a.ownership_cost << endl;
    cout << "Warranty: " << a.warranty << endl;
    cout << "Seating Capacity: " << a.seating_capacity << endl;
    cout << "Fuel Type: " << a.fuel_type << endl;
    cout << "Model Type: " << a.model_type << endl;

    cout << "Ford Details: " << endl;
    cout << "Milage: " << f.milage << endl;
    cout << "Price: " << f.price << endl;
    cout << "Ownership Cost: " << f.ownership_cost << endl;
    cout << "Warranty: " << f.warranty << endl;
    cout << "Seating Capacity: " << f.seating_capacity << endl;
    cout << "Fuel Type: " << f.fuel_type << endl;
    cout << "Model Type: " << f.model_type << endl;

    cout << "Bajaj Details: " << endl;
    cout << "Milage: " << b.milage << endl;
    cout << "Price: " << b.price << endl;
    cout << "Number of Cylinders: " << b.number_of_cylinders << endl;
    cout << "Number of Gears: " << b.number_of_gears << endl;
    cout << "Cooling Type: " << b.cooling_type << endl;
    cout << "Wheel Type: " << b.wheel_type << endl;
    cout << "Fuel Tank Size: " << b.fuel_tank_size << endl;
    cout << "Make Type: " << b.make_type << endl;

    cout << "TVS Details: " << endl;
    cout << "Milage: " << t.milage << endl;
    cout << "Price: " << t.price << endl;
    cout << "Number of Cylinders: " << t.number_of_cylinders << endl;
    cout << "Number of Gears: " << t.number_of_gears << endl;
    cout << "Cooling Type: " << t.cooling_type << endl;
    cout << "Wheel Type: " << t.wheel_type << endl;
    cout << "Fuel Tank Size: " << t.fuel_tank_size << endl;
    cout << "Make Type: " << t.make_type << endl;

    return 0;
}
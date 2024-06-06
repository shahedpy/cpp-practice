#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Marks {
    public:
        static int rollCounter;
        int roll;
        string name;

        Marks(string n) {
            roll = ++rollCounter;
            name = n;
        }
};

int Marks::rollCounter = 0;

class Physics: virtual public Marks {
    public:
        int physicsMarks;
        Physics(string name, int marks): Marks(name) {
            physicsMarks = marks;
        }
};

class Chemistry: virtual public Marks {
    public:
        int chemistryMarks;
        Chemistry(string name, int marks): Marks(name) {
            chemistryMarks = marks;
        }
};

class Mathematics: virtual public Marks {
    public:
        int mathMarks;
        Mathematics(string name, int marks): Marks(name) {
            mathMarks = marks;
        }
};

class Student: public Physics, public Chemistry, public Mathematics {
    public:
        Student(string name, int phyMarks, int chemMarks, int mathMarks)
            : Marks(name), Physics(name, phyMarks), Chemistry(name, chemMarks), Mathematics(name, mathMarks) {}
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students;

    for (int i = 0; i < n; i++) {
        string name;
        int phyMarks, chemMarks, mathMarks;
        cout << "Enter the name of student " << i+1 << ": ";
        cin >> name;
        cout << "Enter the Physics marks of student " << i+1 << ": ";
        cin >> phyMarks;
        cout << "Enter the Chemistry marks of student " << i+1 << ": ";
        cin >> chemMarks;
        cout << "Enter the Mathematics marks of student " << i+1 << ": ";
        cin >> mathMarks;

        students.push_back(Student(name, phyMarks, chemMarks, mathMarks));
    }

    int totalMarks = 0;
    for (int i = 0; i < n; i++) {
        totalMarks += students[i].physicsMarks + students[i].chemistryMarks + students[i].mathMarks;
    }

    double averageMarks = static_cast<double>(totalMarks) / (n * 3);

    cout << "The average marks of the students is: " << averageMarks << endl;

    return 0;
}

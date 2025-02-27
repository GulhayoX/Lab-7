#include <iostream>
using namespace std;

// void incrementByValue(int a) {
//     a = a + 1; // 'a' is a copy of the original value
// }
//
// void incrementByReference(int &a) {
//     a = a + 1; // 'a' refers t othe original variable; changes affect directly
// }
//
// int main() {
//     int num = 5;
//     incrementByValue(num);
//     cout << "After call by value: " << num << endl;
//
//     incrementByReference(num);
//     cout << "After call by reference: " << num ;
// }

// 3 functions to do:
// 1 Area of a circle

// double areaofcircle(double r) {
//     return 3.14 * r * r;
// }
// int main() {
//     float radius;
//     cin >> radius;
//     cout << areaofcircle(radius) << endl;
// }

void restaurant_menu() {
    cout << " == Restaurant Menu == " << endl;
    cout << "1. Pizza: $7" << endl;
    cout << "2. Burger: $3" << endl;
    cout << "3. Salad: $4" << endl;
}



int main() {
    int check = 0;
    while (true) {
        restaurant_menu();
        int choice;
        char cont;
        cout << "Do you want to order?(y/n) ";
        cin >> cont;
        if (cont == 'y') {
            cin >> choice;
        }
        else {
            break;
        }
        switch (choice) {
            case 1:
                cout << "The number of pizzas you want to order: " << endl;
                int number;
                cin >> number;
                check += number * 7;
            case 2:
                cout << "The number of burgers you want to order: " << endl;
                int num;
                cin >> num;
                check += num * 3;
            case 3:
                cout << "The number of salads you want to order: " << endl;
                int n;
                cin >> n;
                check += n * 4;
            default:
                cout << "Invalid Choice" << endl;
        }
    }
    restaurant_menu();

}

#include <iostream>

using namespace std;
 
double calculatePentagonPerimeter(int sides[], int size) {
    double perimeter = 0.0;

    for (int i = 0; i < size; i++) {
        perimeter += sides[i];
    }

    return perimeter;
}

int main() {
    const int SIZE = 5;
    int sides[SIZE];

    
    cout << "Enter the lengths of the pentagon's sides:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Side " << i + 1 << ": ";
        cin >> sides[i];
    }

    
    double perimeter = calculatePentagonPerimeter(sides, SIZE);

    
    cout << "The perimeter of the pentagon is: " << perimeter << endl;

    return 0;
}

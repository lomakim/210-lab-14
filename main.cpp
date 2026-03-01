// COMSC-210 | Lab 14 | Loma Kim
#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 8;

class Color{
    private:
    int red, green, blue;

    public:
    //MUTATORS
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    //ACCESSORS
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const;
};

int main() {
    //DECLARATIONS
    Color c1, c2, c3, c4, c5;
    c1.setRed(1);
    c1.setGreen(1);
    c1.setBlue(1);

    c2.setRed(1);
    c2.setGreen(1);
    c2.setBlue(1);

    c3.setRed(1);
    c3.setGreen(1);
    c3.setBlue(1);

    c4.setRed(1);
    c4.setGreen(1);
    c4.setBlue(1);

    c5.setRed(1);
    c5.setGreen(1);
    c5.setBlue(1);

    return 0;
}

void Color::print() const {
    cout << setw(WIDTH) << "Red: " << red;
    cout << setw(WIDTH) << "Green: " << green;
    cout << setw(WIDTH) << "Blue: " << blue << endl;
}
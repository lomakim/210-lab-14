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

    //Set color values
    c1.setRed(51);
    c1.setGreen(115);
    c1.setBlue(87);

    c2.setRed(109);
    c2.setGreen(159);
    c2.setBlue(113);

    c3.setRed(255);
    c3.setGreen(209);
    c3.setBlue(220);

    c4.setRed(234);
    c4.setGreen(154);
    c4.setBlue(178);

    c5.setRed(255);
    c5.setGreen(254);
    c5.setBlue(227);

    cout << "RGB Values for color #1: ";
    c1.print();

    cout << "RGB Values for color #2: ";
    c2.print();

    cout << "RGB Values for color #3: ";
    c3.print();

    cout << "RGB Values for color #4: ";
    c4.print();

    cout << "RGB Values for color #5: ";
    c5.print();


    return 0;
}

void Color::print() const {
    cout << setw(WIDTH) << "Red: " << red;
    cout << setw(WIDTH) << "Green: " << green;
    cout << setw(WIDTH) << "Blue: " << blue << endl;
}
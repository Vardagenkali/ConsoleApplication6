#include <iostream>

using namespace std;

class Lift {
public:
    bool sost;
    int flor;
    bool on;

    Lift(bool sost, int flor, bool on) : sost(sost), flor(flor), on(on) {}

    int up() { return ++flor; }
    int down() { return --flor; }
    bool on_off() { return on; }

    void toggleOnOff() { on = !on; }
};

int main() {
    setlocale(LC_ALL, "");
    Lift lift(true, 5, false);

    cout << "Lift going up to floor: " << lift.up() << endl;

    cout << "Lift going down to floor: " << lift.down() << endl;

    lift.toggleOnOff();
    cout << "Lift is " << (lift.on_off() ? "on" : "off") << endl;

    return 0;
}

#include <iostream>

class LaneKeepingAssist {
    bool isLaneDeparture;
public:
    LaneKeepingAssist() : isLaneDeparture(false) {}

    void update(bool isLaneDeparture) {
        this->isLaneDeparture = isLaneDeparture;
    }

    bool control() {
        if (isLaneDeparture) {
            return true; // activate steering adjustment
        } else {
            return false; // do nothing
        }
    }
};

int main() {
    LaneKeepingAssist lka;

    // In a real scenario, this would be continuously updated from image processing
    bool isLaneDeparture = false;

    // Update the lane departure status
    lka.update(isLaneDeparture);

    bool control_output = lka.control();

    if (control_output) {
        std::cout << "Activate steering adjustment" << std::endl;
    } else {
        std::cout << "Stay in lane" << std::endl;
    }

    return 0;
}
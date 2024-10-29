#include <iostream>
#include "Circle.h"
#include "DynamicArray.h"

int main() {
    Circle c1(2, 0, 0);
    Circle c2(12, 0, 0);

    RelativePostion rp = circlesLocation(c1, c2);

    switch (rp) {
    
        case RelativePostion::concentric:
            std::cout << "Okregi wspolsrodkowe\n";
            break;
        case RelativePostion::externallyDisconnected:
            std::cout << "Okregi rozlaczne zewnetrznie\n";
            break;
        case RelativePostion::internallyDisconnected:
            std::cout << "Okregi rozlaczne wewnetrzenie\n";
            break;
        case RelativePostion::intersecting:
            std::cout << "Okregi precinaja sie\n";
            break;
        case RelativePostion::touchingExternally:
            std::cout << "Okregi styczne zewnetrzenie\n";
            break;
        case RelativePostion::touchingInternally:
            std::cout << "Okregi styczne wewnetrzenie\n";
            break;
        default:
            break;
    }

    DynamicArray arr(15, 5);

    for(int i = 0; i < arr.getSize(); ++i) {
        std::cout << arr.getArray()[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}
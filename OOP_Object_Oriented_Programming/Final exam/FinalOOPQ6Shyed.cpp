<<<<<<< Updated upstream
<<<<<<< Updated upstream
/// An apartment holds different types of room (master bed, bed), kitchen, bathroom, balcony, verandah.
/// Developed different classes from the base class ‘Room’ having only three variables:
/// FloorArea, Length and Width. You need find total area of an apartment: 3LDK + 3Bathroom + 2Verandah + 1Balcony.
/// MCE 07905536 Shyed
#include <iostream>

class Room {
public:
    Room(double length, double width) : length(length), width(width) {}
    double calculateFloorArea() const { return length * width; }

protected:
    double length;
    double width;
};

class LivingRoom : public Room { public: LivingRoom(double length, double width) : Room(length, width) {} };
class DiningRoom : public Room { public: DiningRoom(double length, double width) : Room(length, width) {} };
class Kitchen : public Room { public: Kitchen(double length, double width) : Room(length, width) {} };
class Bathroom : public Room { public: Bathroom(double length, double width) : Room(length, width) {} };
class Verandah : public Room { public: Verandah(double length, double width) : Room(length, width) {} };
class Balcony : public Room { public: Balcony(double length, double width) : Room(length, width) {} };

// Function to input length and width for a room
void inputRoomDimensions(double& length, double& width, const std::string& roomName) {
    std::cout << "Enter dimensions for " << roomName << " (length width): ";
    std::cin >> length >> width;
}

int main() {
    double livingRoomLength, livingRoomWidth;
    inputRoomDimensions(livingRoomLength, livingRoomWidth, "Living Room");
    LivingRoom livingRoom(livingRoomLength, livingRoomWidth);

        double livingRoomLength2, livingRoomWidth2;
    inputRoomDimensions(livingRoomLength2, livingRoomWidth2, "Master Bedroom");
    LivingRoom livingRoom2(livingRoomLength2, livingRoomWidth2);

        double livingRoomLength3, livingRoomWidth3;
    inputRoomDimensions(livingRoomLength3, livingRoomWidth3, "Bedroom");
    LivingRoom livingRoom3(livingRoomLength3, livingRoomWidth3);

    double diningRoomLength, diningRoomWidth;
    inputRoomDimensions(diningRoomLength, diningRoomWidth, "Dining Room");
    DiningRoom diningRoom(diningRoomLength, diningRoomWidth);

    double kitchenLength, kitchenWidth;
    inputRoomDimensions(kitchenLength, kitchenWidth, "Kitchen");
    Kitchen kitchen(kitchenLength, kitchenWidth);

    double bathroom1Length, bathroom1Width;
    inputRoomDimensions(bathroom1Length, bathroom1Width, "Bathroom 1");
    Bathroom bathroom1(bathroom1Length, bathroom1Width);

    double bathroom2Length, bathroom2Width;
    inputRoomDimensions(bathroom2Length, bathroom2Width, "Bathroom 2");
    Bathroom bathroom2(bathroom2Length, bathroom2Width);

    double bathroom3Length, bathroom3Width;
    inputRoomDimensions(bathroom3Length, bathroom3Width, "Bathroom 3");
    Bathroom bathroom3(bathroom3Length, bathroom3Width);

    double verandah1Length, verandah1Width;
    inputRoomDimensions(verandah1Length, verandah1Width, "Verandah 1");
    Verandah verandah1(verandah1Length, verandah1Width);

    double verandah2Length, verandah2Width;
    inputRoomDimensions(verandah2Length, verandah2Width, "Verandah 2");
    Verandah verandah2(verandah2Length, verandah2Width);

    double balconyLength, balconyWidth;
    inputRoomDimensions(balconyLength, balconyWidth, "Balcony");
    Balcony balcony(balconyLength, balconyWidth);

    double totalArea = livingRoom.calculateFloorArea() + livingRoom2.calculateFloorArea() + livingRoom3.calculateFloorArea() + diningRoom.calculateFloorArea() +
                      kitchen.calculateFloorArea() + bathroom1.calculateFloorArea() +
                      bathroom2.calculateFloorArea() + bathroom3.calculateFloorArea() +
                      verandah1.calculateFloorArea() + verandah2.calculateFloorArea() +
                      balcony.calculateFloorArea();

    std::cout << "Total floor area of the apartment: " << totalArea << " square units" << std::endl;

    return 0;
}

=======
=======
>>>>>>> Stashed changes
/// An apartment holds different types of room (master bed, bed), kitchen, bathroom, balcony, verandah.
/// Developed different classes from the base class ‘Room’ having only three variables:
/// FloorArea, Length and Width. You need find total area of an apartment: 3LDK + 3Bathroom + 2Verandah + 1Balcony.
/// MCE 07905536 Shyed
#include <iostream>

class Room {
public:
    Room(double length, double width) : length(length), width(width) {}
    double calculateFloorArea() const { return length * width; }

protected:
    double length;
    double width;
};

class LivingRoom : public Room { public: LivingRoom(double length, double width) : Room(length, width) {} };
class DiningRoom : public Room { public: DiningRoom(double length, double width) : Room(length, width) {} };
class Kitchen : public Room { public: Kitchen(double length, double width) : Room(length, width) {} };
class Bathroom : public Room { public: Bathroom(double length, double width) : Room(length, width) {} };
class Verandah : public Room { public: Verandah(double length, double width) : Room(length, width) {} };
class Balcony : public Room { public: Balcony(double length, double width) : Room(length, width) {} };

// Function to input length and width for a room
void inputRoomDimensions(double& length, double& width, const std::string& roomName) {
    std::cout << "Enter dimensions for " << roomName << " (length width): ";
    std::cin >> length >> width;
}

int main() {
    double livingRoomLength, livingRoomWidth;
    inputRoomDimensions(livingRoomLength, livingRoomWidth, "Living Room");
    LivingRoom livingRoom(livingRoomLength, livingRoomWidth);

        double livingRoomLength2, livingRoomWidth2;
    inputRoomDimensions(livingRoomLength2, livingRoomWidth2, "Master Bedroom");
    LivingRoom livingRoom2(livingRoomLength2, livingRoomWidth2);

        double livingRoomLength3, livingRoomWidth3;
    inputRoomDimensions(livingRoomLength3, livingRoomWidth3, "Bedroom");
    LivingRoom livingRoom3(livingRoomLength3, livingRoomWidth3);

    double diningRoomLength, diningRoomWidth;
    inputRoomDimensions(diningRoomLength, diningRoomWidth, "Dining Room");
    DiningRoom diningRoom(diningRoomLength, diningRoomWidth);

    double kitchenLength, kitchenWidth;
    inputRoomDimensions(kitchenLength, kitchenWidth, "Kitchen");
    Kitchen kitchen(kitchenLength, kitchenWidth);

    double bathroom1Length, bathroom1Width;
    inputRoomDimensions(bathroom1Length, bathroom1Width, "Bathroom 1");
    Bathroom bathroom1(bathroom1Length, bathroom1Width);

    double bathroom2Length, bathroom2Width;
    inputRoomDimensions(bathroom2Length, bathroom2Width, "Bathroom 2");
    Bathroom bathroom2(bathroom2Length, bathroom2Width);

    double bathroom3Length, bathroom3Width;
    inputRoomDimensions(bathroom3Length, bathroom3Width, "Bathroom 3");
    Bathroom bathroom3(bathroom3Length, bathroom3Width);

    double verandah1Length, verandah1Width;
    inputRoomDimensions(verandah1Length, verandah1Width, "Verandah 1");
    Verandah verandah1(verandah1Length, verandah1Width);

    double verandah2Length, verandah2Width;
    inputRoomDimensions(verandah2Length, verandah2Width, "Verandah 2");
    Verandah verandah2(verandah2Length, verandah2Width);

    double balconyLength, balconyWidth;
    inputRoomDimensions(balconyLength, balconyWidth, "Balcony");
    Balcony balcony(balconyLength, balconyWidth);

    double totalArea = livingRoom.calculateFloorArea() + livingRoom2.calculateFloorArea() + livingRoom3.calculateFloorArea() + diningRoom.calculateFloorArea() +
                      kitchen.calculateFloorArea() + bathroom1.calculateFloorArea() +
                      bathroom2.calculateFloorArea() + bathroom3.calculateFloorArea() +
                      verandah1.calculateFloorArea() + verandah2.calculateFloorArea() +
                      balcony.calculateFloorArea();

    std::cout << "Total floor area of the apartment: " << totalArea << " square units" << std::endl;

    return 0;
}

<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

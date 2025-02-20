<<<<<<< Updated upstream
<<<<<<< Updated upstream
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

int main() {
    LivingRoom livingRoom(20.0, 15.0);
    DiningRoom diningRoom(15.0, 10.0);
    Kitchen kitchen(18.0, 12.0);

    Bathroom bathroom1(8.0, 6.0), bathroom2(8.0, 6.0), bathroom3(8.0, 6.0);
    Verandah verandah1(10.0, 8.0), verandah2(10.0, 8.0);
    Balcony balcony(12.0, 6.0);

    double totalArea = livingRoom.calculateFloorArea() + diningRoom.calculateFloorArea() +
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

int main() {
    LivingRoom livingRoom(20.0, 15.0);
    DiningRoom diningRoom(15.0, 10.0);
    Kitchen kitchen(18.0, 12.0);

    Bathroom bathroom1(8.0, 6.0), bathroom2(8.0, 6.0), bathroom3(8.0, 6.0);
    Verandah verandah1(10.0, 8.0), verandah2(10.0, 8.0);
    Balcony balcony(12.0, 6.0);

    double totalArea = livingRoom.calculateFloorArea() + diningRoom.calculateFloorArea() +
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

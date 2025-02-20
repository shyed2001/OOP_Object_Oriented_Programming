<<<<<<< Updated upstream
<<<<<<< Updated upstream
///QA 3: Define a class and object. Explain about class and object with syntax and give examples for each.\

/// Answer:

//A class and an object are two important concepts in object-oriented programming.
//A class is a blueprint or template that defines the common attributes and behaviors of a group of objects.
//An object is an instance of a class that has specific values for the attributes and can perform the behaviors
//defined by the class.
//
//For example, suppose we want to model a car in our program.
//We can create a class called Car that has some attributes such as color, model, speed,
//and some behaviors such as start, stop, accelerate, brake.
//Then we can create an object of the Car class by providing the values for the attributes
//and invoking the behaviors. For example, we can create a red Ferrari that has a speed of 200 km/h
//and can start, stop, accelerate, and brake.
//
//The syntax for defining a class and creating an object varies depending on the programming language.
//Examples of how to define a class and create an object

// Include the necessary header files
#include <iostream>
#include <string>
using namespace std;

// Define a class called Car
class Car {
    // Declare some attributes of the class
    private:
        string color;
        string model;
        int speed;

    // Define a constructor to initialize the attributes
    public:
        Car(string color, string model, int speed) {
            this->color = color;
            this->model = model;
            this->speed = speed;
        }

    // Define some behaviors of the class
    void start() {
        cout << "The car is starting." << endl;
    }

    void stop() {
        cout << "The car is stopping." << endl;
    }

    void accelerate(int amount) {
        speed += amount;
        cout << "The car is accelerating. The new speed is " << speed << " km/h." << endl;
    }

    void brake(int amount) {
        speed -= amount;
        cout << "The car is braking. The new speed is " << speed << " km/h." << endl;
    }
};

// Define a main function to test the class and the object
int main() {
    // Create an object of the Car class
    Car ferrari("red", "Ferrari", 200);

    // Invoke some behaviors of the object
    ferrari.start();
    ferrari.accelerate(50);
    ferrari.brake(20);
    ferrari.stop();

    // Return 0 to indicate successful execution
    return 0;
}
=======
=======
>>>>>>> Stashed changes
///QA 3: Define a class and object. Explain about class and object with syntax and give examples for each.\

/// Answer:

//A class and an object are two important concepts in object-oriented programming.
//A class is a blueprint or template that defines the common attributes and behaviors of a group of objects.
//An object is an instance of a class that has specific values for the attributes and can perform the behaviors
//defined by the class.
//
//For example, suppose we want to model a car in our program.
//We can create a class called Car that has some attributes such as color, model, speed,
//and some behaviors such as start, stop, accelerate, brake.
//Then we can create an object of the Car class by providing the values for the attributes
//and invoking the behaviors. For example, we can create a red Ferrari that has a speed of 200 km/h
//and can start, stop, accelerate, and brake.
//
//The syntax for defining a class and creating an object varies depending on the programming language.
//Examples of how to define a class and create an object

// Include the necessary header files
#include <iostream>
#include <string>
using namespace std;

// Define a class called Car
class Car {
    // Declare some attributes of the class
    private:
        string color;
        string model;
        int speed;

    // Define a constructor to initialize the attributes
    public:
        Car(string color, string model, int speed) {
            this->color = color;
            this->model = model;
            this->speed = speed;
        }

    // Define some behaviors of the class
    void start() {
        cout << "The car is starting." << endl;
    }

    void stop() {
        cout << "The car is stopping." << endl;
    }

    void accelerate(int amount) {
        speed += amount;
        cout << "The car is accelerating. The new speed is " << speed << " km/h." << endl;
    }

    void brake(int amount) {
        speed -= amount;
        cout << "The car is braking. The new speed is " << speed << " km/h." << endl;
    }
};

// Define a main function to test the class and the object
int main() {
    // Create an object of the Car class
    Car ferrari("red", "Ferrari", 200);

    // Invoke some behaviors of the object
    ferrari.start();
    ferrari.accelerate(50);
    ferrari.brake(20);
    ferrari.stop();

    // Return 0 to indicate successful execution
    return 0;
}
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

<<<<<<< Updated upstream
<<<<<<< Updated upstream
/// QA 2: What is a constructor? Explain various types of constructors available in C++

///Answer:

//A constructor is a special type of member function that is called automatically when an object of a class is created.
//In C++, a constructor has the same name as that of the class and it does not have a return type. For example:


class Wall {
public:
  // create a constructor
  Wall () {
    // code
  }
};


//The function `Wall ()` is a constructor of the class `Wall`.

//There are different types of constructors available in C++:

//Default constructor: A default constructor is a constructor that does not take any parameters and
//is either provided by the compiler or defined by the user with an empty body.
//A default constructor is used to initialize the data members of an object with default values. For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a default constructor
  Wall () {
    length = 0.0;
    height = 0.0;
  }
};


//The default constructor `Wall ()` initializes the data members `length` and `height` to `0.0`.
//
//Parameterized constructor: A parameterized constructor is a constructor that takes one or
// more parameters and is defined by the user to initialize the data members of an object with specific values.
// For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a parameterized constructor
  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};


//The parameterized constructor `Wall (double len, double hgt)` initializes the data members `length`
// and `height` to the values passed as arguments.
//
//Overloaded constructor: An overloaded constructor is a constructor that has more than one definition with different
// numbers or types of parameters.
//  An overloaded constructor allows creating objects of a class in different ways by passing different arguments.
//  For example:


class Wall {
private:
  double length;
  double height;
public:
  // create an overloaded constructor
  Wall () {
    length = 0.0;
    height = 0.0;
  }

  Wall (double len) {
    length = len;
    height = len;
  }

  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};


//The overloaded constructor `Wall ()`, `Wall (double len)`, and `Wall (double len, double hgt)`
//can be used to create objects of the class `Wall` with different numbers of arguments.
//
//Constructor with default value: A constructor with default value is a constructor that has one or more parameters
//with default values assigned to them.
//A constructor with default value allows creating objects of a class,
//without passing all the arguments required by the parameterized constructor. For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a constructor with default value
  Wall (double len = 0.0, double hgt = 0.0) {
    length = len;
    height = hgt;
  }
};


//The constructor with default value `Wall (double len = 0.0, double hgt = 0.0)`
// can be used to create objects of the class `Wall` with zero, one, or two arguments.
//
//Copy constructor: A copy constructor is a constructor that takes an object of the same class as a parameter
//and is used to create a copy of that object. A copy constructor is useful for creating temporary objects,
// passing objects by value, returning objects from functions, and initializing objects from other objects.
//  For example:

class Wall {
private:
  double length;
  double height;
public:
  // create a copy constructor
  Wall (const Wall &obj) {
    length = obj.length;
    height = obj.height;
  }
};


//The copy constructor `Wall (const Wall &obj)` takes an object of the class `Wall` as a reference
//and copies its data members to the new object.
//
//Inline constructor: An inline constructor is a constructor that is defined inside the class
// declaration and is treated as an inline function by the compiler.
// An inline function is a function that is expanded in line when it is called,
// which can reduce the overhead of function calls and improve performance. For example:

class Wall {
private:
  double length;
  double height;
public:
  // create an inline constructor
  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};

//
//The inline constructor `Wall (double len, double hgt)` is defined inside the class declaration and
//can be expanded in line by the compiler when it is called.
=======
=======
>>>>>>> Stashed changes
/// QA 2: What is a constructor? Explain various types of constructors available in C++

///Answer:

//A constructor is a special type of member function that is called automatically when an object of a class is created.
//In C++, a constructor has the same name as that of the class and it does not have a return type. For example:


class Wall {
public:
  // create a constructor
  Wall () {
    // code
  }
};


//The function `Wall ()` is a constructor of the class `Wall`.

//There are different types of constructors available in C++:

//Default constructor: A default constructor is a constructor that does not take any parameters and
//is either provided by the compiler or defined by the user with an empty body.
//A default constructor is used to initialize the data members of an object with default values. For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a default constructor
  Wall () {
    length = 0.0;
    height = 0.0;
  }
};


//The default constructor `Wall ()` initializes the data members `length` and `height` to `0.0`.
//
//Parameterized constructor: A parameterized constructor is a constructor that takes one or
// more parameters and is defined by the user to initialize the data members of an object with specific values.
// For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a parameterized constructor
  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};


//The parameterized constructor `Wall (double len, double hgt)` initializes the data members `length`
// and `height` to the values passed as arguments.
//
//Overloaded constructor: An overloaded constructor is a constructor that has more than one definition with different
// numbers or types of parameters.
//  An overloaded constructor allows creating objects of a class in different ways by passing different arguments.
//  For example:


class Wall {
private:
  double length;
  double height;
public:
  // create an overloaded constructor
  Wall () {
    length = 0.0;
    height = 0.0;
  }

  Wall (double len) {
    length = len;
    height = len;
  }

  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};


//The overloaded constructor `Wall ()`, `Wall (double len)`, and `Wall (double len, double hgt)`
//can be used to create objects of the class `Wall` with different numbers of arguments.
//
//Constructor with default value: A constructor with default value is a constructor that has one or more parameters
//with default values assigned to them.
//A constructor with default value allows creating objects of a class,
//without passing all the arguments required by the parameterized constructor. For example:


class Wall {
private:
  double length;
  double height;
public:
  // create a constructor with default value
  Wall (double len = 0.0, double hgt = 0.0) {
    length = len;
    height = hgt;
  }
};


//The constructor with default value `Wall (double len = 0.0, double hgt = 0.0)`
// can be used to create objects of the class `Wall` with zero, one, or two arguments.
//
//Copy constructor: A copy constructor is a constructor that takes an object of the same class as a parameter
//and is used to create a copy of that object. A copy constructor is useful for creating temporary objects,
// passing objects by value, returning objects from functions, and initializing objects from other objects.
//  For example:

class Wall {
private:
  double length;
  double height;
public:
  // create a copy constructor
  Wall (const Wall &obj) {
    length = obj.length;
    height = obj.height;
  }
};


//The copy constructor `Wall (const Wall &obj)` takes an object of the class `Wall` as a reference
//and copies its data members to the new object.
//
//Inline constructor: An inline constructor is a constructor that is defined inside the class
// declaration and is treated as an inline function by the compiler.
// An inline function is a function that is expanded in line when it is called,
// which can reduce the overhead of function calls and improve performance. For example:

class Wall {
private:
  double length;
  double height;
public:
  // create an inline constructor
  Wall (double len, double hgt) {
    length = len;
    height = hgt;
  }
};

//
//The inline constructor `Wall (double len, double hgt)` is defined inside the class declaration and
//can be expanded in line by the compiler when it is called.
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

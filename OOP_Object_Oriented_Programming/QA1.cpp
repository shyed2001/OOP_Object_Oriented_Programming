<<<<<<< Updated upstream
<<<<<<< Updated upstream
/// QA 1: Explain the difference in meaning between the structure
struct a {
int	1, j, k;
};
//and the class
class a {
i nt	1, j, k;
};
//Explain why the class declaration is not useful.
// How can you use the keyword public to change the class declaration into a declaration equivalent to struct a?

///Answer:

//The difference in meaning between the structure and the class declaration is that
//the structure has public members by default, while the class has private members by default .
//This means that the structure can be accessed and modified by any code that has a reference to it,
//while the class can only be accessed and modified by its own member functions or by other classes
//that are declared as friends.

class a {
int	1, j, k;
};

//The class declaration is not useful because it does not provide any data abstraction or encapsulation for its members.
//It is equivalent to declaring three private variables in the global scope,
//which is a bad practice and can lead to name conflicts, memory leaks, and security issues.
//The class declaration also does not have any constructors, destructors, or operators that can initialize,
//destroy, or manipulate its members in a consistent and safe way.

//To change the class declaration into a declaration that is equivalent to the structure,
// we can use the keyword public before the list of members.
// This will make all the members public and accessible by any code that has a reference to the class object.
// For example:

class a {
public:
  int i, j, k;
};
=======
=======
>>>>>>> Stashed changes
/// QA 1: Explain the difference in meaning between the structure
struct a {
int	1, j, k;
};
//and the class
class a {
i nt	1, j, k;
};
//Explain why the class declaration is not useful.
// How can you use the keyword public to change the class declaration into a declaration equivalent to struct a?

///Answer:

//The difference in meaning between the structure and the class declaration is that
//the structure has public members by default, while the class has private members by default .
//This means that the structure can be accessed and modified by any code that has a reference to it,
//while the class can only be accessed and modified by its own member functions or by other classes
//that are declared as friends.

class a {
int	1, j, k;
};

//The class declaration is not useful because it does not provide any data abstraction or encapsulation for its members.
//It is equivalent to declaring three private variables in the global scope,
//which is a bad practice and can lead to name conflicts, memory leaks, and security issues.
//The class declaration also does not have any constructors, destructors, or operators that can initialize,
//destroy, or manipulate its members in a consistent and safe way.

//To change the class declaration into a declaration that is equivalent to the structure,
// we can use the keyword public before the list of members.
// This will make all the members public and accessible by any code that has a reference to the class object.
// For example:

class a {
public:
  int i, j, k;
};
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

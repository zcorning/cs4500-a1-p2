Array API
-----------

For this assignment, we decided to create the API for an array

object class
-----------
This class creates a generic object type. Here, we test whether two Objects are equal to each other, as well as a hash function that returns the Object's pointer value. 

array class
-----------
This class extends our object class. Here, we initialize three values, an Object** arr_, size_t size_ (number of elements in the list) and size_t cap_ (capacity of the list). We also have a deconstructor that deletes the array. 

array class methods
-----------
All of our methods are virtual, so they can be accessed and manipulated outside of the class.

size() //returns the number of elements in this array
index_of(Object* o) //returns index of given object in this array
grow() //doubles the allocated space for this array
push(Object* o) //pushes given object onto end of this array
add(size_t idx, Object* o) //adds given element to the array at the given index
add_all(size_t idx, Array* a) //adds all given elements to the array at the given index
get(size_t idx) //returns element of the array at the given index
set(size_t idx, Object* o) //sets the given index to the given element
remove(size_t idx) //removes the object at the given index
clear() //removes all elements from the array
equals(Object* o) //checks if this array is equal to the given object
hash() //adds together the hashes of all the objects

test-array class
-----------
Contains 6 tests that test all the functions above

running
-----------
To run, compile and run tests using the command "make" 

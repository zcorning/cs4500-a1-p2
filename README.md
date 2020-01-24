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
All of our methods are virtual, so they can be accessed and manipulated outside of the class. <br>

size() //returns the number of elements in this array <br>
index_of(Object* o) //returns index of given object in this array <br>
grow() //doubles the allocated space for this array <br>
push(Object* o) //pushes given object onto end of this array <br>
add(size_t idx, Object* o) //adds given element to the array at the given index <br>
add_all(size_t idx, Array* a) //adds all given elements to the array at the given index <br>
get(size_t idx) //returns element of the array at the given index <br>
set(size_t idx, Object* o) //sets the given index to the given element <br>
remove(size_t idx) //removes the object at the given index <br>
clear() //removes all elements from the array <br>
equals(Object* o) //checks if this array is equal to the given object <br>
hash() //adds together the hashes of all the objects <br>

test-array class
-----------
Contains 6 tests that test all the functions above

running
-----------
To run, compile and run tests using the command "make" 

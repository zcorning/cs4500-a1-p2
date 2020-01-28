#pragma once

#include "object.h"
#include <assert.h>

class Array : public Object {
        
        //empty constructor
        Array() : Object() {}
        
        // creates an array of the given size
        Array(size_t array_size) : Object() {}

        // copies the elements of the given array into this array
        Array(Array* copy_array) : Object() {}

        //deconstructor
        ~Array() {}

        // returns the number of elements in this array
        virtual size_t size();

        // returns the index of the given object in this array
        // returns an index greater than this array's size if there is no such element
        virtual size_t index_of(Object* o);

        // doubles the allocated space for this array
        // @post maintains element indexing, capacity doubles
        virtual void grow_();

        // pushes the given object onto the end of this array
        // @pre the given object is not null
        // @post size = size + 1
        // @invariant no elements are null
        virtual void push(Object* o);
        
        // add the given element to the array at the given index
        // @pre the given object is not null
        // @post size = size + 1
        // @invariant no elements are null
        virtual void add(size_t idx, Object* o);
        
        //adds all given elements to the array at the given index
        //@pre the given objects are not null
        //@post size = size + a -> size_
        //@invariant no elements are null
        virtual void add_all(size_t idx, Array* a);
        
        //returns the element of the array at the given index
        //@pre the index is in bounds
        virtual Object* get(size_t idx);

        //sets the given index to the given element
        //@returns the overwritten object
        virtual Object* set(size_t idx, Object* o);

        //removes the object at the given index
        //@pre the index is in bounds
        //@return the overwritten object
        virtual Object* remove(size_t idx);

        //removes all elements from the array
        virtual void clear();

        //checks if this array is equal to the given object
        virtual bool equals(Object* o);

        //adds together the hashes of all of the objects
        virtual size_t hash();
};

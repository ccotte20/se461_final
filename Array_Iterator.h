// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef ____Array_Iterator__
#define ____Array_Iterator__

#include "Array.h"

template <typename T>
class Array_Iterator
{
	public:
    
		typedef T type;
    
		Array_Iterator(Array<T> & arr);
    
		~Array_Iterator(void);
    
		bool advance(void);
    
		bool is_done(void);
	
		T * operator -> (void);
		T & operator * (void);

	private:
    
		Array<T>  & a_;
		size_t curr_;
};

#include "Array_Iterator.cpp"

#endif 
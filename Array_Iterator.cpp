// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include <iostream>
#include <stdexcept>


template <typename T>
Array_Iterator <T>::Array_Iterator(Array <T> & arr)
:a_(arr),curr_(0)
{
    
}


template <typename T>
Array_Iterator<T>::~Array_Iterator(void)
{
    
}


template <typename T>
bool Array_Iterator <T>::advance(void)
{
	++this->curr_;
	return true;
}


template <typename T>
bool Array_Iterator <T>::is_done(void)
{
	return this->curr_>= this->a_.size();
}


template <typename T>
T * Array_Iterator <T>:: operator->(void)
{
	return &this->a_[this->curr_];
}


template <typename T>
T & Array_Iterator<T>:: operator * (void)
{
	return this->a_[this->curr_];
}

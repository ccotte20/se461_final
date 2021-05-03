// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Array.h"
#include "Dynamic_Array.h"
#include "Fixed_Array.h"
#include "Array_Iterator.h"
#include <string>
int main()
{
	
	Array<std::string> a(5, "Clark");
	
	Array_Iterator<std::string> arr_iter(a);
	
	for(arr_iter; !arr_iter.is_done(); arr_iter.advance())
	{
		std::cout<<arr_iter->data()<<std::endl;
	}
	
	return 0;
}
// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Subtract_Command.h"


Subtract_Command::Subtract_Command(void)
{
    
}


Subtract_Command::~Subtract_Command(void)
{
    
}

int Subtract_Command::priority()
{
    	return 1;
}

int Subtract_Command::evaluate(int n1,int n2)
{
	return (n1 - n2);
}
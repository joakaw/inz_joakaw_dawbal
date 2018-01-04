#ifndef LOCKS_CONTROLLER_H__
#define LOCKS_CONTROLLER_H__


#include "main_structures.h"


//Function to set proper state of lock. 
//possible values of sate: OPEN, CLOSED

void set_lock_state(enum lock_state state);


#endif
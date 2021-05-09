// this code is only for testing nothing to do with any operation
#include<stdio.h>
#include<stdlib.h>
#include "variant.h"
#include "version.h // added this line though new branch named test1
int main()
{
 printf("maruti\n");
 printf("Jay Hanuman\n");
 
 const char* get_variant(uint8 variant_number)
 {
	 // function will pick string from here according to number passed 
 }
 printf("variant %d:\n", get_variant()); // added this line 
 return 0;
 
}

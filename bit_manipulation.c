
/*

File bit_manipulation.c

Purpose :
contains helper functions for manipulating bits


Revisions:
file created: Doron Nussbaum

* /

/************************************************************************/

// INCLUDE FILES

#include "bit_manipulation.h"


/************************************************************************/
//MACROS  / DEFINES



/************************************************************************/
// FUNCTION PROTOTYPES



/***************************************************/

//example of a testing function main();


int main(int argc, char *argv[])

{
	int rc = 0;		// return code


	short test = 0;
	short modified;
	int bitNum;		// bit number to be used
	
	printf("Hello World %d\n", countBits(95));
	test = 0;
	bitNum = 2;
	modified = test;
	flipBitShort(bitNum, &modified);
	printf("test_int=%d, flipping bit #=%d, answer should be=%d, test_modified=%d\n", test, bitNum, 4, modified);

	rc = isShortBitSet(modified, 3);
	printf("Bit 3 in %d should not be set.  Answer is %d \n", modified, rc);

	rc = isShortBitSet(modified, 2);
	printf("Bit 2 in %d should  be set.  Answer is %d \n", modified, rc);


   getchar();
   
	return(0);
}




/*************************************************************************************/
/* purpose: checks if bit i is set

input:
c - the character to be checked
bitNum - the bit number to be checked

return:
1 if the bit is set to 1
0 if the bit is not set (bit is 0)

*/

int isCharBitSet(char c, int bitNum)

{
    // add code 
}




/*************************************************************************************/

/* purpose: checks if bit i is set

input: 
num - the number to be checked
bitNum - the bit number to be checked 

return:
1 if the bit is set to 1
0 if the bit is not set (bit is 0)

*/
int isShortBitSet(short num, int bitNum)

{
	/* ADDED JAN 26 19:30 */
	return (num & (1 << bitNum)) >> bitNum;
}

/*************************************************************************************/
/* purpose: sets bit bitNum to 1 

input:
num - the address of the short integer
bitNum - the bit number to be checked



*/

void setShortBit(int bitNum, short *num)

{
    // add code 
}

/*************************************************************************************/


/* purpose: sets bit bitNum to 1

input:
c - address of character 
bitNum - the bit number to be checked

return:
1 if the bit is set to 1
0 if the bit is not set (bit is 0)

*/
void setCharBit(int bitNum, char *c)

{

    // add code
    //
}

/*************************************************************************************/


/*  count the number of bits in a short

input: 
num - a short interger

return
the numer of bits that are set to 1 in num



*/
int countBits(short num)

{
    /* Logic: 
     * 0x9  = 1001 | 2 bits set to 1
     * 0x11 = 1011 | 3 bits set to 1
     */
     int total = 0;
     for (int i = 0; i < sizeof(num)*8; i++) {
	if (isShortBitSet(num, i) == 1) total++;
     }

     return total;
}






/*************************************************************************************/

/* purpose:
flips bit i in num (set bit i to 1 if the bit is 0 or set bit i to 0 if the bit is 1)

input:
bitNum - the bit number to be flipped
num - address of the short integer

*/
void flipBitShort(int bitNum, short *num)

{

    // add code
}


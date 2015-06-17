#include <iostream>
#include <inttypes.h>
#include <string.h>

using namespace std;

/**
* \brief          Blowfish context structure
*/
typedef struct
{
	uint32_t P[BLOWFISH_ROUNDS + 2];    /*  Blowfish round keys    */
	uint32_t S[4][256];                 /*  key dependent S-boxes  */
}
blowfish_context;


#define BLOWFISH_ENCRYPT     1
#define BLOWFISH_DECRYPT     0
#define BLOWFISH_MAX_KEY     448
#define BLOWFISH_MIN_KEY     32
#define BLOWFISH_ROUNDS      16         /* Rounds to use */
#define BLOWFISH_BLOCKSIZE   8          /* Blowfish uses 64 bit blocks */





int main(int argc, char* argv[])
{
	cout << "Hello" << endl;


	system("PAUSE");
	return 0;
}


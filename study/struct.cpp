#include <iostream>

using namespace std;
typedef struct
{
	int A;
	long int B;
}B;

int main ()
{
	cout << sizeof(B) << endl;
	cout << B.B << endl;
	// cout << sizeof(A.B) << endl;
}
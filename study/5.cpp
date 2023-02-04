#include <cstdio> 
#include <iostream> 

namespace nameA
{
void debug()
	{
	printf("1");
	}
}

namespace nameB
{
void debug()
{
printf("2");
}
}

int main ()
{
	nameA::debug();
	nameB::debug();
}


// int main()
// 2 {
// 3 nameA::debug(); //program40.cpp の debug 関数を呼び出す
// 4 nameB::debug(); //program235.cpp の debug 関数を呼び出す
// 5 return 0;
// 6 }

// 3 namespace nameA{
// 4 void debug()
// 5 {
// 6 printf("Debug Function");
// 7 }
// 8 }
// 1 //program235.cpp の中身
// 2
// 3 namespace nameB{
// 4 void debug()
// 5 {
// 6 printf("Hello");
// 7 }
// 8 }

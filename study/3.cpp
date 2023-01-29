 
 
  #include <iostream>
 #include <vector>

using namespace std;

 int main ()
 {
	 std::vector<int> v(100,rand());
    std::vector<int>::iterator itr = v.begin();   // 最初の要素を指すイテレータ
    // std::vector<int>::iterator i = v.rbegin();
	for (int i = 0; i != v.end(); i++)
	{
	std::cout << *itr << "\n";      // 最初の要素の値を表示
	// std::cout << *i << "\n";      // 最初の要素の値を表示
    // ++itr;   // 次の要素に移動
    // *itr = 9;    // 二番めの要素の値を 9 に変更
	}
 }
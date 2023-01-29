 #include <iostream>
 #include <vector>

using namespace std;
// class vector
// {
// 	Span(const Span& span);

// 	const vector& operator=(const vector &) 
// }
 int main ()
 {
	size_t N = 10;
	// std::vector<char> str;
	// std::vector<double> pos(3);
	// std::vector<char> pos(10, 'a');
	// std::vector<char> pos(N, 'b');
	// for (int i = 0; i < N; i++)
	// {
	// cout << pos[i] << endl; 
	// }
	
// std::vector<int> a(500, rand());
// 	for (int i = 0; i <= 500; i++)
// 	{
// 	a[i] = rand();
// 	cout << a[i] << " "; 
// 	}

	// std::vector<char>a{1, 5, 6};
	// std::vector<char>x;
	// for (int i = 0; i <= N; i++)
	// {
	// 	cout << x << endl;
	// }
	// std::vector<int> org{1, 2, 3};
    // std::vector<int> x, y;

	// x = y = org; 

	// for (int i = 0; i <= N; i++)
	// {
	// // b[i] = rand();
	// cout << y[i] << " "; 
	// cout << x[i] << " "; 
	// cout << endl;
	// }

	const int SZ = 10;          // 要素数
    std::vector<int>v(SZ);        // 指定要素数で、vector を生成
    for(int i = 0; i < SZ; ++i)
        v[i] = i;   
	

//    int org_data[] = {4, 6, 5};      // 元データ
//     std::vector<int> data(org_data, org_data + 3);
//		cout << org_data << endl;
 }
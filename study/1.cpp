 #include <iostream>
 #include <vector>

using namespace std;
 int main ()
 {
	size_t N = 10;
	x = y = org; 

	const int SZ = 10;          // 要素数
    std::vector<int>v(SZ);        // 指定要素数で、vector を生成
    for(int i = 0; i < SZ; ++i)
<<<<<<< HEAD
        v[i] = i;   
=======
        {
		v[i] = i;   
		cout << v[i] << endl;
		}
	
	// const int SZ = 10;
	// std::vector<int>v(10)
>>>>>>> fd606f7b64768edf57ab165f9e5a38dadbd783c9

//    int org_data[] = {4, 6, 5};      // 元データ
//     std::vector<int> data(org_data, org_data + 3);
//		cout << org_data << endl;
}
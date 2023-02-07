
#include <memory>
#include <algorithm>
#include <iostream>
//#include <iterator>
using namespace std;

namespace ft
{
template<typename T>
class VectorIterator: Iterator
{
public:
	typedef T value_type;
	// typedef value_type* pointer;
	// typedef value_type const* const_pointer;
	// typedef value_type& reference;
	// typedef value_type const & const_reference;
protected:
	pointer p;
public:
	VectorItrerator() p(nullptr) {}
	template < class T, class Allocator = std::allocator<T> > class vector
	//vector の定義
	{
	template< typename L>class RandomAccessIterator
	// ンダムアクセスイテレータと呼ばれ、
	// 要素に順番にアクセスしたり、特定のインデックスに移動したりすることができます。
	{
	public:
		typedef	typename iterator_traits<L*>::value_type 	value_type;
	protected:
		pointer p;
	public:
		VectorIterator(): p(nullptr) {}
		VectorIterator(pointer p): p(p) {}
		VectorIterator(VectorIterator const &obj): p(obj.p) {}
		virtual ~VectorIterator() {}

		VectorIterator &operator=(VectorIterator const &obj)
		{
			this->p = obj.p;
			return (*this);
		}

		refence operator*()
		{
			return (*this -> p);
		}
		// IteratorTraitはRustプログラミング言語のトレイトで、
		// 値のコレクションをイテレーションするための基本メソッドを定義します。
		//  Iteratorトレイトは、配列、リンクトリスト、ハッシュマップなどを含む
		//  多種のデータ構造に対する共通のインターフェースを提供します。
		//   トレイトは、次の値を返す単一のメソッド、nextを定義します。これは、
		//   イテレーションの終わりに達した場合にはNoneが返されます。 
		//   Iteratorトレイトは、forループ、map、filter、foldなどの多くのRust
		//   プログラミングの慣用句で使用されます。

		// typedef	typename iterator_traits<L*>::pointer	pointer;
		// typedef	typename iterator_traits<L*>::pointer	reference;
		// typedef	typename iterator_traits<L*>::difference_type	difference_type;

		// typedef std::random_access_iterator_tag iterator_type;
	}
	}
}


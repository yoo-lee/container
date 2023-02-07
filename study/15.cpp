template < typename T >
void dynamic_allocate()
{
    // 1. その型のサイズ分のメモリーを確保
    void * ptr = ::operator new( sizeof(T) ) ;
    // 2. ポインターを型変換
    T * T_ptr = static_cast<T * >( ptr ) ;
    // 3. 適切な値を代入
    *T_ptr = T{} ;
    ::operator delete( ptr ) ;
}

int main()
{
    dynamic_allocate<int>() ;
    dynamic_allocate<double>() ;
}
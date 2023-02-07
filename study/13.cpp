class MyClass 
{
    int _a;
public:
    Foo(int a) : _a(a) {}
    template <typename T>
    void get(T& b) const
    {
        b = _a;
    }
};

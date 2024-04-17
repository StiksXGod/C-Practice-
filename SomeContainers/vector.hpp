
template <typename T>
class MyVector final{
    private:
    size_t _cap;
    size_t _size;
    T* arr;
    public:
    MyVector():_cap(1),_size(0),arr(new Data[_cap]){}
    MyVector(const MyVector& other):_size(other._size),_cap(other._cap),arr(new T[_cap]){
        for (size_t i = 0; i < _size; i++)
        {
            arr[i] = other.arr[i];
        }
    }
    MyVector(size_t size):_size(size),_cap(size),arr(new Data[_cap]){}
    MyVector(MyVector&& other) noexcept :_cap(other._cap),_size(other._size),arr(other.arr){
        other.arr = nullptr;
        other._size = 0;
        other._cap = 0;
    }
    MyVector& operator=(const MyVector& other){
        if (this==&other)
        {
            return *this;
        }
        _size = other._size;
        _cap = other._cap;
        arr = new T[_cap];
        for (size_t i = 0; i < _size; i++)
        {
            arr[i] = other.arr[i];
        }
        return *this;
    }
    MyVector& operator=(MyVector&& other){
        _size=other._size;
        _cap = other._cap;
        arr = other.arr;
        other.arr = nullptr;
        other._size = 0;
        other._cap = 0;
        return *this;
    }
    void push_back(const Data& other){
        if (_size==_cap)
        {
            reserve(_cap*2);
        }
        arr[_size++] = other;
        
    }
    void reserve(size_t new_cap){
        if(new_cap <= _cap){ return ;};
        T* new_arr = new T[new_cap];
        for (size_t i = 0; i < _size; i++)
        {
            new_arr[i] = arr[i];
        }
        _cap = new_cap;
        arr = new_arr;
    }
    size_t size() const noexcept{ 
        return _size;
    }
    size_t capacity() const noexcept{
        return _cap;
    }
    ~MyVector(){
        delete[] arr;
    }
    Data& operator[](size_t index)const noexcept{
        return *(arr+index);
    } 
    Data* begin() const noexcept{
        return arr;
    }
    Data* end() const noexcept{
        return arr+_size;
    }
};

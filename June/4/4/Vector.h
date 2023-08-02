#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class MyVector {
private:
    T* arr{};
    size_t length{};
    size_t capacity{};
public:
    MyVector(size_t capacity) {
        this->capacity = capacity;
    }

    MyVector(initializer_list<T> list) {
        this->capacity = list.size() * 2;
        this->length = list.size();
        this->arr = new T[this->capacity]{};

        for (auto i = list.begin(); i < list.end(); ++i) {
            this->arr[i - list.begin()] = *i;
        }
    }

    void pushBack(T element) {
        if (this->length == this->capacity) {
            this->capacity *= 2;
            T* new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < this->length; ++i) {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        this->arr[this->length] = element;
        this->length++;
    }

    void popBack()
    {
        this->arr[this->length] = 0;
        this->length--;
    }

    size_t size() const {
        return this->length;
    }

    bool empty()
    {
        if (this->length == 0)
            return true;
        else
            return false;
    }

    void clear()
    {
        this->arr = new T[this->capacity / 2];
        this->length = 0;
    }

    T at(size_t index)
    {
        if (index < this->length) {
            return this->arr[index];
        }
    }

    T front()
    {
        if (this->length != 0)
            return this->arr[0];
    }

    T back()
    {
        if (this->length != 0)
            return this->arr[this->length];
    }

    T* begin()
    {
        return &this->arr[0];
    }

    T* end()
    {
        return &this->arr[++this->length];
    }

    void insert(size_t index, int number)
    {
        if (index < this->length)
        {
            if (this->length == this->capacity) {
                this->capacity *= 2;
                T* new_arr = new T[this->capacity]{};
                for (size_t i = 0; i <= index; ++i) {
                    if (i == index)
                    {
                        new_arr[index] == number;
                        for (size_t j = ++index; j < this->length - index; j++)
                        {
                            new_arr[j] = this->arr[index--];
                        }
                    }
                    else
                        new_arr[i] = this->arr[i];
                }
                delete[] this->arr;
                this->arr = new_arr;
            }
            else
            {
                T* new_arr = new T[this->capacity]{};
                for (size_t i = 0; i < index; i++)
                    new_arr[i] = this->arr[i];
                for (size_t i = index; i < this->length; ++i) {
                    new_arr[i + 1] = this->arr[i];
                }
                delete[] this->arr;
                new_arr[index] = number;
                this->arr = new_arr;
                this->length++;
            }
        }
    }

    void erase(size_t index)
    {
        if (index < this->length)
        {
            for (size_t i = index; i < this->length; i++)
            {
                this->arr[i] = this->arr[i + 1];;
            }
            this->length--;
        }
    }

    friend ostream& operator<<(ostream& os, MyVector<T>& v) {
        for (size_t i = 0; i < v.length; ++i) {
            os << v.arr[i] << ' ';
        }
        return os;
    }

    T& operator[](size_t index) {
        if (index < this->length) {
            return this->arr[index];
        }
    }
};

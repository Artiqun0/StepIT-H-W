#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

template <typename T>
class Queue
{
public:
    Queue() = default;
    Queue& operator=(const Queue& other) = delete;

    Queue(uint16_t capacity, bool isExpandable = false)
    {
        this->capacity = capacity;
        this->arr = new T[capacity]{};
        this->isExpandable = isExpandable;
    }

    ~Queue()
    {
        delete[] this->arr; 
    }

    void push(T value)
    {
        if (this->size == this->capacity && !this->isExpandable)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        else
        {
            if (this->size == this->capacity && this->isExpandable)
            {

                this->capacity *= 2;

                T* newArr = new T[this->capacity]{};

                for (uint16_t i = 0; i < this->capacity; i++)
                {
                    newArr[i] = this->arr[i];
                }

                delete[] this->arr;
                this->arr = newArr;
            }
        }
        this->arr[this->size] = value;
        this->size++;
    }

    T pop()
    {
        if (this->size == 0)
        {
            cout << "Queue is empty" << endl;
            return T{};
        }

        T objForReturn = this->arr[0];

        for (size_t i = 0; i < this->size; i++)
        {
            arr[i] = arr[i + 1];
        }

        this->arr[this->size] = T{};

        this->size--;

        return objForReturn;
    }

    T peek(bool reset = false)
    {
        static uint16_t peekIterator = -1;

        if (reset) {
            peekIterator = 0;
        }

        if (this->size == 0)
        {
            cout << "Queue is empty" << endl;
            return T{};
        }
        if (peekIterator == this->size)
        {
            peekIterator = -1;
        }
        peekIterator++;
        return this->arr[peekIterator];
    }

    friend ostream& operator<<(ostream& os, Queue _Queue)
    {
        for (size_t i = 0; i < _Queue.getSize(); i++)
        {
            os << _Queue.peek();
        }

        return os;
    }

    uint16_t getSize() const
    {
        return this->size;
    }

private:
    T* arr{}; 
    uint16_t size{};
    uint16_t capacity{};
    bool isExpandable{ false };
};

int main()
{
    Queue<int> stack(5, true);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);


    cout << stack;

    return 0;
}
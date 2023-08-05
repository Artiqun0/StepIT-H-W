#include <string>
#include <iostream>

using namespace std;

template<typename T>
class MyList {
public:

    struct Node {
        Node* previous{};
        T data;
        Node* next{};

        Node(const T& _data, Node* _next = nullptr, Node* _previous = nullptr) {
            this->data = _data;
            this->next = _next;
            this->previous = _previous;
        }
    };

    MyList(T data) {
        this->head = new Node(data);
    }

    MyList(initializer_list<T> data) {
        for (const T* i = data.begin(); i < data.end(); ++i) {
            this->pushBack(*i);
        }
    }

    void pushBack(T data) {
        if (this->head == nullptr) {
            this->head = new Node(data);
            return;
        }

        Node* current = this->head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = new Node(data, nullptr, current);
    }

    friend ostream& operator<<(ostream& os, const MyList& list) {
        Node* current = list.head;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next;
        }
        return os;
    }
private:
    Node* head{};
};

int main()
{
    MyList<int> a{};

    cout << a;
}
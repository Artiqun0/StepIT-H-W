#include <iostream>

using namespace std;

template<typename T>
class BinaryTree {
public:
    struct Node {
        T data{};
        Node* left{};
        Node* right{};

        Node(T data) {
            this->data = data;
        }

        T getBool(bool a) {
            if (a)
                return this->right->data;
            else
                return this->left->data;
        }
    };

    friend ostream& operator<<(ostream& os, const Node& a) {
        os << a.data;
        return os;
    }

    BinaryTree() = default;

    BinaryTree(T data) {
        this->root = new Node(data);
    }

    bool tryAdd(T data) {
        if (this->root == nullptr) {
            this->root = new Node(data);
            return true;
        }
        else {
            Node* current = this->root;
            while (true) {
                if (data < current->data) {
                    if (current->left == nullptr) {
                        current->left = new Node(data);
                        return true;
                    }
                    else {
                        current = current->left;
                    }
                }
                else if (data > current->data) {
                    if (current->right == nullptr) {
                        current->right = new Node(data);
                        return true;
                    }
                    else {
                        current = current->right;
                    }
                }
                else {
                    return false;
                }
            }
        }
    }

    void edit(T edit, T data)
    {
        Node* current = this->root;
        while (true)
        {
            if (edit > current->data)
                current = current->right;
            else if (edit < current->data)
                current = current->left;
            else
            {
                current->data = data;
                break;
            }
        }
    }

    void del(T data) {
        Node* current = this->root;
        Node* parent = nullptr;

        while (current) {
            if (data > current->data) {
                parent = current;
                current = current->right;
            }
            else if (data < current->data) {
                parent = current;
                current = current->left;
            }
            else {
                break;
            }
        }

        if (!current)
            return;

        if (!current->left && !current->right) {
            if (parent) {
                if (parent->left == current)
                    parent->left = nullptr;
                else
                    parent->right = nullptr;
            }
            else {
                this->root = nullptr;
            }
            delete current;
        }
        else if (current->left && current->right) {
            Node* successor = current->right;
            Node* successorParent = current;

            while (successor->left) {
                successorParent = successor;
                successor = successor->left;
            }

            current->data = successor->data;

            if (successorParent->left == successor)
                successorParent->left = nullptr;
            else
                successorParent->right = nullptr;
            delete successor;
        }
        else {
            Node* child = (current->left) ? current->left : current->right;

            if (parent) {
                if (parent->left == current)
                    parent->left = child;
                else
                    parent->right = child;
            }
            else {
                this->root = child;
            }

            delete current;
        }
    }

private:
    Node* root{};

    template<typename U>
    friend ostream& operator<<(ostream& os, const BinaryTree<U>& tree);

    void printInOrder(Node* node, ostream& os) const {
        if (node) {
            os << node->data << " ";
            printInOrder(node->left, os);
            printInOrder(node->right, os);
        }
    }
};

template<typename T>
ostream& operator<<(ostream& os, const BinaryTree<T>& tree) {
    tree.printInOrder(tree.root, os);
    return os;
}


int main() {
    BinaryTree<int> a{};

    a.tryAdd(34);
    a.tryAdd(13);
    a.tryAdd(7);
    a.tryAdd(30);
    a.tryAdd(61);
    a.tryAdd(47);
    a.tryAdd(87);


    a.del(13);

    cout << a;

    return 0;
}
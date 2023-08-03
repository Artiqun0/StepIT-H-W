#include <iostream>

namespace dataType
{
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

        Node getRoot() const
        {
            return *this->root;
        }

    private:
        Node* root{};

        template<typename U>
        friend std::ostream& operator<<(std::ostream& os, const BinaryTree<U>& tree);

        void printInOrder(Node* node, std::ostream& os) const {
            if (node) {
                printInOrder(node->left, os);
                os << node->data << " ";
                printInOrder(node->right, os);
            }
        }
    };
    template<typename T>
    std::ostream& operator<<(std::ostream& os, const BinaryTree<T>& tree) {
        tree.printInOrder(tree.root, os);
        return os;
    }
}
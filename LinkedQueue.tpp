

#include "LinkedQueue.hpp"
#include <stdexcept>

template <typename T>
LinkedQueue<T>::LinkedQueue() {
    // TODO
    this->length = 0;
    this->head = nullptr;
    this->last = nullptr;

}

template <typename T>
LinkedQueue<T>::LinkedQueue(const LinkedQueue<T>& copyObj) {
    copy(copyObj);
}

template <typename T>
LinkedQueue<T>& LinkedQueue<T>::operator=(const LinkedQueue<T>& rightObj) {
    if (this != &rightObj) {
        clear();
        copy(rightObj);
    }
    return *this;
}

template <typename T>
LinkedQueue<T>::~LinkedQueue() {
    clear();
}

template <typename T>
T LinkedQueue<T>::back() const {
    // TODO
    if (this->last) {
        return this->last->value;
    }
     throw std::runtime_error("Queue is empty");
}

template <typename T>
void LinkedQueue<T>::clear() {
    // TODO
        while (!isEmpty()) {
            dequeue();
        }
}

template <typename T>
void LinkedQueue<T>::copy(const LinkedQueue<T>& copyObj) {
    // TODO
    if (copyObj.isEmpty()) {
        this->length = 0;
        this->head = nullptr;
        this->last = nullptr;
    } else {
        Node* current = copyObj.head;
        while (current != nullptr) {
            enqueue(current->value);
            current = current->next;
        }
    }

}

template <typename T>
void LinkedQueue<T>::dequeue() {
    // TODO
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    Node* temp = this->head;
    this->head = this->head->next;
    delete temp;
    this->length--;
        if (this->head == nullptr) {
            this->last = nullptr;
        }

    
}

template <typename T>
void LinkedQueue<T>::enqueue(const T& elem) {
    // TODO
    Node* newNode = new Node(elem);
    if (isEmpty()) {
        this->head = newNode;
        this->last = newNode;
    } else {
        this->last->next = newNode;
        this->last = newNode;
    }
    this->length++;

}

template <typename T>
T LinkedQueue<T>::front() const {
    // TODO

    if (this->head) {
        return this->head->value;
    }
     throw std::runtime_error("Queue is empty");



}

template <typename T>
int LinkedQueue<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedQueue<T>::isEmpty() const {
    return this->length == 0;
}

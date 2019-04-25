using namespace std;

template<typename T>
List<T>::List() {
    first = nullptr;
    last = nullptr;
    curr = nullptr;
}

template<typename T>
void List<T>::add(T data) {
    if(!first) {
        /*! Si la lista esta vacia */
        first = new Node<T>;
        first->data = data;
        first->next = nullptr;
        last = first;
    } else {
        /*! Si la lista NO esta vacia */
        if(last == first) {
            /*! Si la lista tiene solo UN elemento */
            last = new Node<T>;
            last->data = data;
            last->next = nullptr;
            first->next = last;
        } else {
            /*! Si la lista tiene mas de un elemento */
            Node<T>* newData = new Node<T>;
            newData->data = data;
            newData->next = nullptr;
            last->next = newData;
            last = newData;
        }
    }
}

template<typename T>
void List<T>::deleteNode(T data) {
    if (first != nullptr) {
        Node<T> *auxDelete = first;
        curr = nullptr;

        while ((auxDelete != nullptr) && (auxDelete->data != data)) {
            curr = auxDelete;
            auxDelete = auxDelete->next;
        }

        /*! No se encontró el elemento*/
        if (auxDelete == nullptr) {
            cout << "El elemento no existe"<<endl;
        } else if (curr == nullptr) {
            /*! El elemento es el primero de la lista */
            if(first == last){
                first = nullptr;
                last = nullptr;
                delete(auxDelete);
            } else {
                first = first->next;
                delete (auxDelete);
            }
        } else if(auxDelete == last) {
            /*! El elemento esta al final*/
            last = curr;
            curr->next = auxDelete->next;
            delete(auxDelete);
        } else{
            /*!El elemento esta en el medio*/
            curr->next = auxDelete->next;
            delete(auxDelete);
        }
    }
}

template <typename T>
void List<T>::deleteIndex(int index) {
    if (first != nullptr) {
    Node<T>* auxDelete = first;

        int count=0;
        while ((auxDelete != nullptr) && index != count) {
            curr = auxDelete;
            auxDelete = auxDelete->next;
            count++;
        }

        if (index == 0) {
            /*! El elemento es el primero de la lista */
            first = first->next;
            delete(auxDelete);

            if(first == nullptr){
                last = nullptr;
                return;
            }
        }else if(auxDelete == last) {
            /*! El elemento esta al final*/
            curr->next = nullptr;
            last = curr;
            delete(auxDelete);
            return;
        } else{
            /*!El elemento esta en el medio*/
            curr->next = auxDelete->next;
            delete(auxDelete);
            return;
        }
    }
}

template<typename T>
Node<T>* List<T>::getNode(int index) {
    if(index == 0) {
        /*! El primer elemento de la lista */
        return first;
    } else {
        /*! Si el elemento esta en el medio o final de la lista */
        curr = this->first;
        for(int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr;
    }
}

template<typename T>
T List<T>::getData(int index) {
    if(index == 0) {
        return this->first->data;
    } else {
        curr = this->first;
        for(int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->data;
    }
}

template<typename T>
void List<T>::show(){
    curr = first;
    while (curr!= nullptr){
        cout << curr->getValue()<<endl;
        curr = curr->getNext();
    }
}

template<typename T>
int List<T>::size(){
    curr = first;
    int count=0;

    while(curr != nullptr){     /*! La lista se recorre con .getNext() y se tiene un contador para que
                                 *  crezca segun se recorra la lista*/
        curr = curr->getNext();
        count=count+1;
    }

    //cout<<"El tamaño de la lista es"<<count<<endl;
    return count;
}

template<typename T>
T List<T>::operator [](int index) {
    return getData(index);
}
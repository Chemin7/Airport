#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "person.h"

class Node {
    public:
        Person data;
        Node* next;
    };
#endif // NODE_H_INCLUDED

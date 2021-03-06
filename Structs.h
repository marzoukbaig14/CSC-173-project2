#ifndef STRUCTS_H_
#define STRUCTS_H_


typedef char* String;
typedef enum Type Type;
typedef struct State* State;
typedef struct Table* Table;
typedef struct Node* Node;

enum Type {

    E, ET, C, CT, S, ST, A, X, TERMINAL

};

struct Node {
    Type type;
    char c;
    Node leftNode;
    Node centreNode;
    Node rightNode;

};

struct State {

    char* expression;
    int idx;
};

struct Table {

    int ** table_driver;
    char* input_symbols;
    char** category_symbols;
    char** productions;
}


#endif /* STRUCTS_H_ */

#ifndef MAP_H
#define MAP_H
#include "constants.h"

template <typename T>
class Node
{
    int key;
    T value;
public:
    Node();
    ~Node();
    bool isEmpty() const;
    void setNode(const int key, const T value);
    int getKey() const;
    T getValue() const;
};

template <typename T>
Node<T>::Node()
: key(-1), value(T())
{}

template <typename T>
Node<T>::~Node<T>()
{
    Node::key = -1;
}

template <typename T>
bool Node<T>::isEmpty() const { return (Node::key == -1); }

template <typename T>
void Node<T>::setNode(const int k, T v)
{
    Node::key = k;
    Node::value = v;
}

template <typename T>
int Node<T>::getKey() const { return Node::key; }

template <typename T>
T Node<T>::getValue() const { return Node::value; }

//Ends Node Class/////////////////////////////////////////////////////

template <typename T>
class Map
{
    QVector < Node<T> > table;
    int tableSize;
    int currentSize;

    int hash1(const int key);
    int hash2(const int key);
public:
    static Map& instance();

    Map(int);
    ~Map();
    void clearContents();
    QVector < Node<T> > mapTable();
    bool isFull() const;
    void insertNode(const int key, const T value);
    void removeHash(const int key);
    void removeHash(const QString value);
    int getSize() const;
    void print() const;
};

template <typename T>
Map<T>& Map<T>::instance()
{
    static Map<T> mapInstance(79);
    return mapInstance;
}

template <typename T>
Map<T>::Map(int size)
: tableSize(size), currentSize(0)
{table.resize(size);}

template <typename T>
Map<T>::~Map<T>()
{
    Map::table.clear();
    Map::tableSize = 0;
    Map::currentSize = 0;
}

template <typename T>
void Map<T>::clearContents()
{
    for(int i = 0; i < Map::currentSize; ++i)
        Map::table[i].setNode(-1, T());
    Map::currentSize = 0;
}

template <typename T>
QVector < Node<T> > Map<T>::mapTable() { return Map::table; }

template <typename T>
bool Map<T>::isFull() const { return (Map::currentSize == Map::tableSize); }

template  <typename T>
void Map<T>::insertNode(const int key, const T value)
{
    if( !Map::isFull() )
    {
        int index = Map::hash1(key);

        if(!Map::table[index].isEmpty() &&
           Map::table[index].getKey() == key)
        {
            int index2 = hash2(key);
            int i = 1;
            bool collision = true;

            while( collision )
            {
                int newIndex = (index + i * index2) % Map::tableSize;

                if(Map::table[newIndex].getKey() == -1)
                {
                    Map::table[newIndex].setNode(key+1, value);
                    collision = false;
                }
                ++i;
            }
        }
        else
            Map::table[index].setNode(key, value);

        ++Map::currentSize;
    }
}

template <typename T>
void Map<T>::removeHash(const int key)
{
    bool found = false;
    int i = 0;

    while( !found && i < Map::tableSize)
    {
        if(Map::table[i].getKey() == key)
        {
            found = true;
            Map::table[i].setNode(-1, T());
            --Map::currentSize;
        }
        ++i;
    }
}

template <typename T>
void Map<T>::removeHash(const QString value)
{
    bool found = false;
    int i = 0;

    while( !found && i < Map::tableSize )
    {
        if(Map::table[i].getValue() == value)
        {
            found = true;
            Map::table[i].setNode(-1, T());
            --Map::currentSize;
        }
        ++i;
    }
}

template <typename T>
int Map<T>::getSize() const { return Map::currentSize; }

template <typename T>
int Map<T>::hash1(const int key) { return (key % Map::tableSize); }

template <typename T>
int Map<T>::hash2(const int key) { return (11 - (key % 11)); }

template <typename T>
void Map<T>::print() const
{
    int index = 0;
    while( index < Map::tableSize )
    {
        if( !Map::table[index].isEmpty() )
            qDebug() << Map::table[index].getKey() << " - " << Map::table[index].getValue();
        ++index;
    }
}

#endif // MAP_H

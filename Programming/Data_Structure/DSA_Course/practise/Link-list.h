#include "iostream"
#include "string"
class Node
{
public:
    Node(/* args */) = default;
    ~Node() = default;
    std::string data; 
    Node* next;
};

class LinkListAdt
{
private:
    /* Data of LinkList  */
    Node* head, tail; 
public:
    LinkListAdt(/* args */) = default;
    ~LinkListAdt() = default;
    /* Methods */
    void inSertAtegin(const std::string& data);
    void inSertAtEnd(const std::string& data);
    void inSertAtPostion( unsigned int pos, data); 
    void deleteAtPosition(unsigned int pos);
    void getAtPosition(unsigned int pos);
    bool isDataPresent(const std:string&data);
    void printList();
};


void LinkListAdt::inSertAtegin(const std::string& data)
{

}
void LinkListAdt::inSertAtEnd(const std::string& data)
{

}
void LinkListAdt::inSertAtPostion( unsigned int pos, data)
{

} 
void LinkListAdt::deleteAtPosition(unsigned int pos)
{

}
void LinkListAdt::getAtPosition(unsigned int pos)
{

}
bool LinkListAdt::isDataPresent(const std::string&data){

}
void LinkListAdt::printList()
{

}
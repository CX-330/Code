#ifndef _QUEUE0_
#define _QUEUE0_
typedef int Item;
class Queue
{
    enum{Q_SIZE = 10};
    struct Node {
        Item item;
        struct Node* next;
    };
    Node* front;
    Node* rear;
    int items;
    const int qsize;
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item& item);     //����ĩβ���
    bool dequeue(Item& item);           //�����ײ���ɾ��
};
#endif // !_QUEUE0_

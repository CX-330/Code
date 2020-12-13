#pragma once

#ifndef _STACK0_
#define _STACK0_

struct customer {
    char fullname[35];
    double payment;
};

typedef customer SKtype; // ջ�����ͣ����޸�
const int SKSize = 20;  // Ĭ��ջ�ռ��СΪ20
class Stack {
    SKtype* space;
    int top;
    int size;
public:
    Stack(int Size = SKSize); //���캯��
    ~Stack();       //��������
    bool isfull() const;        //���ջ�Ƿ������������򷵻�1�����򷵻�0
    bool isempty() const;       //���ջ�Ƿ�Ϊ�գ��Ƿ���1�����򷵻�0
    bool push(const SKtype& value);    //��ջ��ѹ��value���ɹ�����1��ʧ�ܷ���0
    bool pop(SKtype& value);     //��ջ��value���ɹ�����1��ʧ�ܷ���0
    void show() const;          //��ջչʾ����
};

#endif // !_STACK_

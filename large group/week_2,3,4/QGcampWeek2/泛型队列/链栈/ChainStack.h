#pragma once
#include <string>
// 定义链栈节点
struct Node {
    char data;
    Node* next;
};

// 链栈类
class ChainStack {
private:
    Node* top;

public:
    ChainStack() : top(nullptr) {}
    // 压入栈
    void push(char c);
    // 弹出栈
    char pop();
    // 获取栈顶元素
    char peek();
    // 判断栈是否为空
    bool isEmpty();
    // 清空栈
    void clearStack();
    // 输出栈的元素
    void printStack();
};

// 以下的是用于计算器的函数

// 判断运算符优先级(括号会另外做处理)
int precedence(char op);
// 计算表达式值
void evaluateExpression(const std::string& expression,ChainStack number);

//���һ��������counter�������Ա�������������ʵ�ּ�����������������Ԫ����ʵ�ּ��������Լ���
#include<iostream>
using namespace std;
class Counter{
    private:
        int n;
    public:
        Counter(int i=0):n(i){};
    Counter operator++();
        Counter operator++(int);
        friend Counter operator--(Counter &c);
        friend Counter operator--(Counter &c,int);
        void display();
};
Counter Counter::operator++(){
    ++n;
    return *this;
}
Counter Counter::operator++(int){
//    ǰ�� ++ ��������Ҫ int ���͵�ռλ���������� ++ ������Ҫһ�� int ���͵�ռλ������
    n++;
    return *this;
}
Counter operator--(Counter &c){
    --c.n;
    return c;
}
Counter operator--(Counter &c,int){
    c.n--;
    return c;
}
void Counter::display(){
    cout<<"counter number="<<n<<endl;
}
int main(int argc, char const *argv[])
{
    Counter a;
    ++a;
    a.display();
    a++;
    a.display();
    --a;
    a.display();
    a--;
    a.display();
    system("pause");
    return 0;
}
/*
counter number=1
counter number=2
counter number=1
counter number=0*/

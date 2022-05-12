//
// Created by nuo_nuaa on 2022/5/12.
//
//���һ���ַ�����String��ͨ�����������ʵ���ַ��������롢����Լ�+=��==��!=��<��>��>=��[ ]�����㡣
#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    int len;
    char *sPtr;
    void setStr(const char *sPtr2);
    friend ostream &operator<<(ostream &os,const String &str);
    friend istream &operator>>(istream &is,String &str);

public:
//    String()
//    {
//        len=0;
//        sPtr= nullptr;
//    }
    String(const char* p= "")
    {
        len = strlen(p);
        sPtr = new char[len+1];
        strcpy(sPtr,p);
    }
    ~String()= default;;
    const String &operator+=(const String &str);
    bool operator>(const String &str);
    bool operator<(const String &str);
    bool operator==(const String &str);
    bool operator>=(const String &str);
    bool operator<=(const String &str);
    bool operator!=(const String &str);
    bool operator!() const {return len==0;}
    char &operator[](const int n);

};

const String & String::operator+=(const String &str)
{
//    char* tmp=this->sPtr;
//    this->sPtr=new char[len+1];
//    strcpy(this->sPtr,tmp);
    strcat(this->sPtr,str.sPtr);
    this->len +=strlen(str.sPtr);
//    delete[] tmp;

    return *this;
}

ostream &operator<<(ostream &os,const String &str)
{
    os<< str.sPtr;
    os<< ". The length is "<<str.len;
    return os;
}

istream &operator>>(istream &is,String &str)
{
    is>>str.sPtr;
    return is;
}

bool String::operator>(const String &str)
{
    return strcmp(this->sPtr,str.sPtr) > 0;
}

bool String::operator<(const String &str)
{
    return strcmp(this->sPtr,str.sPtr) < 0;
}

bool String::operator==(const String &str)
{
    return strcmp(this->sPtr,str.sPtr) == 0;
}

bool String::operator>=(const String &str)
{
    return !(*this<str);
}

bool String::operator<=(const String &str)
{
    return !(*this>str);
}

bool String::operator!=(const String &str)
{
    return !(*this==str);
}

char &String::operator[](const int n)
{
    if (n>len)
        cout<<"out of scoop"<<endl;
    else if(n<0)
        cout<<"num less than 0"<<endl;
    return this->sPtr[n];
}

int main()
{
    String s1("happy"), s2("new year"), s3;
    cout << "s1 is " << s1 << "\ns2 is " << s2 << "\ns3 is " << s3
         << "\n�Ƚ�s2��s1:"
         << "\ns2 ==s1����� " << (s2 == s1 ? "true" : "false")
         << "\ns2 != s1����� " << (s2 != s1 ? "true" : "false")
         << "\ns2 >  s1����� " << (s2 > s1 ? "true" : "false")
         << "\ns2 <  s1����� " << (s2 < s1 ? "true" : "false")
         << "\ns2 >= s1����� " << (s2 >= s1 ? "true" : "false");
    cout << "\n\n����s3�Ƿ�Ϊ��: ";
    if (!s3)
    {
        cout << "s3�ǿմ�" << endl; //L3
        cout << "��s1����s3�Ľ���ǣ�";
        s3 = s1;
        cout << "s3=" << s3 << "\n"; //L5
    }
    cout << "s1 += s2 �Ľ���ǣ�s1="; //L6
    s1 += s2;
    cout << s1; //L7

    cout << "\ns1 +=  to you �Ľ���ǣ�"; //L8
    s1 += " to you";
    cout << "s1 = " << s1 << endl; //L9
    s1[0] = 'H';
    s1[6] = 'N';
    s1[10] = 'Y';
    cout << "s1 = " << s1 << "\n"; //L10
    cin>>s1;
    system("pause");
    return 0;
}


/*
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;
using std::fstream;


class Equal{
public:
    //bool operator()(const string &s, size_t k){
    //    return s.size()==k;
    //}
    bool operator()(const string &s, size_t m, size_t n){
        return s.size()>m && s.size()<n;
    }
};

int main()
{
    fstream in("test1");
    int count = 0;
    int m,n;
    std::cin>>m>>n;
    Equal obj;
    string s1;
    string s2;
    while(in){
        std::getline(in,s1);
        std::istringstream record(s1);
        while(record>>s2){
            if(obj(s2,m,n))
                ++count;
        }
    }
    std::cout<<count<<std::endl;
    return 0;
}
*/

/*
#include <iostream>
#include <functional>
#include <string>
#include <map>

using std::map;
using std::string;
using std::function;

int main()
{
    map<string, function<int(int, int)>> binops = {
        {"+", std::plus<int>()},
        {"-", std::minus<int>()},
        {"*", std::multiplies<int>()},
        {"/", std::divides<int>()},
        {"%", std::modulus<int>()}
    };
    int first,second,result;
    string s;
    std::cin>>first>>s>>second;
    std::cout<<binops[s](first,second)<<"\n";
   // *
    switch (ch){
    case '+':
        result = binops["+"](first,second);
        std::cout<<result<<"\n";
        break;
    case '-':
        result = binops["-"](first,second);
        std::cout<<result<<"\n";
        break;
    case '*':
        result = binops["*"](first,second);
        std::cout<<result<<"\n";
        break;
    case '/':
        result = binops["/"](first,second);
        std::cout<<result<<"\n";
        break;
    case '%':
        result = binops["-"](first,second);
        std::cout<<result<<"\n";
        break;
    default:
        std::cout<<"error"<<"\n";
    }
    // *
    return 0;
}
*/

/*
#include <iostream>

class A{
public:
    A()=default;
    int print(){
        std::cout<<"A::print"<<std::endl;
        return a;
    }
private:
    int a=0;
    int b=0;
};

class B:public A{
public:
    B()=default;
    B(int m):c(m){}
    int fun(B &s){
       std::cout<<this->c<<std::endl;
       //无论以什么方式继承的基类，派生类中的成员函数内都可以实现派生类到基类的类型转换
       A as = s;
       return as.print();
    }
    int print(){
        std::cout<<"B::print"<<std::endl;
        return c;
    }
private:
    int c = 1;
};

void fun2(A &aa)
{
    std::cout<<"fun2----"<<aa.print()<<std::endl;
}

int main()
{
    A a;
    B b(3);
    B b1;
    //只有当public继承时，类外对象才能使用派生类到基类的类型转换
    fun2(b);
    std::cout<<b.fun(b1)<<std::endl;
    return 0;
}
*/

//实现一个find函数的模板
#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::iterator;

//I代表迭代器类型，T代表所传值的类型
template <typename I,typename T> I find(I begin, I end, T value)
{
    for (;begin!=end;++begin){
        if(*begin == value)
            return begin;
    }
    return end;
}

int main()
{
    vector<int> v1={1,2,3,4,5,6,7};
    //iterator iter = find(v1.begin(), v1.end(),5);
    std::cout<<*find(v1.begin(), v1.end(),5)<<std::endl;
    return 0;
}

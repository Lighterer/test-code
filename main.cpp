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
   /*
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
    */
    return 0;
}


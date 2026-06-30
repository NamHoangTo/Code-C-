#include <cstdio>
#include <iostream>
namespace mystd {
    class ostream {
    public:
        ostream& operator<<(const char* s){
            printf("%s", s);
            return *this;
        }
        ostream& operator<<(unsigned int x){
            printf("%u", x);
            return *this;
        }
        ostream& operator<<(double x){
            printf("%lf", x);
            return *this;
        }
    };
    class istream {
    public:
        istream& operator>>(int& x){
            scanf("%d", &x);
            return *this;
        }
        istream& operator>>(double& x) {
            scanf("%lf", &x);
            return *this;
        }
        istream& operator>>(char* s) {
            scanf("%s", s);
            return *this;
        }
    };
    class iostream: public istream, public ostream{
    };

    ostream cout;
}
enum Color{
    Red,
    Blue,
    Green
};
class A {
    public:
        using type_value = long long;
};
class B {
    public:
        using type_value = double;
};
template<typename Apple>
void f(){
    std::cout << typeid(typename Apple::type_value).name();
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    const volatile unsigned int a = Green;
    mystd::ostream cout;
    // cout.operator<<(a);
    unsigned int b = 0b0100010;
    unsigned int c = 0b1110100;
    int d = c ^ b;
    std::cout << d;
    f<class B>();
    return 0;
}
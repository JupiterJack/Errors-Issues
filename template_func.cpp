#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b)
{
     T temp = a;
     a = b;
     b = temp;

}

/*void swap(string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}*/

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    std::string first_name = "Jupiter";
    std::string last_name = "Jack";
    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;
    
    return 0;
}

// more than one instance of overloaded function "swap" matches the argument list: -- function template "void swap(T &a, T &b)" 
// (declared at line 7) -- function template "void std::swap(_Ty &, _Ty &)" (declared at line 102 of "C:\PROGRAM FILES (X86)
// \MICROSOFT VISUAL STUDIO\2019\BUILDTOOLS\VC\TOOLS\MSVC\14.29.30037\INCLUDE\utility") -- argument types are: (int, int)
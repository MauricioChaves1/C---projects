#include <iostream>
#include <vector>

using text_t = std::string;
using number_t = int;

int main()
{

    text_t object = "galho";

    if (object == "pluma" || object == "pena" || object == "gato")
    {
        std::cout << "enter here";
    }
    else
    {
        std::cout << "enter here it this no make nothing with " << object;
    }
}
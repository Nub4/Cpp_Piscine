#include <iostream>
#include <string>

struct  Data
{
    Data() : x(50), y(60) {}
    int   x;
    int   y;
};

std::intptr_t   serialize(Data *ptr){
    return reinterpret_cast<std::intptr_t>(ptr);
}

Data    *deserialize(std::intptr_t raw){
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data data;

    std::intptr_t raw = serialize(&data);
    Data *ptr = deserialize(raw);

    std::cout << "data.y = " << data.y << "\nptr.y = " << ptr->y << std::endl;
    std::cout << "data.x = " << data.x << "\nptr.x = " << ptr->x << std::endl;
    std::cout << "data address = " << &data << "\nptr address = " << &ptr << std::endl;
    return 0;
}
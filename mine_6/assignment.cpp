#include <iostream>
class dynamic_array
{
private:
    size_t size {};
    double *array{nullptr};

public:
    dynamic_array()
        {std::cout<<"Default constructor"<<std::endl;}
    dynamic_array(size_t s);
    ~dynamic_array()
        {std::cout<<"Destructor"<<std::endl; delete[] array;}
    size_t length() const {return size;}
    double& operator[](size_t i);
}

dynamic_array::dynamic_array(size_t s)
{
std::cout<<"Parameterized constructor"<<std::endl;
if (s<1) {
    std::cerr<<"Error: trying to declare an array of size 0 or less"<<std::endl;
    throw("Error: trying to declare an array of size 0 or less");
}
size = s;
array = new double[size];
for(size_t i{}; i<size; i++)
    array[i] = 0.0;
}


double &dyanmic_array::operator[](size_t i)
{
    if (i<0 || i>=size) {
        std::cerr<<"Error: trying to access an element out of bounds"<<std::endl;
        throw("Error: trying to access an element out of bounds");
    }
    
}

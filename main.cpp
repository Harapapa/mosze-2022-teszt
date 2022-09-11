#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'    //"1-100 ertek duplazasa" ;
    for (int i = 0;)   //hianyos a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)   //for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i]  //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

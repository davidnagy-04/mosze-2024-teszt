#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //  _ hiányzik
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    
    for (int i = 0; i < b.length; i++) // tömb hossz tartó ciklus hiányzása
    {
        std::cout << "Ertek:"<< b[i] ;// tömb hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
	std::cout << 'sor kiiras'
        return 0;
}
 
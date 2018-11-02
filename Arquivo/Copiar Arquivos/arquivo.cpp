#include <iostream>
#include <fstream>

int main() {
    std::ifstream s;
    
    s.open("texto.txt", std::ifstream::binary);
    
    if(!s.is_open()) {
        std::cout << "Arquivo não pôde ser aberto." << std::endl << std::endl;
        s.close();
        return -1;
    }
    
    s.seekg(0, s.end);
    int sz = s.tellg();
    s.seekg(0, s.beg);
    
    char dados[sz];
    
    s.read(dados, sz);
    
    s.close();
    
    std::ofstream sb;
    
    sb.open("texto_bkp.txt", std::ofstream::binary);
    
    if(!sb.is_open()) {
        std::cout << "Arquivo não pôde ser aberto." << std::endl << std::endl;
        s.close();
        return -1;
    }
    
    sb.write(dados, sz);
    
    sb.close();
    
    return 0;
}

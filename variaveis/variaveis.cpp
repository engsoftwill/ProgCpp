#include <iostream>
#include <typeinfo>       // operador typeid
#include <limits>       // std::numeric_limits
using namespace std;


int main(){

    
    short       num1;
    int         num2;
    double      num3;
    float       num4;
    long        num5;
    long double num6; 
    long long   num7;
    int8_t      num8bits;
    int16_t     num16bits;
    int32_t     num32bits;
    int64_t     num64bits;

    char a;
    char b[12];
    //mude num1 por cada uma das variaveis acima e descubra o tamanho de cada uma.
    cout<< "tipo da sua variavel é " << typeid(num7).name() << " e seu tamanho é de " <<sizeof(num7) <<"bytes" << endl ; // cout � funcao de saida do c++ endl pula linha
    cout<< "retorna o maior valor possivel a ser representado com o tipo definido: " <<numeric_limits<unsigned long long>::max();
    return 0;
    }

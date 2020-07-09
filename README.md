Curso generalista com introdução a diversos tópicos do C++ , exercícios e links de cursos online

Para realizar o curso será necessário um editor de texto (recomendo o VSCODE);
Para a instalação em linux o compilador gcc já vem instalado basta verificar no curso de Programaçao em C como atualizá-lo.
Em Windows se faz necessário a instalação do MinGW, neste repositório existe o instalador mingw-get-setup.exe , mas você pode encontrá=lo em https://osdn.net/projects/mingw/releases/
Uma vez instalado é necessário Abrir o Painel de Controle, Abrir "Editar as Variaveis de Ambiente do Sistema" , clicar em "Variaveis do Sistema", procurar pela variavel Path e adicionar em seu contéudo o caminho "C:\MinGW\bin".

A preparação do VSCode passa pela instalação de 3 Extenções:
C/C++ da Microsoft
C/C++ Compile Run de Danielpinto8zz6
Code Runner de JunHan
Uma vez instalado estas extenções crie um novo arquivo.c e digite:

#include <iostream>
int main(){
    std::cout<<"Hello World"<< std::endl;
    return 0;
    }

Aperte F6 e veja o programa compilar e rodar;

Links com cursos gratuitos de C
https://www.mentebinaria.com.br/treinamentos/programa%C3%A7%C3%A3o-moderna-em-c/#:~:text=C%20%C3%A9%20uma%20linguagem%20de,de%20base%20escritas%20nesta%20linguagem
https://onedaycode.com/events/curso-completo-de-linguagem-c-e-c-iniciante-ao-avancado/

Links com cursos gratuitos de C++
http://www.inf.ufpr.br/lesoliveira/download/c-completo-total.pdf
https://onedaycode.com/events/curso-completo-de-linguagem-c-e-c-iniciante-ao-avancado/
https://www.udemy.com/course/orientacao-a-objetos-c/learn/lecture/6895474?start=225#overview

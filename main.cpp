#include <iostream>

int main(){

    const std::string DESIGN = "\n⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ \n";
    const std::string TITLE =  "⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒⇒ Bem-Vindo ao meu programa!⇒ ⇒ ⇒ ⇒ ⇒ ⇒ ⇒⇒ ⇒ ⇒ ⇒ ⇒ ";
    int x, y, soma, sub, div;
    double mult;

    std::cout << DESIGN << TITLE << DESIGN << std::endl;

    std::cout << "Digite um número: ";
    std::cin >> x;
    std::cout << "Digite um número: ";
    std::cin >> y;

    soma = x + y;
    sub = x - y;
    div = x / y;
    mult = double(x) * double(y);

    std::cout << "A Soma entre " << x << " + " << y << " = " << soma << std::endl;
    std::cout << "A Subtração entre " << x << " - " << y << " = " << sub << std::endl;
    std::cout << "A Divisão entre " << x << " / " << y << " = " << div << std::endl;
    std::cout << "A Divisão entre " << x << " * " << y << " = " << mult << std::endl;

    std::system("cowsay -f dragon 'I love pizza!'");

    return 0;
}
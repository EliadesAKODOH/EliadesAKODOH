#include <iostream>
#include <string>

int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int inverseModulo(int a, int m) {
    for (int x = 1; x < m; x++)
        if ((a * x) % m == 1)
            return x;
    return -1;

char chiffrementAffine(char lettre, int a, int b) {
    if (isalpha(lettre)) {
        char base = isupper(lettre) ? 'A' : 'a';
        return (a * (lettre - base) + b) % 26 + base;
    }
    return lettre;
}

std::string chiffrementAffineString(const std::string &message, int a, int b) {
    std::string chiffre = "";
    for (char lettre : message) {
        chiffre += chiffrementAffine(lettre, a, b);
    }
    return chiffre;
}

int main() {
    int a, b;

    std::cout << "Entrez la valeur de a (premier paramètre) : ";
    std::cin >> a;
    std::cout << "Entrez la valeur de b (deuxième paramètre) : ";
    std::cin >> b;

    if (pgcd(a, 26) != 1) {
        std::cerr << "La valeur de 'a' n'est pas acceptable. Choisissez une autre valeur.\n";
        return 1;
    }

    std::string message;
    std::cout << "Entrez le message à chiffrer (y compris les espaces) : ";
    std::cin.ignore();
    std::getline(std::cin, message);

    std::string messageChiffre = chiffrementAffineString(message, a, b);

    std::cout << "Message chiffré : " << messageChiffre << std::endl;

    return 0;
}

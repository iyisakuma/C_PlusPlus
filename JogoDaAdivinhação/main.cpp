
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Welcome to guessing game !" << endl;

    const int NUMERO_SECRETO = 42;

    int nroChute;
    int tentativas = 0;
    bool nao_acertou;
    double pontos = 1000.0;

    do
    {

        tentativas++;
        cout << "What's your guess?" << endl;
        cin >> nroChute;
        double pontos_perdidos = abs(NUMERO_SECRETO - nroChute) / 2.0;
        pontos = pontos - pontos_perdidos;
        nao_acertou = nroChute != NUMERO_SECRETO;
        if (!nao_acertou)
        {
            cout << "Congratulations!" << endl;
        }
        else
        {
            bool menor = nroChute < NUMERO_SECRETO;
            if (menor)
            {
                cout << "Your guess is lower than secret number" << endl;
            }
            else
            {
                cout << "Yout guess is greater than secret number" << endl;
            }
        }

        cout << "Tries: " << tentativas << endl;
    } while (nao_acertou);

    cout << "End Game in " << tentativas << " tries " << endl;
    cout << "Secrete number: " << NUMERO_SECRETO << endl;
    cout.precision(2);
    cout << fixed;
    cout<< "Points: "  << pontos << endl;
    return 0;
}

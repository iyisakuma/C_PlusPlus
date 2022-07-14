
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Welcome to guessing game !" << endl;

    const int NUMERO_SECRETO = 42;

    int nroChute;
    int tentativas = 0;
    bool nao_acertou;
    do
    {

        tentativas++;
        cout << "What's your guess?";
        cin >> nroChute;
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
    return 0;
}

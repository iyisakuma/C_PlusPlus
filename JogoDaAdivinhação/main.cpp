
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo de advinhacao! *" << endl;
    cout << "*************************************" << endl;

    cout << "Escolha o seu nivel de dificuldade" << endl;
    cout << "Facii (F), Medio (M) ou Dificil (D)" << endl;
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;
    switch (dificuldade)
    {
    case 'F':
        numero_de_tentativas = 15;
        break;
    case 'M':
        numero_de_tentativas = 10;
        break;
    case 'D':
        numero_de_tentativas = 5;
        break;
    }
    srand(time(NULL));
    const int NUMERO_SECRETO = rand()%100;

    cout<< "Numero secreto: " << NUMERO_SECRETO << endl;


    int nroChute;
    int tentativas = 0;
    bool nao_acertou;
    double pontos = 1000.0;

    do
    {

        tentativas++;
        cout << "Qual seu chute?" << endl;
        cin >> nroChute;
        double pontos_perdidos = abs(NUMERO_SECRETO - nroChute) / 2.0;
        pontos = pontos - pontos_perdidos;
        nao_acertou = nroChute != NUMERO_SECRETO;
        if (!nao_acertou)
        {
            cout << "Parabens voce acertou o numero magico!" << endl;
        }
        else
        {
            bool menor = nroChute < NUMERO_SECRETO;
            if (menor)
            {
                cout << "O numero inserido eh menor que o numero magico" << endl;
            }
            else
            {
                cout << "O numero inserido eh maior que o numero magico" << endl;
            }
        }

        cout << "Tentativa Nro: " << tentativas << endl;
    } while (nao_acertou && tentativas < numero_de_tentativas);

    cout << "Fim do jogo " << endl;
    if (nao_acertou)
    {
        cout << "Voce perdeu! Tente Novamente!" << endl;
    }
    else
    {
        cout << "Secrete number: " << NUMERO_SECRETO << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Points: " << pontos << endl;
    }

    return 0;
}

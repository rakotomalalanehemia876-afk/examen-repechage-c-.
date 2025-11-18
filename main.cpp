#include <iostream>

using namespace std;

int main()
{
    string phrase, remplacer, nouveauM;
    int longueurPhrase;
    bool motTrouve=false;

    cout << "Phrase initiale : " << endl;
    getline(cin, phrase);
    cout << "Mot a remplacer : " << endl;
    getline(cin, remplacer);
    cout << "Nouveau mot : " << endl;
    getline(cin, nouveauM);

    longueurPhrase = phrase.length();

    size_t pos = phrase.find(remplacer);
    while (pos != string::npos)
    {
        phrase.replace(pos, remplacer.length(), nouveauM);
        pos = phrase.find(remplacer, pos + nouveauM.length());
        motTrouve = true;
    }

    if (motTrouve) {
        cout << "La phrase modifie est : \n" << phrase << endl;
    } else {
        cout << "Le mot \"" << remplacer << "\" n'existe pas dans cette phrase." << endl;
    }

    return 0;
}

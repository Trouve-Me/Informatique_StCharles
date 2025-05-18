#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b[11];
    while (a != 5) {
        cout << "Menu\n1. Introduire des numeros\n2. Affichage des nombres rentres\n3. Tri et affichage des nombres dans l'ordre croissant\n4. Demande et confirmation d'un numero\n5. Quitter\nQuel est votre choix ? : ";
        cin >> a;
        switch(a)
        {
        case 1:{
            for(int i; i < 11; i++) {
                cout << "Introduisze le chiffre n° " << i << " : ";
                cin >> b[i];
            };
            break;
        };
        case 2:{
            cout << "chiffre position\n------- --------" << endl;
                cout << setw(10) << b[j] << setw(10) << j << endl;
            break;
        }
        case 3:{}
        case 4:{}
        case 5:{
            cout << "Merci d'avoir participe" << endl;
            break;
        }
        default:{
            cout << "Le chiffre entre n'est pas valide";
            break;
            };
        };
    };

    return 0;
}

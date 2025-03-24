#include <iostream>
#include <list>
using namespace std;

int main(){
    //  Créez une liste de huit entiers :
    list<int> maListe;

    for(int i = 0; i<8; i++){
        maListe.push_back(i+3);
    }

    // Afficher la liste
    for(list<int>::iterator it = maListe.begin(); it!= maListe.end(); it++){
        cout<< *it << " ";
    }

    cout << endl;
    
    // Creation d'un iterateur sur maListe
    list<int>::iterator it1;
    it1 = maListe.begin();
    // Iterateur pointant sur le troisieme element
    advance(it1, 2);
    // Supression du troisieme element
    it1 = maListe.erase(it1);

    // Afficher la liste
    for(list<int>::iterator it = maListe.begin(); it!= maListe.end(); it++){
        cout<< *it << " ";
    }

    return 0;
}


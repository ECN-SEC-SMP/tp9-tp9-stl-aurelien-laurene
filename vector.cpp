#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main(){
    // Creer vecteur d'entiers
    vector<int> v1;
    // Taille à 3
    v1.resize(3);
    
    // Affectation de 3 valeurs
    for(int i=0; i<3; i++) v1[i] = i+1;

    // Afficher le vecteur avec des indices
    cout << "Premiere valeur : " << v1[0] << endl;
    cout << "Deuxieme valeur : " << v1[1] << endl;
    cout << "Troisieme valeur : " << v1[2] << endl;

    // En exécutant une boucle sur une plage de nombres
    for(int& j : v1){
        cout<< j <<endl;
    }

    // à l’aide d’un itérateur
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }

    // Ajoutez un nouvel élément en fin de vecteur avec vérifiez que la taille a été modifiée
    v1.push_back(5);
    cout<<v1.size()<<endl;
    
    vector<int> v2;

    // Copiez le premier vecteur dans d’autres vecteurs
    v2.assign(v1.begin(), v1.end());
    
    // Afficher v2
    cout << "v2 : " << endl;
    for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}
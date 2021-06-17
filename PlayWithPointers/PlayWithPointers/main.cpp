//
//  main.cpp
//  PlayWithPointers
//
//  Created by Dijoux Jérémy on 17/06/2021.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    /*
     Les pointeurs permettent de pointer vers des adresses mémoires de variable
     ils permettent aussi d'accéder à la valeur de cette variable comme ceci :
     *pointeur
     Dans le code suivant, on alloue un espace mémoire et on y injecte une valeur.
     *nameUser est initialisé à 0 afin d'éviter de prendre un espace mémoire
     potentielement utilisé par un autre programme.
     
     */
    std::string *nameUser(0);
    nameUser = new std::string;
    /* Attention à ne pas confondre new avec l'instantiation d'une classe
     Ici, new signifie que l'on alloue un espace mémoire vide pour qu'il recoive
     une donnée
     */
    
    std::cout << "Quel est votre nom ?"<<std::endl;
    std::cin>> *nameUser; //On récupère l'input entré par l'utilisateur
    std::cout << "Votre nom est : " << *nameUser <<std::endl;
    /*
     Cet input va être affecté à l'emplacement mémoire défini grâce au
     new std::string
     On affiche ensuite la valeur de cet espace mémoire.
     
     Plus bas, delete permet de supprimer l'accès à l'emplacement mémoire où a été
     stocké l'input de l'utilisateur. Cet emplacement sera désormais inaccessible.
     
     Cependant, le pointeur va continuer de cibler cet endroit. Pour clean le
     pointeur, il faut le remettre à 0
     
     Cette étape est OLIGATOIRE quand on fait de l'allocation dynamique sous peine
     de plantages.
     */
    delete nameUser;
    nameUser=0;
    return 0;
}

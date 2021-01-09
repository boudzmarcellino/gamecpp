#include <iostream>
#include <string>
#include "Arme.h"
class Personnage
{
    private:
        int m_vie;
        int m_mana; // le nombre de degats qu'un personage peut encore recevoir pour une vie 
        Arme m_arme; 
    public:
        Personnage();
        Personnage(std::string nomArme, int degatsArme);
        ~Personnage();
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant();
        void afficherEtat();
};
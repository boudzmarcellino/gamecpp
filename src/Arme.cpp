#include "Arme.h"
Arme::Arme(){
    this->m_nom = "default";
    this->m_degats = 1;
}
Arme::Arme(std::string nom, int degats){
    this->m_nom = nom;
    this->m_degats = degats;
}
void Arme::changer(std::string nom, int degats){
    this->m_nom = nom;
    this->m_degats = degats;
}
void Arme::afficher(){std::cout<<"arme " << this->m_nom <<" "<<this->m_degats<<std::endl;}
int Arme::getDegats()const {return this->m_degats;}
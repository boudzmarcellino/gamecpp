#include "Personnage.h"
Personnage::Personnage(){
    this->m_vie = 3;
    this->m_mana = 100;
    this->m_arme = Arme();
}

Personnage::Personnage(std::string nomArme, int degatsArme){
    this->m_vie = 3;  
    this->m_mana = 100; 
    this->m_arme = Arme(nomArme, degatsArme);   
}

Personnage::~Personnage(){}

void Personnage::recevoirDegats(int nbDegats){
    if(this->m_mana > nbDegats && this->m_vie > 0){
        this->m_mana = this->m_mana - nbDegats;
    }
    else if(this->m_mana < nbDegats && this->m_vie > 0){
        int temp = this->m_mana + 100;
        this->m_mana = temp - nbDegats;
        this->m_vie = this->m_vie - 1;
    }
    else if(this->m_vie == 0 && this->m_mana > nbDegats){
        this->m_mana = this->m_mana - nbDegats;
        }
        else if(this->m_vie==0 && this->m_vie < nbDegats){
            this->m_vie=0; 
            this->m_mana = 0;
        } 
}

void Personnage::attaquer(Personnage & cible){ 
    int degats = this->m_arme.getDegats();
    cible.recevoirDegats(degats); 
}

void Personnage::boirePotionDeVie(int quantitePotion){
    int temp = this->m_mana + quantitePotion ; 
    if(temp < 100 || temp == 100){
        this->m_mana = temp;
    }
    else{
        this->m_vie = this->m_vie + 1;
        this->m_mana = temp - 100 ;
    }
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){ this->m_arme.changer(nomNouvelleArme, degatsNouvelleArme);}

bool Personnage::estVivant(){
    if(this->m_vie==0){return false;}
    else{return true;}
}

void Personnage::afficherEtat(){
    std::cout<<this->m_vie<<std::endl
             <<this->m_mana<<std::endl;
    this->m_arme.afficher();
}



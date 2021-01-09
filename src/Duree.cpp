#include "Duree.h"
Duree::Duree(int heures, int minutes, int secondes){
    this->m_heures = heures;
    this->m_minutes = minutes;
    this->m_secondes = secondes;
}
Duree & Duree::operator+= (Duree const & duree){
    int heures = this->m_heures + duree.m_heures;
    int minutes = this->m_minutes + duree.m_minutes;
    int secondes = this->m_secondes + duree.m_secondes;
    //addition des secondes
    if(secondes > 60){
        minutes = this->m_minutes + 1;
        secondes = secondes - 60;
    }
    else{secondes= secondes;}
    if(minutes > 60){
        heures = this->m_heures + 1;
        minutes = minutes - 60;
    }
    else {minutes = minutes;}
   Duree d = Duree(heures , minutes , secondes);
    return d ;
}
void Duree::afficher(std::ostream & out) const {
    out<< this->m_heures <<" : "<<this->m_minutes<<" : "<<this->m_secondes<<std::endl; 
}
bool Duree::estEgal(Duree const& b) const{
    if(this->m_secondes == b.m_secondes && this->m_minutes == b.m_minutes && this->m_heures == b.m_heures )
        return true;
    else return false;
}
bool Duree::estPlusPetitQue (Duree const & b) const{
    if(this->m_secondes < b.m_secondes && this->m_minutes < b.m_minutes && this->m_heures < b.m_heures )
        return true;
    else return false;
}
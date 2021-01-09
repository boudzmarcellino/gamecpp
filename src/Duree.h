#include <iostream>
class Duree
{
    private:
        int m_heures;
        int m_minutes;
        int m_secondes;
    public:
        Duree(int heures = 0, int minutes = 0, int secondes = 0);
        Duree & operator+=(Duree const& duree);
        void afficher(std::ostream &out) const;
        bool estEgal(Duree const& b) const;
        bool estPlusPetitQue(Duree const& b) const;
        friend bool operator!=(Duree const& a , Duree const& b);
};
// Duree operator+(Duree const& a , Duree const& b ){
//   return a.operator+=(b);
// }
std::ostream & operator<<(std::ostream out , Duree const & b){
   b.afficher(out);
   return out;
}
bool operator==(Duree const& a , Duree const& b){
   return a.estEgal(b);
}
bool operator<(Duree const& a , Duree const& b){return a.estPlusPetitQue(b);}
bool operator!=(Duree const& a , Duree const& b){
    int heures = a.m_heures + b.m_heures;
    int minutes = a.m_minutes + b.m_minutes;
    int secondes = a.m_secondes + b.m_secondes;
    if(a.m_secondes != b.m_secondes && a.m_minutes != b.m_minutes && a.m_heures != b.m_heures )
        return true;
    else return false;
}
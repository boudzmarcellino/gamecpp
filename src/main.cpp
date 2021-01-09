#include "Personnage.h"
 int main()
 {   
    Personnage david , goliath("epee" , 3 );
	std::cout<<std::endl;
	std::cout<<"goliath       :     ";

	goliath.afficherEtat();
	std::cout<<std::endl;

	std::cout<<"david       :     ";
	david.afficherEtat();
	std::cout<<std::endl;                    

	std::cout<<"goliath attaque david"<<std::endl;
	goliath.attaquer(david);
	david.afficherEtat();
	std::cout<<std::endl;                    
	std::cout<<std::endl;

	std::cout<<"david attaque goliath"<<std::endl;
	david.attaquer(goliath);
	goliath.afficherEtat();
	std::cout<<std::endl;                    
	std::cout<<std::endl;

	std::cout<<"goliath change arme"<<std::endl;
	goliath.changerArme("grosseEpee" , 40);
	goliath.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;

	std::cout<<"goliath attaque david"<<std::endl;
	goliath.attaquer(david);
	david.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;

	std::cout<<"david attaque goliath"<<std::endl;
	david.attaquer(goliath);
	goliath.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;

	std::cout<<"david boit potion"<<std::endl;
	david.boirePotionDeVie(80);
	david.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;

	david.changerArme("lance", 60);
	david.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;

	std::cout<<"david attaque goliath"<<std::endl;
	david.attaquer(goliath);
	goliath.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;
	
	david.attaquer(goliath);
	std::cout<<"david attaque goliath"<<std::endl;
	goliath.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;
	
	std::cout<<"david attaque goliath"<<std::endl;
	david.attaquer(goliath);
	goliath.afficherEtat();
	std::cout<<std::endl;
	std::cout<<std::endl;
	return 0;
}
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	Weapon	weap("Axe");
	HumanA	humA("Jo", weap);
	HumanB	humB("Freddy");
       
	humA.attack();
	humB.setWeapon(weap);	
	return (0);
}

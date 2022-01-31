# Now it’s weird! - 42 Roma LUISS

Now, you will create a monster by making a Claptrap that’s half Fragtrap, half ScavTrap.
It will be named DiamondTrap, and it will inherit from both the FragTrap AND the ScavTrap.
Very risky and horrible act the DiamondTrap class will declare a private attribute called name like the one inside ClapTrap.
Its attributes and functions will be chosen from either of its parent classes:
 • Name (Parameter of constructor)
 • Claptrap::Name (Parameter of constructor + "_clap_name")
 • Hitpoints (Fragtrap)
 • Energy points (Scavtrap)
 • Attack damage (Fragtrap)
 • attack (Scavtrap)
It will have the special functions of both.
As usual, your main will be extended to test the new class.
Of course, the Claptrap part of the Diamondtrap will be created once, and only once...
Yes, there’s a trick.
DiamondTrap will have a new function void whoAmI(); that will display its name and its clapTrap name.

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "TargetGenerator.hpp"
#include <iostream>
int main()
{
  Warlock *richard = new Warlock("Richard", "foo");
  Warlock *test;
  richard->setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard->learnSpell(polymorph);
  test = richard;
  delete richard;
  Fireball* fireball = new Fireball();

  test->learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  test->introduce();
  test->launchSpell("Polymorph", *wall);
  test->launchSpell("Fireball", *wall);
}
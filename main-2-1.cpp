#include <iostream>
#include <string>

#include "cart.h"

int main(int argc, char const *argv[])
{

    cart cart0 = cart();
    meerkat meerkat0 = meerkat();

    meerkat0.setName("A");
    meerkat0.setAge(10);

    cart0.addMeerkat(meerkat0);

    meerkat meerkat1 = meerkat();

    meerkat1.setName("B");
    meerkat1.setAge(90);

    cart0.addMeerkat(meerkat1);
    cart0.addMeerkat(meerkat1);
    cart0.addMeerkat(meerkat1);
    cart0.addMeerkat(meerkat1);
    cart0.addMeerkat(meerkat1);
    cart0.addMeerkat(meerkat1);

    cart0.printMeerkats();

    return 0;
}

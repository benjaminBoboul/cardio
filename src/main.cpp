#include <cstdlib>
#include "player.hpp"
#include "bot.hpp"
#include "game.hpp"

int main()
{
    Game g = Game();
    Bot b1 = Bot("John doe");
    Bot b2 = Bot("Jane Doe");

    g.addPlayer(0, &b1);
    g.addPlayer(1, &b2);

    Player* p = g.getPlayer(0);
    printf("%s", p->getName().c_str());

    g.fight();

    return EXIT_SUCCESS;
}
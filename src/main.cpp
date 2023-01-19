
#include "player.h"
#include "bot.h"
#include "game.h"

int main()
{
    Player p1 = Player("John doe");
    Bot b1 = Bot("Jane Doe");

    printf("%s", p1.getName().c_str());
    printf("%s", b1.getName().c_str());


    Game g = Game();

    g.addPlayer(0, &b1);
    g.addPlayer(1, &p1);

    Player* p2 = g.getPlayer(0);
    printf("%s", p2->getName().c_str());

    return EXIT_SUCCESS;
}
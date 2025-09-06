#include "script/general.hpp"
#include "script/fdef.hpp"
#include "script/func.hpp"
#include "script/game.hpp"

int main() {
    Game game;
    game.call();
    std::cout << F::add(2, 3) << std::endl;
    return 0;
}

#include "PowerupSmallPaddle.h"

PowerupSmallPaddle::PowerupSmallPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(paddleEffectsColour); // Same colour as SmallPaddle
}

PowerupSmallPaddle::~PowerupSmallPaddle()
{
}

std::pair<POWERUPS, float> PowerupSmallPaddle::applyEffect()
{
    _paddle->setWidth(0.67f, 5.0f);
    _paddle->setCurrSpeed(PADDLE_SPEED * 2);
    return { smallPaddle, POWERUP_TIME };
}
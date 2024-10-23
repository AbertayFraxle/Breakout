# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
<Add information to this section about the time you've taken for this task along with a professional changelist.>

1m 37s Identified circular inclusion in PowerupBase.h and PowerupFireBall.h and fixed it

1h 10m Implemented a progress bar to replace the timer when a powerup is active

2h 21m Implemented mouse controls instead of keyboard controls, paddle moves to mouse position at same rate as it moved with keyboard

2h 35m Changed paddle speed from a constant to being editable, with default being constant. Then changed bigPaddle and smallPaddle powerups to effect the movement speed of the paddle

3h 10m Implemented violent screen shake whenever the player loses a life, apart from the last time so screen isnt infinitely shaking
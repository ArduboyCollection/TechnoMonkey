#ifndef bear_h
#define bear_h
#define ATTACK_FRAMES 15
#ifndef Arduboy2_h
#include <Arduboy2.h>
#endif
#endif

class Bear
{
  public:
    Bear(byte xpos, byte ypos, byte len);
    Bear(){}
    ~Bear(){};

    //get bear's x pos
    byte getX();
    //get bear's y pos
    byte getY();
    //get frame number
    byte getFrame();
    //get health
    byte getHealth();
    bool attacking();
    bool getFacing();
    void damage(byte amount);
    bool isDead();
    //update bear
    void updateBear();

  private:
    byte x;
    byte y;
    byte w;
    int health = 50;
    byte frame;
    byte attackFrames = ATTACK_FRAMES;
    byte moveSpeed = 3;
    bool isAttacking = false;
    bool facingRight = false;
    bool swapAttack = false;

    //move bear
    void moveForward();
    //attack
    void attack();
};

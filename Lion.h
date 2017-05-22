#ifndef lion_h
#define lion_h
#define ATTACK_FRAMES 5
#ifndef Arduboy2_h
#include <Arduboy2.h>
#endif
#endif

class Lion
{
  public:
    Lion(byte xpos, byte ypos, byte len);
    Lion() {}
    ~Lion() {};

    //get Lion's x pos
    byte getX();
    //get Lion's y pos
    byte getY();
    //get frame number
    byte getFrame();
    byte getHealth();
    bool attacking();
    bool getFacing();
    void damage(byte amount);
    bool isDead();
    //update Lion
    void updateLion();

  private:
    byte x;
    byte y;
    byte w;
    int health = 50;
    byte frame;
    byte attackFrames = ATTACK_FRAMES;
    byte moveSpeed = 6;
    bool isAttacking = false;
    bool facingRight = false;

    //move Lion
    void moveForward();
    //attack
    void attack();
};


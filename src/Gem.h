#ifndef GEM_H
#define GEM_H

class Gem 
{
private:
    int points;

public:
    Gem();
    /*{
        srand(time(0));
        points = rand() % (5) + 5;
    }*/
    int getPoints();
    virtual void execute(Champion c);
};
#endif
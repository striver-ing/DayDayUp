//
//  PropsScene.h
//  DayDayUp
//
//  Created by LIUBO on 16/1/10.
//
//

#ifndef PropsScene_h
#define PropsScene_h

#include "NormalScene.h"
#include <stdio.h>
class PropsScene : public NormalModel {
public:
    static Scene* createScene();
    virtual bool init();
    virtual void update(float delta);
    virtual void moveObstacles(float delta);

    void addProps(float delta);
    void delayRemveProps(Sprite* prop);

    virtual bool onContactBegin(PhysicsContact& contact);

    CREATE_FUNC(PropsScene);

private:
    Vector<Sprite*> _props;

    int _addApropMapScore = 0;
};

#endif /* PropsScene_h */

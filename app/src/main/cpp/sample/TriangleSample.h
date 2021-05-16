//
// Created by pcl on 2021/5/15.
//

#ifndef OPENGLEXERCISE_TRIANGLESAMPLE_H
#define OPENGLEXERCISE_TRIANGLESAMPLE_H


#include "GLSampleBase.h"

class TriangleSample : public GLSampleBase
{
public:
    TriangleSample();
    virtual ~TriangleSample();

    virtual void LoadImage(NativeImage *pImage);

    virtual void Init();

    virtual void Draw(int screenW, int screenH);

    virtual void Destroy();
};

#endif //OPENGLEXERCISE_TRIANGLESAMPLE_H

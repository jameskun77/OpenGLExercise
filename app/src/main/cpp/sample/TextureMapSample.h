//
// Created by pcl on 2021/5/17.
//

#ifndef OPENGLEXERCISE_TEXTUREMAPSAMPLE_H
#define OPENGLEXERCISE_TEXTUREMAPSAMPLE_H

#include "GLSampleBase.h"
#include "../util/ImageDef.h"

class TextureMapSample : public GLSampleBase
{
public:
    TextureMapSample();

    virtual ~TextureMapSample();

    void LoadImage(NativeImage* pImage);

    void Init();
    void Draw(int screenW, int screenH);

    void Destroy();

private:
    GLuint m_TextureId;
    GLint m_SamplerLoc;
    NativeImage m_RenderImage;
};

#endif //OPENGLEXERCISE_TEXTUREMAPSAMPLE_H

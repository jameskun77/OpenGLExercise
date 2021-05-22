//
// Created by pcl on 2021/5/22.
//

#ifndef OPENGLEXERCISE_FRAMEBUFFERSAMPLE_H
#define OPENGLEXERCISE_FRAMEBUFFERSAMPLE_H

#include "GLSampleBase.h"
#include "../util/ImageDef.h"

class FrameBufferSample : public GLSampleBase
{
public:
    FrameBufferSample();
    virtual ~FrameBufferSample();

    void LoadImage(NativeImage* pImage);

    void Init();
    void Draw(int screenW, int screenH);

    void Destroy();

private:
    bool CreateFrameBufferObj();

private:
    GLuint m_TextureId;
    GLuint m_FrameBuffId;
    GLuint m_FrameBufferTextureId;

    GLuint m_VaoIds[2];
    GLuint m_VboIds[4];

    GLuint m_sampleUniform;

    GLuint m_FrameBufferProgramObj;
    GLuint m_FboVertexShader;
    GLuint m_FboFragmentShader;

    NativeImage m_RenderImage;

    GLint m_FrameBufferSamplerUniform;

};



#endif //OPENGLEXERCISE_FRAMEBUFFERSAMPLE_H

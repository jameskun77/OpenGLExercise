//
// Created by pcl on 2021/6/4.
//

#ifndef OPENGLEXERCISE_EGLRENDER_H
#define OPENGLEXERCISE_EGLRENDER_H

#include <GLES3/gl3.h>
#include <ImageDef.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>

#define EGL_FEATURE_NUM 7

class EGLRender{
public:
    EGLRender();
    ~EGLRender();

    void Init();

    int CreateGLesEnv();

    void SetImageData(uint8_t* pData,int width,int height);

    void SetIntParam(int paramType,int param);

    void Draw();

    void DestroyGLesEnv();

    void UnInit();

    static EGLRender* GetInstance()
    {
        if(m_Instance == nullptr)
        {
            m_Instance = new EGLRender();
        }

        return m_Instance;
    }

    static void DestroyInstance()
    {
        if(m_Instance)
        {
            delete m_Instance;
            m_Instance = nullptr;
        }
    }

private:
    static EGLRender* m_Instance;
    GLuint m_ImageTextureId;
    GLuint m_FboTextureId;
    GLuint m_FboId;
    GLuint m_VaoIds;
    GLuint m_VboIds[3];
    GLint m_SampleHandle;
    GLint m_TexSizeHandle;
    NativeImage m_RenderImage;
    GLuint m_ProgramObj;
    GLuint m_VertexShader;
    GLuint m_FragmentShader;

    EGLConfig m_eglConfig;
    EGLSurface m_eglSurface;
    EGLContext m_eglContext;
    EGLDisplay m_eglDisplay;
    bool m_IsGLContextReady;
    const char* m_fShaderStrs[EGL_FEATURE_NUM];
    int m_ShaderIndex;
};

#endif //OPENGLEXERCISE_EGLRENDER_H

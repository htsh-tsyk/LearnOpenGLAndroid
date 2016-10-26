#include <jni.h>
#include <GLES2/gl2.h>
#include <stdlib.h>

#define JNI_METHOD(return_type, method_name) \
  JNIEXPORT return_type JNICALL              \
      Java_com_learnopengl_lesson1_Renderer_##method_name

extern "C" {
    JNI_METHOD(void, init)(JNIEnv * env, jobject obj,  jint width, jint height)
    {
    }

    JNI_METHOD(void, render)(JNIEnv * env, jobject obj)
    {
        glClearColor(
                (GLfloat)(rand() % 256) / 255.0f,
                (GLfloat)(rand() % 256) / 255.0f,
                (GLfloat)(rand() % 256) / 255.0f,
                1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glDrawArrays(GL_TRIANGLES, 0, 3);
    }
};


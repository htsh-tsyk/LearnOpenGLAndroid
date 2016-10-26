package com.leanopengl.lesson4;

import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

class Renderer implements GLSurfaceView.Renderer {
    static {
        System.loadLibrary("lesson4");
    }

    public static native void init(int width, int height);
    public static native void render();

    public void onDrawFrame(GL10 gl) {
        render();
    }

    public void onSurfaceChanged(GL10 gl, int width, int height) {
        init(width, height);
    }

    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        // Do nothing.
    }
}

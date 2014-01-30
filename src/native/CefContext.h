/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_CefContext */

#ifndef _Included_org_cef_CefContext
#define _Included_org_cef_CefContext
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_CefContext
 * Method:    N_Initialize
 * Signature: (Ljava/lang/String;Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cef_CefContext_N_1Initialize
  (JNIEnv *, jclass, jstring, jstring, jboolean);

/*
 * Class:     org_cef_CefContext
 * Method:    N_Shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefContext_N_1Shutdown
  (JNIEnv *, jclass);

/*
 * Class:     org_cef_CefContext
 * Method:    N_DoMessageLoopWork
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefContext_N_1DoMessageLoopWork
  (JNIEnv *, jclass);

/*
 * Class:     org_cef_CefContext
 * Method:    N_CreateBrowser
 * Signature: (Lorg/cef/CefHandler;JLjava/lang/String;ZLjava/awt/Canvas;)Lorg/cef/CefBrowser;
 */
JNIEXPORT jobject JNICALL Java_org_cef_CefContext_N_1CreateBrowser
  (JNIEnv *, jclass, jobject, jlong, jstring, jboolean, jobject);

/*
 * Class:     org_cef_CefContext
 * Method:    N_GetWindowHandle
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_cef_CefContext_N_1GetWindowHandle
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif

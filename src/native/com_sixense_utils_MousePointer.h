/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sixense_utils_MousePointer */

#ifndef _Included_com_sixense_utils_MousePointer
#define _Included_com_sixense_utils_MousePointer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_sixense_utils_MousePointer_create
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    update
 * Signature: (Lcom/sixense/ControllerData;)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_sixense_utils_MousePointer_update
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setSensitivity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setSensitivity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setAcceleration
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setAcceleration
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setSlideEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setSlideEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setAspectRatio
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setAspectRatio
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setLockRelativeToWindow
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setLockRelativeToWindow
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setLockRelativeToClientBounds
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setLockRelativeToClientBounds
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    getMouseOffset
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_sixense_utils_MousePointer_getMouseOffset
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setMouseOffset
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setMouseOffset
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    getRollAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_sixense_utils_MousePointer_getRollAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setCenter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setCenter
  (JNIEnv *, jobject);

/*
 * Class:     com_sixense_utils_MousePointer
 * Method:    setWindowCenter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sixense_utils_MousePointer_setWindowCenter
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

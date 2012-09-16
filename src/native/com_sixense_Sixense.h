/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sixense_Sixense */

#ifndef _Included_sixense_Sixense
#define _Included_sixense_Sixense
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sixense_Sixense
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_init
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    exit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_exit
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    getMaxBases
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sixense_Sixense_getMaxBases
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    setActiveBase
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_setActiveBase
  (JNIEnv *, jclass, jint);

/*
 * Class:     sixense_Sixense
 * Method:    isBaseConnected
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_isBaseConnected
  (JNIEnv *, jclass, jint);

/*
 * Class:     sixense_Sixense
 * Method:    getMaxControllers
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sixense_Sixense_getMaxControllers
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    getNumActiveControllers
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sixense_Sixense_getNumActiveControllers
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    isControllerEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_isControllerEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     sixense_Sixense
 * Method:    getAllNewestData
 * Signature: ([Lsixense/ControllerData;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getAllNewestData
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     sixense_Sixense
 * Method:    getAllData
 * Signature: (I[Lsixense/ControllerData;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getAllData
  (JNIEnv *, jclass, jint, jobjectArray);

/*
 * Class:     sixense_Sixense
 * Method:    getNewestData
 * Signature: (ILsixense/ControllerData;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getNewestData
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     sixense_Sixense
 * Method:    getData
 * Signature: (IILsixense/ControllerData;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getData
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     sixense_Sixense
 * Method:    getHistorySize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sixense_Sixense_getHistorySize
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    setFilterEnabled
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_setFilterEnabled
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     sixense_Sixense
 * Method:    getFilterEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getFilterEnabled
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    setFilterParams
 * Signature: (FFFF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_setFilterParams
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     sixense_Sixense
 * Method:    getFilterParams
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_sixense_Sixense_getFilterParams
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    triggerVibration
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_triggerVibration
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     sixense_Sixense
 * Method:    autoEnableHemisphereTracking
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_autoEnableHemisphereTracking
  (JNIEnv *, jclass, jint);

/*
 * Class:     sixense_Sixense
 * Method:    setHighPriorityBinding
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_setHighPriorityBinding
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     sixense_Sixense
 * Method:    getHighPriorityBinding
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_getHighPriorityBinding
  (JNIEnv *, jclass);

/*
 * Class:     sixense_Sixense
 * Method:    setBaseColor
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sixense_Sixense_setBaseColor
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     sixense_Sixense
 * Method:    getColorBase
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_com_sixense_Sixense_getColorBase
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif

void setControllerData(JNIEnv *, jobject, sixenseControllerData);
#endif
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef _Included_kps_arnutrition_ARNutritionJNI
#define _Included_kps_arnutrition_ARNutritionJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Method:    FindFeatures
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_kps_arnutrition_ARNutritionJNI_FindFeatures
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_kps_arnutrition_ARNutritionJNI_getStringFromNative
  (JNIEnv *, jclass);


JNIEXPORT void JNICALL
        Java_kps_arnutrition_ARNutritionJNI_hsvMode(JNIEnv *env, jobject obj, jlong addrGray, jlong addrRgba,
                                            jintArray hsvFilterValues);


#ifdef __cplusplus
}
#endif
#endif

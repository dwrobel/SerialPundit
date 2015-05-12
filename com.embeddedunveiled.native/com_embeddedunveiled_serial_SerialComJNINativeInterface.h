/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_embeddedunveiled_serial_SerialComJNINativeInterface */

#ifndef _Included_com_embeddedunveiled_serial_SerialComJNINativeInterface
#define _Included_com_embeddedunveiled_serial_SerialComJNINativeInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    initNativeLib
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_initNativeLib
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getNativeLibraryVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getNativeLibraryVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    debug
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_debug
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getSerialPortNames
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getSerialPortNames
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    registerPortMonitorListener
 * Signature: (JLjava/lang/String;Lcom/embeddedunveiled/serial/ISerialComPortMonitor;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_registerPortMonitorListener
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    unregisterPortMonitorListener
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_unregisterPortMonitorListener
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    openComPort
 * Signature: (Ljava/lang/String;ZZZ)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_openComPort
  (JNIEnv *, jobject, jstring, jboolean, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    closeComPort
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_closeComPort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    readBytes
 * Signature: (JILcom/embeddedunveiled/serial/SerialComReadStatus;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_readBytes
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    writeBytes
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_writeBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    writeBytesBulk
 * Signature: (JLjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_writeBytesBulk
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    configureComPortData
 * Signature: (JIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_configureComPortData
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    configureComPortControl
 * Signature: (JICCZZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_configureComPortControl
  (JNIEnv *, jobject, jlong, jint, jchar, jchar, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getCurrentConfigurationU
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getCurrentConfigurationU
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getCurrentConfigurationW
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getCurrentConfigurationW
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    setUpDataLooperThread
 * Signature: (JLcom/embeddedunveiled/serial/SerialComLooper;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_setUpDataLooperThread
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    setUpEventLooperThread
 * Signature: (JLcom/embeddedunveiled/serial/SerialComLooper;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_setUpEventLooperThread
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    destroyDataLooperThread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_destroyDataLooperThread
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    destroyEventLooperThread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_destroyEventLooperThread
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    pauseListeningEvents
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_pauseListeningEvents
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    resumeListeningEvents
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_resumeListeningEvents
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    setRTS
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_setRTS
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    setDTR
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_setDTR
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getLinesStatus
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getLinesStatus
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getInterruptCount
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getInterruptCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    sendBreak
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_sendBreak
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    getByteCount
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_getByteCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    clearPortIOBuffers
 * Signature: (JZZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_clearPortIOBuffers
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_SerialComJNINativeInterface
 * Method:    setMinDataLength
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_SerialComJNINativeInterface_setMinDataLength
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif

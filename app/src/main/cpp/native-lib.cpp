#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_github_kevelbreh_jnitest_JniTest_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from mylibrary-nativelib";
    return env->NewStringUTF(hello.c_str());
}

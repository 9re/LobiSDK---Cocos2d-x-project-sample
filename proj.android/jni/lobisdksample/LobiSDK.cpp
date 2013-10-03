#include "LobiSDK.h"
#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#include "util.h"

USING_NS_CC;

namespace lobisdk {

char const * LobiSDK::JAVA_CLASS_NAME = "com/kayac/nakamap/sdk/Nakamap";

void LobiSDK::showChatView()
{
    JniMethodInfo m;
    if (JniHelper::getStaticMethodInfo(m, JAVA_CLASS_NAME, "showChatView", "()V"))
    {
         m.env->CallStaticVoidMethod(m.classID, m.methodID);
         m.env->DeleteLocalRef(m.classID);
    }
}

void LobiSDK::openChatWithGroupId(const char *exId, const char *name)
{
    JniMethodInfo m;
    if (JniHelper::getStaticMethodInfo(m, JAVA_CLASS_NAME, "openChatWithGroupID", "(Ljava/lang/String;Ljava/lang/String;)V"))
    {
        jstring jstrExId = m.env->NewStringUTF(exId);
        jstring jstrName = m.env->NewStringUTF(name);
        
        m.env->CallStaticVoidMethod(m.classID, m.methodID, jstrExId, jstrName);
        
        m.env->DeleteLocalRef(jstrExId);
        m.env->DeleteLocalRef(jstrName);
        m.env->DeleteLocalRef(m.classID);
    }
}

void LobiSDK::debugReset()
{
    JniMethodInfo m;
    if (JniHelper::getStaticMethodInfo(m, JAVA_CLASS_NAME, "debugReset", "()V"))
    {
         m.env->CallStaticVoidMethod(m.classID, m.methodID);
         m.env->DeleteLocalRef(m.classID);
    }
}


} // namespace lobisdk

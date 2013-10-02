#include "lobisdk.h"
#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#include "util.h"

USING_NS_CC;

namespace lobisdk {

char const * LobiSDK::JAVA_CLASS_NAME = "Nakamap";

void LobiSDK::showChatView()
{
    JniMethodInfo m;
    
     if (JniHelper::getStaticMethodInfo(m, JAVA_CLASS_NAME, "showChatView", "()V")) {
         m.env->CallStaticVoidMethod(m.classID, m.methodID);
         m.env->DeleteLocalRef(m.classID);
     }
}

void LobiSDK::openChatWithGroupId(const char *exId, const char *name)
{
  
}

void LobiSDK::debugRest()
{
  
}


} // namespace lobisdk

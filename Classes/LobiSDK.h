#ifndef LOBISDK_H
#define LOBISDK_H

namespace lobisdk
{

class LobiSDK
{
public:
    static const char *JAVA_CLASS_NAME;
    static void showChatView();
    static void openChatWithGroupId(const char *exId, const char *name);
    static void debugRest();
}; // class LobiSDK

} // namespace lobisdk

#endif

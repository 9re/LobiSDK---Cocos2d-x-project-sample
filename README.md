LobiSDK + Cocos2d-x-project-sample
==================================

Cocos2d-x androidプロジェクトでのLobiSDKの使い方

基本的にjniから直接JavaのAPIを呼び出します。
LobiSDKのメソッドをjni経由でc++にバインドする例が[こちら](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/jni/lobisdksample/LobiSDK.cpp)になります。

LobiSDKのメソッドをluaにエクスポートする例が[こちら](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Classes/LuaLobi.cpp)になります。これらのメソッドは[この](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Resources/lobisdksample.lua)luaスクリプトから使われています。

==================================

Using LobiSDK in Cocos2d-x android project

Basically, use Java API direcrly via jni.
Here is an [example](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/jni/lobisdksample/LobiSDK.cpp) for binding LobiSDK methods to c++ using jni.

Here is an [example](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Classes/LuaLobi.cpp) for binding LobiSDK methods to lua. These methods are used from [lua](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Resources/lobisdksample.lua) script.

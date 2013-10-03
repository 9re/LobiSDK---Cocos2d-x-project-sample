LobiSDK + Cocos2d-x-project-sample
==================================

Cocos2d-x androidプロジェクトでのLobiSDKの使い方

基本的にjniから直接JavaのAPIを呼び出します。
LobiSDKのメソッドをjni経由でc++にバインドする例が[こちら](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/jni/lobisdksample/LobiSDK.cpp)になります。

LobiSDKのメソッドをluaにエクスポートする例が[こちら](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Classes/LuaLobi.cpp)になります。これらのメソッドは[このluaスクリプト](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Resources/lobisdksample.lua)から使われています。

cocos2d-xのレイアウトをオーバーライドし、LobiSDKのバッヂビューを表示するためのクラスが[こちら](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/src/co/lobi/cocos2dx/sample/CustomCocos2dxActivity.java)になります。

==================================

Using LobiSDK in Cocos2d-x android project

Basically, use Java API direcrly via jni.
Here is an [example](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/jni/lobisdksample/LobiSDK.cpp) for binding LobiSDK methods to c++ using jni.

Here is an [example](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Classes/LuaLobi.cpp) for binding LobiSDK methods to lua. These methods are used from [this lua script](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/Resources/lobisdksample.lua).

This is an [example](https://github.com/9re/LobiSDK---Cocos2d-x-project-sample/blob/master/proj.android/src/co/lobi/cocos2dx/sample/CustomCocos2dxActivity.java) of overriding cocos2d-x's default layout.

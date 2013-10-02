-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
    print("----------------------------------------")
    print("LUA ERROR: " .. tostring(msg) .. "\n")
    print(debug.traceback())
    print("----------------------------------------")
end

local function cclog(...)
   print(string.format(...))
end

local function openChatHandler()
   
end

local function main()
   cclog("lobisdk-test")

   local visibleSize = CCDirector:sharedDirector():getVisibleSize()
   local origin = CCDirector:sharedDirector():getVisibleOrigin()

   -- cclog("(%d , %d) %d x %d", origin.x, origin.y, visibleSize.width, visibleSize.height)
   local layerMenu = CCLayer:create()
   local openChat = CCLabelTTF:create()
   openChat:setFontSize(40)
   openChat:setString("Open Chat")

   local openChatMenu = CCMenuItemLabel:create(openChat)
   openChatMenu:registerScriptTapHandler(openChatHandler)

   local menu = CCMenu:createWithItem(openChatMenu)
   menu:setPosition(ccp(100, visibleSize.height - 40))
   layerMenu:addChild(menu)
   
   local sceneGame = CCScene:create()
   sceneGame:addChild(layerMenu)
   CCDirector:sharedDirector():runWithScene(sceneGame)
end

xpcall(main, __G__TRACKBACK__)

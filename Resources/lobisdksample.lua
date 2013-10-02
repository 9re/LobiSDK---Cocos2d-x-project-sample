-- for CCLuaEngine traceback
local visibleSize = CCDirector:sharedDirector():getVisibleSize()
local origin = CCDirector:sharedDirector():getVisibleOrigin()

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
   LobiSDK:showChatView()
end

local function debugResetHandler()
   LobiSDK:debugReset()
end

local function createMenuItem(labelName, callback, y)
   local label = CCLabelTTF:create()
   label:setFontSize(30)
   label:setHorizontalAlignment(kCCTextAlignmentRight)
   label:setString(labelName)

   local menuItem = CCMenuItemLabel:create(label)
   menuItem:registerScriptTapHandler(callback)
   menuItem:setPosition(ccp(0, y))
   return menuItem
end

local function createMenu(items)
   local layerMenu = CCLayer:create()
   local array = CCArray:createWithCapacity(#items / 2)
   local i = 0
   for label, handler in pairs(items)
   do
      array:addObject(createMenuItem(label, handler, -60 * i))
      i = i + 1
   end
   
   local menu = CCMenu:createWithArray(array)
   menu:setPosition(ccp(160, visibleSize.height - 40))
   
   return menu
end

local function main()
   local layerMenu = CCLayer:create()
   local menu = createMenu({
       ["Open Chat"]=openChatHandler,
       ["Debug Reset"]=debugResetHandler
   })
   menu:setPosition(ccp(160, visibleSize.height - 40))
   layerMenu:addChild(menu)
   
   local sceneGame = CCScene:create()
   sceneGame:addChild(layerMenu)
   CCDirector:sharedDirector():runWithScene(sceneGame)
end

xpcall(main, __G__TRACKBACK__)

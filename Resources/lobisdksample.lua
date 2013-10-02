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

local function main()
   cclog("lobisdk-test")
end

xpcall(main, __G__TRACKBACK__)

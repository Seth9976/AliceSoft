// 函数: ___acrt_uninitialize_winapi_thunks
// 地址: 0x10006e7f
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 == 0)
    for (void* i = &data_10016f18; i != &data_10016f68; i += 4)
        if (*i != 0)
            if (*i != 0xffffffff)
                FreeLibrary(*i)
            
            *i = 0

BOOL result
result.b = 1
return result

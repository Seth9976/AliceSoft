// 函数: ___vcrt_uninitialize_winapi_thunks
// 地址: 0x10004ed2
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 != 0)
    return 

for (void* i = &data_10016c1c; i != &data_10016c2c; i += 4)
    if (*i != 0)
        if (*i != 0xffffffff)
            FreeLibrary(*i)
        
        *i = 0

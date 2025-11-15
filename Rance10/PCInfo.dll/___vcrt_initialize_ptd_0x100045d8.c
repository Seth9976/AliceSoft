// 函数: ___vcrt_initialize_ptd
// 地址: 0x100045d8
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

BOOL eax = ___vcrt_InitializeCriticalSectionEx(___vcrt_freefls@4)
data_10016020 = eax

if (eax != 0xffffffff)
    if (sub_10004e15(eax, 0x10016bd8) != 0)
        BOOL eax_1
        eax_1.b = 1
        return eax_1
    
    ___vcrt_uninitialize_ptd()

eax.b = 0
return eax

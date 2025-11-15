// 函数: ___acrt_initialize_ptd
// 地址: 0x10006934
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

uint32_t eax = ___acrt_FlsAlloc@4(destroy_fls)
data_10016044 = eax

if (eax != 0xffffffff)
    int32_t eax_1 = ___acrt_getptd_noexit()
    
    if (eax_1 != 0)
        eax_1.b = 1
        return eax_1
    
    int32_t var_4_1 = eax_1
    ___acrt_uninitialize_ptd()

eax.b = 0
return eax

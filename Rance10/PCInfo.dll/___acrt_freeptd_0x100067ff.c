// 函数: ___acrt_freeptd
// 地址: 0x100067ff
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* result = data_10016044

if (result != 0xffffffff)
    result = ___acrt_FlsGetValue@4(result)
    
    if (result != 0)
        ___acrt_FlsSetValue@8(data_10016044, 0)
        return destroy_fls(result)

return result

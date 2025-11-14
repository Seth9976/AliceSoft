// 函数: sub_430d70
// 地址: 0x430d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg2 + 8) = 0xffffffff
*(arg2 + 0xc) = 0
uint32_t result

while (true)
    char* esi_1 = *arg1
    int32_t ebx_1 = arg1[1]
    
    if (&esi_1[4] u<= ebx_1)
        uint32_t ecx_7 =
            ((zx.d(esi_1[3]) << 8 | zx.d(esi_1[2])) << 8 | zx.d(esi_1[1])) << 8 | zx.d(*esi_1)
        *arg1 = &esi_1[4]
        
        if (ecx_7 == 0)
            break
        
        if (ecx_7 != 1)
            if (ecx_7 != 2)
                continue
            else
                *(arg2 + 0xc) = 1
                continue
        else if (&esi_1[8] u<= ebx_1)
            *(arg2 + 8) =
                ((zx.d(esi_1[7]) << 8 | zx.d(esi_1[6])) << 8 | zx.d(esi_1[5])) << 8 | zx.d(esi_1[4])
            *arg1 += 4
            continue
    
    result.b = 0
    return result

result.b = 1
return result

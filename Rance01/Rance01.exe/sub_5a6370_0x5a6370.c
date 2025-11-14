// 函数: sub_5a6370
// 地址: 0x5a6370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return 0

int32_t edi = *(arg2 + 0x70)
*(arg2 + 0x70) = edi | 0x100000
int32_t result

if (arg1 == 0)
    result = 0
else
    int32_t eax_3 = *(arg2 + 0x264)
    
    if (eax_3 == 0)
        result = sub_6b5c43(arg1)
    else
        result = eax_3(arg2, arg1)
    
    if (result == 0 && (*(arg2 + 0x70) & 0x100000) == 0)
        sub_5a5c60(arg2, "Out of Memory")
        noreturn

*(arg2 + 0x70) = edi
return result

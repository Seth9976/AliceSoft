// 函数: sub_5a6290
// 地址: 0x5a6290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0 || arg1 == 0)
    return 0

int32_t eax = *(arg3 + 0x264)
int128_t* result

if (eax == 0)
    result = sub_6b5c43(arg1)
else
    result = eax(arg3, arg1)

if (result == 0 && (*(arg3 + 0x70) & 0x100000) == 0)
    sub_5a5c60(arg3, "Out of Memory")
    noreturn

if (result != 0)
    sub_6bc670(result, 0, arg1)

return result

// 函数: sub_5a62f0
// 地址: 0x5a62f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0 || arg1 == 0)
    return 0

int32_t eax = *(arg2 + 0x264)
int32_t result

if (eax == 0)
    result = sub_6b5c43(arg1)
else
    result = eax(arg2, arg1)

if (result != 0 || (*(arg2 + 0x70) & 0x100000) != 0)
    return result

int32_t edi
int32_t var_4_2 = edi
sub_5a5c60(arg2, "Out of Memory")
noreturn

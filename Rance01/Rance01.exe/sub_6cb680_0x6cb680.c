// 函数: sub_6cb680
// 地址: 0x6cb680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
int32_t esi
int32_t var_8 = esi
int32_t var_14 = esi
int32_t ebx_1

if (arg1 s<= 0)
    ebx_1 = divs.dp.d(0:0x1388, 1)
else if (arg1 s> 0x64)
    ebx_1 = neg.d(0x64 * 2) + 0xc8
else if (arg1 s< 0x32)
    ebx_1 = divs.dp.d(0:0x1388, arg1)
else
    ebx_1 = neg.d(arg1 * 2) + 0xc8

int32_t result

for (void* i = nullptr; i s< 0x40; i += 1)
    int32_t edi_4 = zx.d(*(i + arg2)) * ebx_1 + 0x32
    int32_t edx_3
    edx_3:result = muls.dp.d(0x51eb851f, edi_4)
    int32_t edx_5 = edi_4 s/ 0x64
    
    if (edx_5 s> 0)
        if (edx_5 s<= 0xff)
            arg3[i] = edx_5.w
        else
            arg3[i] = 0xff
    else
        arg3[i] = 1

return result

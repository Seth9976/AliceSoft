// 函数: sub_5b1740
// 地址: 0x5b1740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = zx.d(*(arg3 + 0x1c))
int32_t esi = *(arg3 + 0x16)
int32_t edi = *(arg3 + 0x2e)
arg1[1] = *(arg3 + 0x12)
*arg1 = ebx
arg1[2] = esi

if (ebx != 8)
    if (ebx != 0x18 && ebx != 0x20)
        arg1.b = 0
        return arg1
    
    arg1[3] = arg3 + 0x36
    arg1.b = 1
    return arg1

arg1[4] = arg3 + 0x36

if (edi != 0)
    arg1[5] = edi
    arg1[3] = arg3 + (edi << 2) + 0x36
    arg1.b = 1
    return arg1

arg1[5] = 0x100
arg1[3] = arg3 + (arg1[5] << 2) + 0x36
arg1.b = 1
return arg1

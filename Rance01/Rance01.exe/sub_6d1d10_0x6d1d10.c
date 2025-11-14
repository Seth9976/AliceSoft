// 函数: sub_6d1d10
// 地址: 0x6d1d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg4

if (ebp s> arg1[3])
    int32_t eax_7 = sub_6d1bd0(arg1, ebp)
    
    if (eax_7 != 0)
        return eax_7

int32_t ebx_1 = sub_6d1b70(arg1, ebp)

while (true)
    int32_t edx_2 = sx.d(*(arg2 + (ebp << 1) + 0x62a))
    
    if ((edx_2 & 0x8000) != 0 && edx_2 != 0xffffffff)
        edx_2 = zx.d(edx_2.w)
    
    if (ebx_1 s<= edx_2)
        break
    
    if (arg1[3] s<= 0)
        int32_t eax_3 = sub_6d1bd0(arg1, 1)
        
        if (eax_3 != 0)
            return eax_3
    
    ebx_1 = (ebx_1 * 2) | sub_6d1b70(arg1, 1)
    ebp += 1

if (ebp s<= 0x10)
    *arg3 = zx.d(*(arg2
        + ((zx.d(*(arg2 + (ebp << 1) + 0x64e)) - zx.d(*(arg2 + (ebp << 1) + 0x608)) + ebx_1) << 1)
        + 0x408))
else
    *arg3 = 0

return 0

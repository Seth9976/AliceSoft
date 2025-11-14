// 函数: sub_6afba0
// 地址: 0x6afba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
int32_t edx
edx.w = point.y.w
int16_t ecx = point.x.w - arg1[4].w
edx.w -= arg1[5].w
char eax = arg1[0xd].b

if (eax != *(arg1 + 0x35) && eax != 0)
    arg1[0x18] = 0xffffffff
    arg1[0x19] = 0xffffffff
    sub_6afce0(arg1)
    sub_6afe00(arg1)
    sub_6aff30(arg1)

if (arg1[0xd].b != 0)
    arg1[0x16] += sx.d(ecx)
    int32_t eax_2 = arg1[0x16]
    arg1[0x17] += sx.d(edx.w)
    int32_t ecx_5 = *arg1
    int32_t edi_1 = arg1[0x17]
    
    if (ecx_5 s< eax_2)
        eax_2 = ecx_5
    
    int32_t ecx_6 = arg1[1]
    
    if (ecx_6 s> eax_2)
        eax_2 = ecx_6
    
    int32_t ecx_7 = arg1[2]
    
    if (ecx_7 s< edi_1)
        edi_1 = ecx_7
    
    int32_t ecx_8 = arg1[3]
    
    if (ecx_8 s> edi_1)
        edi_1 = ecx_8
    
    if (sub_6b0160(arg1, eax_2) == 0)
        return 0
    
    char eax_3
    eax_3, edx = sub_6b0270(arg1, edi_1)
    
    if (eax_3 == 0)
        return 0

if (*(arg1 + 0x36) != 0 && *(arg1 + 0x35) != 0)
    int32_t eax_4 = arg1[0x18]
    
    if (eax_4 == 0xffffffff)
    label_6afc80:
        int32_t ecx_11 = arg1[0x19]
        
        if (ecx_11 != 0xffffffff)
            *(*(arg1[0x22] + (ecx_11 << 2)) + 0x9b) = 0
        else if (eax_4 != 0xffffffff)
            goto label_6afc9f
    else if (arg1[0x19] != 0xffffffff)
        if (eax_4 == 0xffffffff)
            goto label_6afc80
        
    label_6afc9f:
        int32_t ecx_12 = arg1[0x19]
        
        if (ecx_12 != 0xffffffff)
            *(*(*(arg1[0x2a] + eax_4 * 0x10) + (ecx_12 << 2)) + 0x9b) = 0
    else
        *(*(arg1[0x1e] + (eax_4 << 2)) + 0x9b) = 0

edx.b = arg1[0xd].b
int32_t y = point.y
arg1[4] = point.x
*(arg1 + 0x35) = edx.b
*(arg1 + 0x36) = 0
arg1[5] = y
int32_t result
result.b = 1
return result

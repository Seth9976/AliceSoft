// 函数: sub_6598f0
// 地址: 0x6598f0
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
    sub_659a20(arg1)
    sub_659b40(arg1)
    sub_659c80(arg1)

if (arg1[0xd].b != 0)
    arg1[0x16] += sx.d(ecx)
    int32_t eax_2 = arg1[0x16]
    arg1[0x17] += sx.d(edx.w)
    int32_t ecx_2 = *arg1
    int32_t edi_1 = arg1[0x17]
    
    if (ecx_2 s< eax_2)
        eax_2 = ecx_2
    
    int32_t ecx_3 = arg1[1]
    
    if (ecx_3 s> eax_2)
        eax_2 = ecx_3
    
    int32_t ecx_4 = arg1[2]
    
    if (ecx_4 s< edi_1)
        edi_1 = ecx_4
    
    int32_t ecx_5 = arg1[3]
    
    if (ecx_5 s> edi_1)
        edi_1 = ecx_5
    
    sub_659ea0(arg1, eax_2)
    sub_659f90(arg1, edi_1)

if (*(arg1 + 0x36) != 0 && *(arg1 + 0x35) != 0)
    int32_t eax_3 = arg1[0x18]
    
    if (eax_3 == 0xffffffff)
    label_6599b9:
        int32_t ecx_6 = arg1[0x19]
        
        if (ecx_6 != 0xffffffff)
            *(*(arg1[0x22] + (ecx_6 << 2)) + 0x9b) = 0
        else if (eax_3 != 0xffffffff)
            goto label_6599d8
    else if (arg1[0x19] != 0xffffffff)
        if (eax_3 == 0xffffffff)
            goto label_6599b9
        
    label_6599d8:
        int32_t ecx_7 = arg1[0x19]
        
        if (ecx_7 != 0xffffffff)
            *(*(*(arg1[0x2a] + eax_3 * 0x10) + (ecx_7 << 2)) + 0x9b) = 0
    else
        *(*(arg1[0x1e] + (eax_3 << 2)) + 0x9b) = 0

edx.b = arg1[0xd].b
int32_t x = point.x
int32_t y = point.y
*(arg1 + 0x35) = edx.b
*(arg1 + 0x36) = 0
arg1[4] = x
arg1[5] = y
return x

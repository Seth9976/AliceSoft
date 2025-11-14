// 函数: sub_6f08d0
// 地址: 0x6f08d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* ecx = arg1
void* edx = arg2
int32_t i

for (i = 0; i s< 8; )
    int32_t ebx_1 = sx.d(*ecx)
    
    if (ebx_1 s> 0xff)
        ebx_1 = 0xff
    else if (ebx_1 s< 0)
        ebx_1 = 0
    
    *edx = ebx_1.b
    int32_t ebx_2 = sx.d(ecx[1])
    
    if (ebx_2 s> 0xff)
        ebx_2 = 0xff
    else if (ebx_2 s< 0)
        ebx_2 = 0
    
    *(edx + 1) = ebx_2.b
    int32_t ebx_3 = sx.d(ecx[2])
    
    if (ebx_3 s> 0xff)
        ebx_3 = 0xff
    else if (ebx_3 s< 0)
        ebx_3 = 0
    
    *(edx + 2) = ebx_3.b
    int32_t ebx_4 = sx.d(ecx[3])
    
    if (ebx_4 s> 0xff)
        ebx_4 = 0xff
    else if (ebx_4 s< 0)
        ebx_4 = 0
    
    *(edx + 3) = ebx_4.b
    int32_t ebx_5 = sx.d(ecx[4])
    
    if (ebx_5 s> 0xff)
        ebx_5 = 0xff
    else if (ebx_5 s< 0)
        ebx_5 = 0
    
    *(edx + 4) = ebx_5.b
    int32_t ebx_6 = sx.d(ecx[5])
    
    if (ebx_6 s> 0xff)
        ebx_6 = 0xff
    else if (ebx_6 s< 0)
        ebx_6 = 0
    
    *(edx + 5) = ebx_6.b
    int32_t ebx_7 = sx.d(ecx[6])
    
    if (ebx_7 s> 0xff)
        ebx_7 = 0xff
    else if (ebx_7 s< 0)
        ebx_7 = 0
    
    *(edx + 6) = ebx_7.b
    int32_t ebx_8 = sx.d(ecx[7])
    
    if (ebx_8 s> 0xff)
        ebx_8 = 0xff
    else if (ebx_8 s< 0)
        ebx_8 = 0
    
    ecx = &ecx[8]
    i += 1
    *(edx + 7) = ebx_8.b
    edx += arg3

return i

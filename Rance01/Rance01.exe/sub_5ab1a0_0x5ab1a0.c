// 函数: sub_5ab1a0
// 地址: 0x5ab1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_4 = arg3
int32_t* esi = arg4
int32_t i_3 = *esi
int32_t i_4 = i_3

if (*(esi + 9) != 8)
    return 

arg1.b = esi[2].b
uint32_t eax_6

if (arg1.b == 2 && arg5 != 0)
    if (i_3 != 0)
        char* edi_1 = arg3
        int32_t i
        
        do
            arg1.b = ((((zx.d(*arg3) & 0xf8) << 5 | (zx.d(arg3[1]) & 0xf8)) * 4)
                | (zx.d(arg3[2]) s>> 3 & 0x1f))[arg5]
            *edi_1 = arg1.b
            arg3 = &arg3[3]
            edi_1 = &edi_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
        i_3 = i_4
        esi = arg4
    
    arg1.b = *(esi + 9)
    *(esi + 0xb) = arg1.b
    esi[2].b = 3
    *(esi + 0xa) = 1
    eax_6 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        esi[1] = (eax_6 u>> 3) * i_3
        return 
    
    esi[1] = (eax_6 * i_3 + 7) u>> 3
    return 

if (arg1.b == 6 && arg5 != 0)
    char* edi_2 = arg3
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int32_t edx_5
            edx_5.b = ((((zx.d(*arg3) & 0xf8) << 5 | (zx.d(arg3[1]) & 0xf8)) * 4)
                | (zx.d(arg3[2]) s>> 3 & 0x1f))[arg5]
            *edi_2 = edx_5.b
            arg3 = &arg3[4]
            edi_2 = &edi_2[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_3 = i_4
        esi = arg4
    
    arg1.b = *(esi + 9)
    *(esi + 0xb) = arg1.b
    esi[2].b = 3
    *(esi + 0xa) = 1
    eax_6 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        esi[1] = (eax_6 u>> 3) * i_3
        return 
    
    esi[1] = (eax_6 * i_3 + 7) u>> 3
    return 

if (arg1.b != 3 || arg2 == 0)
    return 

arg1 = arg3

if (i_3 == 0)
    return 

int32_t i_2

do
    uint32_t ecx_3
    ecx_3.b = *(zx.d(*arg1) + arg2)
    *arg1 = ecx_3.b
    arg1 = &arg1[1]
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)

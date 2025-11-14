// 函数: sub_5a8920
// 地址: 0x5a8920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg2
char ecx = *(edx + 9)

if (ecx u>= 8)
    return 

int32_t ebx
int32_t var_4_1 = ebx
uint32_t ecx_1 = zx.d(ecx)
int32_t* i_5 = *edx
void* ecx_4

if (ecx_1 == 1)
    char* esi_9 = ((i_5 - 1) u>> 3) + arg1
    void* ebp_3 = i_5 + arg1 - 1
    arg1 = 7 - ((i_5 - 1) & 7)
    
    if (i_5 != 0)
        int32_t* i_4 = i_5
        int32_t* i
        
        do
            ebx.b = *esi_9
            ecx_4.b = arg1.b
            ebx.b u>>= ecx_4.b
            ebx.b &= 1
            *ebp_3 = ebx.b
            
            if (arg1 != 7)
                arg1 += 1
            else
                arg1 = nullptr
                esi_9 -= 1
            
            ebp_3 -= 1
            i = i_4
            i_4 -= 1
        while (i != 1)
        edx = arg2
else if (ecx_1 == 2)
    char* esi_6 = ((i_5 - 1) u>> 2) + arg1
    void* ebp_2 = i_5 + arg1 - 1
    arg1 = (3 - ((i_5 - 1) & 3)) * 2
    
    if (i_5 != 0)
        int32_t* i_3 = i_5
        int32_t* i_1
        
        do
            ebx.b = *esi_6
            ecx_4.b = arg1.b
            ebx.b u>>= ecx_4.b
            ebx.b &= 3
            *ebp_2 = ebx.b
            
            if (arg1 != 6)
                arg1 += 2
            else
                arg1 = nullptr
                esi_6 -= 1
            
            ebp_2 -= 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        edx = arg2
else if (ecx_1 == 4)
    char* esi_3 = ((i_5 - 1) u>> 1) + arg1
    void* ebp_1 = i_5 + arg1 - 1
    arg1 = (1 - ((i_5 - 1) & 1)) * 4
    
    if (i_5 != 0)
        arg2 = i_5
        int32_t* i_2
        
        do
            ebx.b = *esi_3
            ecx_4.b = arg1.b
            ebx.b u>>= ecx_4.b
            ebx.b &= 0xf
            *ebp_1 = ebx.b
            
            if (arg1 != 4)
                arg1 = 4
            else
                arg1 = nullptr
                esi_3 -= 1
            
            ebp_1 -= 1
            i_2 = arg2
            arg2 -= 1
        while (i_2 != 1)

arg1.b = *(edx + 0xa)
ecx_4.b = arg1.b
ecx_4.b *= 2
ecx_4.b *= 2
ecx_4.b *= 2
*(edx + 9) = 8
*(edx + 0xb) = ecx_4.b
edx[1] = zx.d(arg1.b) * i_5

// 函数: sub_4018a0
// 地址: 0x4018a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t ebp = arg3[4]
void* eax = nullptr
void* esi = 0xffffffff

if (ebp s> 0)
    int32_t edi_1 = arg3[5]
    
    do
        char* edx
        
        if (edi_1 u< 0x10)
            edx = arg3
        else
            edx = *arg3
        
        char* edx_1
        
        if (*(edx + eax) u>= 0x81)
            if (edi_1 u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
        
        char* edx_2
        
        if (*(edx + eax) u< 0x81 || *(edx_1 + eax) u> 0x9f)
            if (edi_1 u< 0x10)
                edx_2 = arg3
            else
                edx_2 = *arg3
        
        if ((*(edx + eax) u< 0x81 || *(edx_1 + eax) u> 0x9f) && *(edx_2 + eax) u< 0xe0)
            char* edx_3
            
            if (edi_1 u< 0x10)
                edx_3 = arg3
            else
                edx_3 = *arg3
            
            if (*(edx_3 + eax) == 0x5c)
                esi = eax
            
            eax += 1
        else
            eax += 2
    while (eax s< ebp)
    
    if (esi != 0xffffffff)
        sub_401ec0(arg3, arg4, 0, esi + 1)
        return arg4

*(arg4 + 0x14) = 0xf
*(arg4 + 0x10) = 0
*arg4 = 0
return arg4

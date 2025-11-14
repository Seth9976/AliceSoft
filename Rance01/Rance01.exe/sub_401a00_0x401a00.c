// 函数: sub_401a00
// 地址: 0x401a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
void* ebp = arg3[4]
int32_t eax = 0

if (ebp s> 0)
    int32_t edi_1 = arg3[5]
    
    do
        char* edx
        
        if (edi_1 u< 0x10)
            edx = arg3
        else
            edx = *arg3
        
        int32_t* edx_1
        
        if (edx[eax] u>= 0x81)
            if (edi_1 u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
        
        char* edx_2
        
        if (edx[eax] u< 0x81 || *(edx_1 + eax) u> 0x9f)
            if (edi_1 u< 0x10)
                edx_2 = arg3
            else
                edx_2 = *arg3
        
        if ((edx[eax] u< 0x81 || *(edx_1 + eax) u> 0x9f) && edx_2[eax] u< 0xe0)
            int32_t* edx_3
            
            if (edi_1 u< 0x10)
                edx_3 = arg3
            else
                edx_3 = *arg3
            
            if (*(edx_3 + eax) == 0x5c)
                break
            
            eax += 1
        else
            eax += 2
    while (eax s< ebp)

if (eax s< ebp)
    sub_401ec0(arg3, arg1, eax + 1, ebp)
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401180(arg1, 0xffffffff, arg3, 0)
return arg1

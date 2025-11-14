// 函数: sub_401d60
// 地址: 0x401d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t ebp = arg3[4]
int32_t eax = 0

if (ebp s> 0)
    int32_t edi_1 = arg3[5]
    char* edx_1
    
    do
        char* edx
        
        if (edi_1 u< 0x10)
            edx = arg3
        else
            edx = *arg3
        
        if (edx[eax] u>= 0x81)
            if (edi_1 u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
        
        if (edx[eax] u>= 0x81 && edx_1[eax] u<= 0x9f)
            eax += 2
            edx_1.b = 0
        else
            if (edi_1 u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
            
            if (edx_1[eax] u< 0xe0)
                if (edi_1 u< 0x10)
                    edx_1 = arg3
                else
                    edx_1 = *arg3
                
                edx_1.b = edx_1[eax] == 0x5c
                eax += 1
            else
                eax += 2
                edx_1.b = 0
    while (eax s< ebp)
    
    if (edx_1.b != 0)
        sub_401ec0(arg3, arg1, 0, ebp - 1)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401180(arg1, 0xffffffff, arg3, 0)
return arg1

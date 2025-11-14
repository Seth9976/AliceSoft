// 函数: sub_429a30
// 地址: 0x429a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_401180(arg2, 0xffffffff, arg1, 0)
int32_t edi = arg2[4]
int32_t eax = 0

if (edi != 0)
    do
        int32_t edx_1 = arg2[5]
        char* ecx_2
        
        if (edx_1 u< 0x10)
            ecx_2 = arg2
        else
            ecx_2 = *arg2
        
        char* ecx_3
        
        if (ecx_2[eax] u>= 0x81)
            if (edx_1 u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
        
        char* ecx_4
        
        if (ecx_2[eax] u< 0x81 || ecx_3[eax] u> 0x9f)
            if (edx_1 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
        
        if ((ecx_2[eax] u< 0x81 || ecx_3[eax] u> 0x9f) && ecx_4[eax] u< 0xe0)
            int32_t* ecx_5
            
            if (edx_1 u< 0x10)
                ecx_5 = arg2
            else
                ecx_5 = *arg2
            
            if (*(ecx_5 + eax) == 0x2f)
                int32_t* ecx_6
                
                if (edx_1 u< 0x10)
                    ecx_6 = arg2
                else
                    ecx_6 = *arg2
                
                *(ecx_6 + eax) = 0x5c
        else
            eax += 1
        
        eax += 1
    while (eax u< edi)

return arg2

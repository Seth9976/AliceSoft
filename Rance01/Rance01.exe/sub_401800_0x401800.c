// 函数: sub_401800
// 地址: 0x401800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t ebp = arg2[4]
int32_t eax = 0

if (ebp s> 0)
    int32_t esi_1 = arg2[5]
    int32_t* ecx_1
    
    do
        char* ecx
        
        if (esi_1 u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        if (ecx[eax] u>= 0x81)
            if (esi_1 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
        
        if (ecx[eax] u>= 0x81 && *(ecx_1 + eax) u<= 0x9f)
            eax += 2
            ecx_1.b = 0
        else
            if (esi_1 u< 0x10)
                ecx_1 = arg2
            else
                ecx_1 = *arg2
            
            if (*(ecx_1 + eax) u< 0xe0)
                if (esi_1 u< 0x10)
                    ecx_1 = arg2
                else
                    ecx_1 = *arg2
                
                ecx_1.b = *(ecx_1 + eax) == 0x5c
                eax += 1
            else
                eax += 2
                ecx_1.b = 0
    while (eax s< ebp)
    
    if (ecx_1.b != 0)
        arg3[5] = 0xf
        arg3[4] = 0
        *arg3 = 0
        sub_401180(arg3, 0xffffffff, arg2, 0)
        return arg3

sub_4020e0(arg3, arg2)
return arg3

// 函数: sub_58df10
// 地址: 0x58df10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 4)
int32_t* i = arg3

if (i == *eax && arg4 == eax)
    sub_58dec0(eax[1])
    void* eax_2 = *(arg1 + 4)
    *(eax_2 + 4) = eax_2
    int32_t* eax_3 = *(arg1 + 4)
    *eax_3 = eax_3
    void* eax_4 = *(arg1 + 4)
    *(eax_4 + 8) = eax_4
    int32_t* ecx_1 = *(arg1 + 4)
    *(arg1 + 8) = 0
    *arg2 = *ecx_1
    return arg2

for (; i != arg4; i = arg3)
    int32_t* i_2 = i
    
    if (*(i + 0x21) == 0)
        int32_t* eax_6 = i[2]
        
        if (*(eax_6 + 0x21) != 0)
            int32_t* i_1 = i[1]
            
            if (*(i_1 + 0x21) == 0)
                while (i == i_1[2])
                    i = i_1
                    arg3 = i
                    i_1 = i_1[1]
                    
                    if (*(i_1 + 0x21) != 0)
                        break
            
            arg3 = i_1
        else
            int32_t* ecx_2 = eax_6
            int32_t* eax_7 = *ecx_2
            
            while (*(eax_7 + 0x21) == 0)
                ecx_2 = eax_7
                eax_7 = *ecx_2
            
            arg3 = ecx_2
    
    int32_t __saved_ecx
    sub_58dfd0(arg1, &__saved_ecx, i_2)

*arg2 = i
return arg2

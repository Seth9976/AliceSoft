// 函数: sub_430250
// 地址: 0x430250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[7] == 0)
    return 

while (arg1[8] != 0)
    int32_t eax_1
    
    if (arg1[0x17].b != 0 || arg1[0x15].b != 0)
        eax_1 = 0
    else
        eax_1 = 1
    
    int32_t edx_1 = arg6[1]
    int32_t i = arg1[0x16] + eax_1
    struct _EXCEPTION_REGISTRATION_RECORD** eax = *arg6
    int32_t i_1 = i
    
    if (eax != edx_1)
        while (*eax != i)
            eax = &eax[1]
            
            if (eax == edx_1)
                break
        
        if (eax != edx_1)
            break
    
    sub_416780(&i_1, arg6)
    arg1[0x15].b = 0
    int32_t eax_4 = *(arg1[8] + 0x18)
    bool cond:1_1 = eax_4 s< i_1
    int32_t var_10 = eax_4
    int32_t var_c = 0
    int32_t* eax_5 = &var_10
    
    if (not(cond:1_1))
        eax_5 = &i_1
    
    if (*eax_5 s<= 0)
        eax_5 = &var_c
    
    struct _EXCEPTION_REGISTRATION_RECORD** edi_2 = *eax_5
    arg1[0x16] = edi_2
    sub_430400(arg1, edi_2)
    
    if (arg1[0x16] == edi_2)
        sub_4304c0(arg1, edi_2, arg3.b)
        sub_430500(arg2, arg1, edi_2, arg3, arg4, 1, arg5)
        break
    
    if (arg1[7] == 0)
        return 

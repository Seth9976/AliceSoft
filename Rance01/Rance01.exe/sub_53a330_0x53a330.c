// 函数: sub_53a330
// 地址: 0x53a330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_c = arg1
int32_t eax
int32_t edx

if (arg3 != 0)
    enum MESSAGEBOX_RESULT eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_53a950(arg2, arg1)
    
    if (eax_2.b == 0)
        sub_53d1c0(eax_2, edx_1, arg1, "MainSystem")
        int32_t* eax_3
        eax_3.b = 0
        return eax_3
    
    if (sub_54f480(&arg1[0x10]) == 0)
        sub_604c90(0x74cc84)
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    arg1[3] = (**arg1[8])()
    
    if (sub_53aa10(arg2, arg1) == 0)
        sub_604c90(0x74ccb0)
        enum MESSAGEBOX_RESULT eax_9
        eax_9.b = 0
        return eax_9
    
    if ((*arg1[1])() != 0)
        sub_52c320(&arg1[0x4be], &arg1[0x13])
    
    if ((**arg3)() != 0 && sub_53b080(arg1) != 0 && sub_53db80(arg1) != 0)
        int32_t* eax_14
        int32_t edx_5
        eax_14, edx_5 = sub_53b170(arg1)
        
        if (eax_14.b == 0)
            return sub_53d1c0(eax_14, edx_5, arg1, 0x74cccc)
        
        if (sub_53afd0() != 0)
            sub_53ce60(0, arg1)
        
        return 1
else
    sub_53d1c0(eax, edx, arg1, "MainSystem")
return 0

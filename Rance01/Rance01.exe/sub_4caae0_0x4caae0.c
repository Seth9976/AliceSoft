// 函数: sub_4caae0
// 地址: 0x4caae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** eax = *(arg2 + 0x50)

if (eax != 0)
    int32_t var_c_1 = arg7
    struct _EXCEPTION_REGISTRATION_RECORD** var_20_1 = arg1
    
    if (sub_4eba80(eax, arg1, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[0x4c])))), arg3, 
            arg4, arg5, arg6).b == 0)
        sub_51ddc0(0x75608c)
        enum MESSAGEBOX_RESULT eax_1
        eax_1.b = 0
        return eax_1

eax.b = 1
return eax

// 函数: sub_5cc5d0
// 地址: 0x5cc5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void** arg_4
int32_t* ebx = arg_4

if (arg2[4] != 0)
    if (arg2[7].b != 0)
        goto label_5cc60b
    
    if (sub_5cc7e0(arg2) != 0)
        arg2[7].b = 1
    label_5cc60b:
        void** eax_3 = sub_5cdae0(&arg2[0xc], ebx)
        arg_4 = eax_3
        char eax_5
        
        if (eax_3 != arg2[0xd])
            eax_5 = sub_405dd0(&eax_3[3], ebx)
        
        void*** eax_6
        
        if (eax_3 == arg2[0xd] || eax_5 != 0)
            var_4 = arg2[0xd]
            eax_6 = &var_4
        else
            eax_6 = &arg_4
        
        struct _EXCEPTION_REGISTRATION_RECORD** result = *eax_6
        
        if (result != arg2[0xd])
            sub_50da00(&arg2[0xc], &arg_4, result)
            result = sub_5ccb30(arg2)
            
            if (result.b == 0)
                return result
        
        result.b = 1
        return result
else
    sub_604c90(0x73750c)

return 0

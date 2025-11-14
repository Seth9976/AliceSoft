// 函数: sub_5cc4c0
// 地址: 0x5cc4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum MESSAGEBOX_RESULT result

if (arg1[4] != 0)
    if (arg1[7].b != 0)
        goto label_5cc4ff
    
    if (sub_5cc7e0(arg1).b != 0)
        arg1[7].b = 1
    label_5cc4ff:
        int32_t ebx_1 = arg1[0xd]
        void** eax_3 = sub_5cdae0(&arg1[0xc], arg2)
        void** var_14 = eax_3
        char eax_5
        
        if (eax_3 != arg1[0xd])
            eax_5 = sub_405dd0(&eax_3[3], arg2)
        
        void* var_10
        
        if (eax_3 == arg1[0xd] || eax_5 != 0)
            var_10 = arg1[0xd]
            result = &var_10
        else
            result = &var_14
        
        if (*result != ebx_1)
            result.b = 1
            return result
        
        sub_4fd4d0(&arg1[0xc], &var_10, arg2)
        
        if (sub_5ccb30(arg1).b != 0)
            result.b = 1
            return result
else
    sub_604c90(0x73750c)

result.b = 0
return result

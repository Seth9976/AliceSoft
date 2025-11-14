// 函数: sub_6c1aa4
// 地址: 0x6c1aa4
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_10 = edi

if ((arg2[3].b & 0x40) != 0)
label_6c1b2a:
    
    if (arg1 != 0xffffffff)
        char eax_7 = (arg2[3]).b
        
        if ((eax_7 & 1) != 0)
        label_6c1b41:
            
            if (arg2[2] == 0)
                sub_6c1cb7(arg2)
            
            int32_t eax_8 = *arg2
            
            if (eax_8 != arg2[2])
                goto label_6c1b5a
            
            if (arg2[1] == 0)
                *arg2 = eax_8 + 1
            label_6c1b5a:
                *arg2 -= 1
                char* eax_10 = *arg2
                
                if ((arg2[3].b & 0x40) == 0)
                    *eax_10 = arg1.b
                label_6c1b6f:
                    int32_t eax_12 = arg2[3]
                    arg2[1] += 1
                    arg2[3] = (eax_12 & 0xffffffef) | 1
                    return zx.d(arg1.b)
                
                if (*eax_10 == arg1.b)
                    goto label_6c1b6f
                
                *arg2 = &eax_10[1]
        else if (eax_7 s< 0 && (eax_7 & 2) == 0)
            goto label_6c1b41
else
    int32_t eax_1 = __fileno(arg2)
    void* ecx_5
    
    if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
        ecx_5 = &data_78c560
    else
        ecx_5 = ((eax_1 & 0x1f) << 6) + (&data_798100)[eax_1 s>> 5]
    
    void* eax_4
    
    if ((*(ecx_5 + 0x24) & 0x7f) == 0)
        if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
            eax_4 = &data_78c560
        else
            eax_4 = ((eax_1 & 0x1f) << 6) + (&data_798100)[eax_1 s>> 5]
    
    if ((*(ecx_5 + 0x24) & 0x7f) == 0 && (*(eax_4 + 0x24) & 0x80) == 0)
        goto label_6c1b2a
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0xffffffff

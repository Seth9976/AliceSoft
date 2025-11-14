// 函数: sub_58e3b0
// 地址: 0x58e3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_1 = arg1
(*(*arg1 + 0xc))()
int32_t var_4

if (arg5 == 1)
    var_4 = 0x15
else if (arg5 == 2)
    var_4 = 0x71
else
    if (arg5 != 3)
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    var_4 = 0x72

int32_t* eax_7
int32_t ecx_1

switch (arg6)
    case nullptr
    label_58e454:
        int32_t* eax_9 = **(arg1[2] + 0x1c)
        
        if ((*(*eax_9 + 0x5c))(eax_9, arg2, arg3, arg4, 1, var_4, 0, &arg1[4], 0) s>= 0)
            int32_t* ebx_3 = arg1[4]
            
            if ((*(*ebx_3 + 0x48))(ebx_3, 0, &arg1[5]) s>= 0)
                if (arg7 == 0)
                label_58e4d8:
                    arg1[0xe] = arg6
                    arg1[0xa] = arg2
                    arg1[0xb] = arg3
                    arg1[0xc] = arg4
                    arg1[0xd] = arg5
                    arg1[0xf].b = arg7
                    *(arg1 + 0x3d) = 1
                    int32_t edx_12 = sub_58ea10(arg2) * sub_58ea10(arg3)
                    arg1[0x10] = edx_12
                    
                    if (arg5 == 1)
                        arg1[0x10] = edx_12 * 4
                    else if (arg5 == 2)
                        arg1[0x10] = edx_12 << 3
                    else if (arg5 == 3)
                        arg1[0x10] = edx_12 << 2
                    
                    if (arg6 != 0)
                        arg1[0x10] *= 4
                    
                    int32_t eax_16
                    eax_16.b = 1
                    return eax_16
                
                eax_7 = (*(*arg1[2] + 0x1c))()
                arg1[9] = eax_7
                
                if (eax_7 != 0 && (*(*eax_7 + 8))(arg2, arg3, arg6).b != 0)
                    goto label_58e4d8
    case 1
        ecx_1 = 2
    label_58e42a:
        int32_t* eax_6 = **(arg1[2] + 0x1c)
        
        if ((*(*eax_6 + 0x70))(eax_6, arg2, arg3, var_4, ecx_1, 0, 0, &arg1[7], 0) s>= 0)
            goto label_58e454
    case 2
        ecx_1 = 4
        goto label_58e42a
    case 3
        ecx_1 = 8
        goto label_58e42a
    case 4
        ecx_1 = 0x10
        goto label_58e42a

eax_7.b = 0
return eax_7

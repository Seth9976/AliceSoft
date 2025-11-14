// 函数: sub_5c3e80
// 地址: 0x5c3e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c
void* const var_8
void* const var_4
void* const eax
void* const ecx_1

if (arg1 == 0)
    eax = nullptr
label_5c3eb7:
    var_8 = nullptr
    var_4 = nullptr
    ecx_1 = nullptr
    var_c = 0
else
    eax = arg1[0x10]
    
    if (eax == 0)
        goto label_5c3eb7
    
    var_8 = *(eax + 0x68)
    ecx_1 = *(eax + 4)
    var_4 = ecx_1
    
    if (ecx_1 == 0)
        var_c = 0
    else
        var_c = *(ecx_1 + 0x1c)

void* ebx

if (arg1 == 0)
    ebx = nullptr
else
    ebx = &arg1[1]

if (eax != 0 && var_8 != 0 && ecx_1 != 0 && var_c != 0 && ebx != 0)
    sub_5b4f10(arg1)
    int32_t edx_1 = arg2[1]
    int32_t ecx_2 = *arg2
    *ebx = 0
    *(ebx + 4) = 0
    *(ebx + 0xc) = ecx_2
    *(ebx + 8) = ecx_2
    *(ebx + 0x10) = edx_1
    
    if (sub_5b4d20(1, ebx) != 0)
        return 0xffffff79
    
    int32_t eax_4 = sub_5b4d20(*(var_8 + 0x2c), ebx)
    
    if (eax_4 != 0xffffffff)
        arg1[0xa] = eax_4
        int32_t* eax_5 = *(var_c + (eax_4 << 2) + 0x20)
        
        if (eax_5 != 0)
            int32_t eax_6 = *eax_5
            arg1[7] = eax_6
            
            if (eax_6 == 0)
                arg1[6] = 0
                arg1[8] = 0
            label_5c3f9e:
                arg1[0xc] = arg2[4]
                arg1[0xd] = arg2[5]
                arg1[0xe] = arg2[6]
                int32_t ecx_5 = arg1[7]
                arg1[0xf] = arg2[7]
                arg1[0xb] = arg2[3]
                arg1[9] = *(var_c + (ecx_5 << 2))
                int32_t i = 0
                *arg1 = sub_5b4eb0(*(var_4 + 4) * 4, arg1)
                
                if (*(var_4 + 4) s> 0)
                    do
                        *(*arg1 + (i << 2)) = sub_5b4eb0(arg1[9] * 4, arg1)
                        i += 1
                    while (i s< *(var_4 + 4))
                
                int32_t eax_22 = *(*(var_c + (eax_4 << 2) + 0x20) + 0xc)
                return (*((&data_73fa80)[*(var_c + (eax_22 << 2) + 0x120)] + 0x10))(arg1, 
                    *(var_c + (eax_22 << 2) + 0x220))
            
            arg1[6] = sub_5b4d20(1, ebx)
            int32_t eax_8 = sub_5b4d20(1, ebx)
            arg1[8] = eax_8
            
            if (eax_8 != 0xffffffff)
                goto label_5c3f9e

return 0xffffff78

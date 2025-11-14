// 函数: sub_625770
// 地址: 0x625770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg1 == arg1[1])
    int32_t eax
    eax.b = 1
    return eax

int32_t* eax_2 = (*(**(arg2 + 4) + 4))(arg3)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

struct _EXCEPTION_REGISTRATION_RECORD** eax_4

if ((*(*eax_2 + 0x14))() != (arg1[1] - *arg1) s>> 2 << 2)
label_625834:
    eax_4.b = 0
    return eax_4

int32_t eax_6 = (*(*eax_2 + 0x18))()
int32_t eax_7 = *arg1
int32_t esi_1 = 0

if (((arg1[1] - eax_7) & 0xfffffffc) s> 0)
    while (true)
        eax_4 = *(eax_7 + (esi_1 << 2))
        int32_t ecx_6 = *(eax_6 + (esi_1 << 2))
        
        if (eax_4 u> 0x44)
            goto label_625834
        
        struct _EXCEPTION_REGISTRATION_RECORD*** var_10_1
        
        switch (eax_4)
            case nullptr, 0xa, 0xb, 0x1a, 0x1b, 0x2f
            label_62581b:
                eax_7 = *arg1
                esi_1 += 1
                
                if (esi_1 s>= (arg1[1] - eax_7) s>> 2)
                    break
                
                continue
            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0x1c, 0x1d, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 0x35, 0x36, 0x37, 0x38, 
                    0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41
                goto label_625834
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x3f, 0x42
                if (ecx_6 == 0xffffffff)
                    goto label_62581b
                
                var_10_1 = arg4
            label_625812:
                
                if (sub_625410(arg2, ecx_6, var_10_1).b == 0)
                    goto label_625834
                
                goto label_62581b
            case 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 0x44
                if (ecx_6 == 0xffffffff)
                    goto label_62581b
                
                var_10_1 = arg4
                goto label_625812

eax_7.b = 1
return eax_7

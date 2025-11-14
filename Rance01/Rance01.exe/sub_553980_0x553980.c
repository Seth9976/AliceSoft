// 函数: sub_553980
// 地址: 0x553980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_18
int32_t eax_1 = data_78c474 ^ &var_18
uint32_t eax_2 = *(arg5 + 0x1c)
var_18 = arg2

switch (eax_2)
    case 0, 0xa, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 0x2f, 0x33, 
            0x34, 0x43, 0x44
        eax_2 = arg3[1]
        
        if (arg4 u< eax_2 u>> 2)
            if (eax_2 != 0)
                *(*arg3 + (arg4 << 2)) = arg2
                eax_2.b = 1
                sub_6b4885(eax_1 ^ &var_18)
                return eax_2
            
            *(arg4 << 2) = arg2
            eax_2.b = 1
            sub_6b4885(eax_1 ^ &var_18)
            return eax_2
    case 0xb
        void* var_2c_1 = arg1
        eax_2 = sub_54f950(arg3, arg4, fconvert.s(fconvert.t(var_18)))
    label_553a17:
        
        if (eax_2.b != 0)
        label_553bda:
            eax_2.b = 1
            sub_6b4885(eax_1 ^ &var_18)
            return eax_2
    case 0xc
        if (sub_54f990(arg3, arg4, &var_18).b != 0)
            int32_t* eax_4
            int32_t edx_4
            eax_4, edx_4 = sub_5529f0(arg1, arg4, var_18)
            eax_2 = sub_5529f0(arg1, edx_4, arg2)
            
            if (eax_4 != 0 && eax_2 != 0)
                eax_2 = sub_5506c0(eax_4, eax_2)
                goto label_553a17
    case 0xd
        if (sub_54f990(arg3, arg4, &var_18).b != 0)
            int32_t* eax_10
            int32_t edx_8
            eax_10, edx_8 = sub_5529f0(arg1, arg4, arg2)
            int32_t* ebx_3 = sub_5529f0(arg1, edx_8, var_18)
            
            if (eax_10 != 0 && ebx_3 != 0)
                int32_t ecx_24
                eax_2, ecx_24 = sub_5538d0(arg1, ebx_3, eax_10)
                
                if (eax_2.b != 0)
                    sub_54fb30(ecx_24, ebx_3)
                    int32_t eax_12
                    eax_12.b = 1
                    sub_6b4885(eax_1 ^ &var_18)
                    return eax_12
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        eax_2 = *(arg1 + 8)
        
        if (arg2 u< (*(arg1 + 0xc) - eax_2) s>> 2)
            uint32_t edi_1 = *(eax_2 + (arg2 << 2))
            
            if (edi_1 != 0 && sub_54f990(arg3, arg4, &var_18).b != 0)
                eax_2 = sub_5529f0(arg1, arg4, var_18)
                uint32_t esi_1 = eax_2
                
                if (esi_1 != 0)
                    if (*(esi_1 + 0x40) != 0)
                        eax_2 = sub_5514f0(eax_2)
                    
                    if (*(esi_1 + 0x40) == 0 || eax_2.b != 0)
                        if (*(edi_1 + 0x40) == 0)
                            goto label_553bda
                        
                        void var_14
                        
                        if (sub_551170(edi_1, &var_14).b != 0)
                            *(esi_1 + 0x34) = *(arg5 + 0x1c)
                            *(esi_1 + 0x38) = *(arg5 + 0x20)
                            
                            if (sub_550ca0(esi_1, *(edi_1 + 0x3c), &var_14, 0).b != 0)
                                eax_2 = sub_5511e0(esi_1, edi_1)
                                goto label_553a17
    case 0x3f
        uint32_t edi_3 = sub_5529f0(arg1, arg2, arg2)
        
        if (edi_3 != 0 && sub_54f990(arg3, arg4, &var_18).b != 0)
            eax_2 = sub_5529f0(arg1, arg4, var_18)
            
            if (eax_2 != 0 && sub_551ff0(eax_2, edi_3).b != 0)
                goto label_553bda

eax_2.b = 0
sub_6b4885(eax_1 ^ &var_18)
return eax_2

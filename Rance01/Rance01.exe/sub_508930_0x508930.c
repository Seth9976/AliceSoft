// 函数: sub_508930
// 地址: 0x508930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t* var_10
int32_t* eax_2
void* esi_1

if (ebp[0xe1].b != 0)
    esi_1 = *ebp
    arg1 = 2.80259693e-45f
    sub_42e070(esi_1 + 0x14c, &var_10, &arg1)
    eax_2 = var_10

if (ebp[0xe1].b == 0 || eax_2 == *(esi_1 + 0x150) || eax_2[4] s<= 0 || *(esi_1 + 0x34) == 0)
    arg1.b = 0
    
    if (sub_508d10(ebp).b != 0)
        int32_t* ecx_4 = ebp[1]
        int32_t* var_30_4 = ecx_4
        (*(*ecx_4 + 0x48))(fconvert.s(float.t(1)))
    label_5089d3:
        int16_t x87control_1
        long double st0_1
        st0_1, eax_2, x87control_1 = sub_4b20f0(ebp[1], &ebp[0x186])
        
        if (eax_2.b != 0)
            int32_t* arg_8
            int32_t* edi_3 = arg_8
            
            if (sub_4ced50(edi_3, 0, &ebp[2], ebp[1]) != 0)
                if (sub_509df0(&ebp[2]).b != 0)
                    if (ebp[0x49].b == 0)
                        goto label_508a3d
                    
                    if (sub_514460(ebp[1], &ebp[0x85]).b != 0)
                        edi_3 = arg_8
                    label_508a3d:
                        
                        if (sub_4ced50(edi_3, 1, &ebp[2], ebp[1]) == 0)
                            sub_51ddc0(0x754528)
                            enum MESSAGEBOX_RESULT eax_10
                            eax_10.b = 0
                            return 
                        
                        if (sub_509df0(&ebp[2]).b != 0)
                            if (ebp[0x15b].b == 0)
                                goto label_508ba0
                            
                            void* eax_12 = *ebp
                            long double x87_r7_3 = float.t(0)
                            float var_18_1
                            
                            if (((*(eax_12 + 0x1a8) - *(eax_12 + 0x1a4)) & 0xfffffffc) s> 0)
                                var_18_1 = fconvert.s(fconvert.t(**(eax_12 + 0x1a4)))
                            else
                                var_18_1 = fconvert.s(x87_r7_3)
                            
                            float var_14_1
                            
                            if (((*(eax_12 + 0x1a8) - *(eax_12 + 0x1a4)) & 0xfffffffc) s> 4)
                                var_14_1 = fconvert.s(fconvert.t(*(*(eax_12 + 0x1a4) + 4)))
                            else
                                var_14_1 = fconvert.s(x87_r7_3)
                            
                            if (((*(eax_12 + 0x1a8) - *(eax_12 + 0x1a4)) & 0xfffffffc) s> 8)
                                x87_r7_3 = fconvert.t(*(*(eax_12 + 0x1a4) + 8))
                            
                            bool cond:1_1 = *(eax_12 + 0x1d4) == 1
                            var_10 = fconvert.s(x87_r7_3)
                            long double x87_r7_4 = fconvert.t(var_18_1)
                            int32_t* esi_3 = ebp[1]
                            long double x87_r6_3 = fconvert.t(255.0)
                            eax_12.b = cond:1_1
                            int16_t x87status_1
                            int16_t temp0_1
                            temp0_1, x87status_1 = __fnstcw_memmem16(x87control_1)
                            var_18_1.w = temp0_1
                            int16_t x87control_2
                            int16_t x87status_2
                            x87control_2, x87status_2 =
                                __fldcw_memmem16((zx.d(var_18_1.w) | 0xc00).w)
                            int32_t var_c_1
                            var_c_1.q = int.q(x87_r7_4 * x87_r6_3)
                            int16_t x87control_3
                            int16_t x87status_3
                            x87control_3, x87status_3 = __fldcw_memmem16(var_18_1.w)
                            int16_t x87status_4
                            int16_t temp0_3
                            temp0_3, x87status_4 = __fnstcw_memmem16(x87control_3)
                            var_18_1.w = temp0_3
                            int16_t x87control_4
                            int16_t x87status_5
                            x87control_4, x87status_5 =
                                __fldcw_memmem16((zx.d(var_18_1.w) | 0xc00).w)
                            int32_t var_c_2
                            var_c_2.q = int.q(fconvert.t(var_14_1) * x87_r6_3)
                            int16_t x87control_5
                            int16_t x87status_6
                            x87control_5, x87status_6 = __fldcw_memmem16(var_18_1.w)
                            long double x87_r7_7 = x87_r6_3 * fconvert.t(var_10)
                            int16_t x87status_7
                            int16_t temp0_4
                            temp0_4, x87status_7 = __fnstcw_memmem16(x87control_5)
                            var_18_1.w = temp0_4
                            int16_t x87control_6
                            int16_t x87status_8
                            x87control_6, x87status_8 =
                                __fldcw_memmem16((zx.d(var_18_1.w) | 0xc00).w)
                            int32_t var_c_3
                            var_c_3.q = int.q(x87_r7_7)
                            int16_t x87control_7
                            int16_t x87status_9
                            x87control_7, x87status_9 = __fldcw_memmem16(var_18_1.w)
                            
                            if (sub_51ab10(esi_3, &ebp[0x15c], 
                                    (var_c_1 << 8 | var_c_2) << 8 | var_c_3, eax_12.b).b != 0)
                                edi_3 = arg_8
                            label_508ba0:
                                
                                if (*(*ebp + 0x1d4) != 0)
                                label_508bf5:
                                    int32_t ecx_17
                                    int32_t edx_15
                                    eax_2, ecx_17, edx_15 = sub_509040(ebp)
                                    
                                    if (eax_2.b != 0)
                                        if (arg1.b == 0)
                                            if (sub_508d90(ebp, edx_15, ecx_17).b != 0)
                                                eax_2.b = 1
                                                return 
                                        else if (sub_50a950(&ebp[0xdc]).b != 0)
                                            void* esi_4 = *ebp
                                            arg_8 = 2
                                            sub_42e070(esi_4 + 0x14c, &arg1, &arg_8)
                                            eax_2 = arg1
                                            
                                            if (eax_2 != *(esi_4 + 0x150) && eax_2[4] s> 0
                                                    && ebp[0x10d].b != 0 && *(esi_4 + 0x34) != 0)
                                                int32_t* eax_24 = ebp[0x155]
                                                arg_8 = fconvert.s(fconvert.t(*(esi_4 + 0x40)))
                                                float ecx_19 = ebp[0xdc]
                                                int32_t* edi_6 = ebp[1]
                                                arg1 = fconvert.s(fconvert.t(*(esi_4 + 0x3c)))
                                                float var_c_4 =
                                                    fconvert.s(fconvert.t(*(esi_4 + 0x38)))
                                                var_10 = fconvert.s(fconvert.t(*(esi_4 + 0x120)))
                                                arg_8 = fconvert.s(fconvert.t(arg_8)
                                                    * fconvert.t(0.0010000000474974513))
                                                
                                                if (sub_4b8990(edi_6, &ebp[0xeb], ecx_19, eax_24, 
                                                        fconvert.s(fconvert.t(var_10)), 
                                                        fconvert.s(fconvert.t(var_c_4)), 
                                                        fconvert.s(fconvert.t(arg1)), 
                                                        fconvert.s(fconvert.t(arg_8))).b == 0)
                                                    return 
                                            
                                            eax_2.b = 1
                                            return 
                                else if (sub_4ced50(edi_3, 2, &ebp[2], ebp[1]).b != 0
                                        && sub_4b8bc0(edi_3, 6, &ebp[2], ebp[1]).b != 0
                                        && sub_4b8bc0(edi_3, 7, &ebp[2], ebp[1]).b != 0
                                        && sub_509df0(&ebp[2]).b != 0)
                                    goto label_508bf5
            else
                sub_51ddc0(0x7544f4)
else
    int32_t* ecx_2 = ebp[0xdc]
    arg1.b = 1
    
    if (ecx_2 != 0 && (*(*ecx_2 + 0x14))().b != 0)
        int32_t* ecx_3 = ebp[1]
        int32_t* var_30_2 = ecx_3
        (*(*ecx_3 + 0x44))(0, fconvert.s(float.t(1)))
        goto label_5089d3

eax_2.b = 0

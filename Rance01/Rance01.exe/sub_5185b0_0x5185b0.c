// 函数: sub_5185b0
// 地址: 0x5185b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_1b8
int32_t eax_1 = data_78c474 ^ &var_1b8
float* result = arg3
void* ebx = arg1
int32_t ebp = arg2
void* var_1b0 = ebx
int32_t var_190 = ebp
float* result_1 = result

if (ebp s>= 0)
    int32_t edx_1
    edx_1:result = muls.dp.d(0x2fa0be83, *(ebx + 0xc) - *(ebx + 8))
    int32_t edx_2 = edx_1 s>> 5
    
    if (ebp s< (edx_2 u>> 0x1f) + edx_2)
        void* edi_3 = ebp * 0xac + *(ebx + 8)
        
        if (*(edi_3 + 0x50) != 0)
            float var_1a8
            int32_t edx_3 = sub_518030(ebx, &var_1a8)
            float* result_2 = nullptr
            float var_19c_1 = fconvert.s(fconvert.t(*result_1) + fconvert.t(*(edi_3 + 0xa0)))
            float var_198_1 = fconvert.s(fconvert.t(result_1[1]) + fconvert.t(*(edi_3 + 0xa4)))
            float var_194_1 = fconvert.s(fconvert.t(result_1[2]) + fconvert.t(*(edi_3 + 0xa8)))
            long double x87_r7_7 = float.t(0)
            float var_130 = fconvert.s(x87_r7_7)
            float var_12c_1 = fconvert.s(x87_r7_7)
            float var_128_1 = fconvert.s(x87_r7_7)
            int16_t top_1 = 0
            
            while (true)
                void var_48
                struct sealengine::CDualQuaternion::VTable** eax_5
                int32_t edx_4
                eax_5, edx_4 = sub_4b5c50(var_190, edx_3, &var_48, ebx + 4)
                float var_b8[0x10]
                float* eax_6 = &var_b8
                sub_4b9aa0(eax_6, edx_4, eax_5)
                float var_18c
                sub_51e1c0(eax_5, &var_18c, eax_6, &var_130)
                unimplemented  {fld st0, dword [esp+0x40]}
                unimplemented  {fsub st0, dword [esp+0x30]}
                unimplemented  {fld st0, dword [esp+0x3c]}
                unimplemented  {fsub st0, dword [esp+0x2c]}
                unimplemented  {fld st0, dword [esp+0x44]}
                int32_t var_188
                int32_t var_1cc_2 = var_188
                unimplemented  {fsub st0, dword [esp+0x38]}
                var_1a8 = var_18c
                unimplemented  {fld st0, st1}
                int32_t var_1a4_1 = var_188
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                int32_t var_184
                int32_t var_1a0_1 = var_184
                unimplemented  {fld st0, st2}
                unimplemented  {fmulp st3, st0}
                unimplemented  {fmulp st3, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fmul st0, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                float var_1b4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                unimplemented  {fstp dword [esp+0x18], st0}
                unimplemented  {fld st0, dword [esp+0x18]}
                float var_1cc_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                result, edx_3 = sub_4d9250(var_1cc_3)
                unimplemented  {call 0x4d9250}
                float var_1b4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                unimplemented  {fstp dword [esp+0x18], st0}
                unimplemented  {fld st0, dword [0x75be00]}
                unimplemented  {fld st0, dword [esp+0x14]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_1 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                result.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_1 - 2) & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    break
                
                unimplemented  {fcompp } f- unimplemented  {fcompp }
                bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                bool c2_2 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                unimplemented  {fcompp }
                unimplemented  {fcompp }
                result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (p_2)
                    while (true)
                        int32_t eax_8 = *(ebx + 8)
                        ebp = *(eax_8 + ebp * 0xac + 8)
                        
                        if (ebp == 0xffffffff)
                            break
                        
                        void* ebx_3 = ebp * 0xac + eax_8
                        
                        if (*(ebx_3 + 0x50) != 0)
                            struct sealengine::CDualQuaternion::VTable** eax_10
                            int32_t edx_7
                            eax_10, edx_7 = sub_4b5c50(ebp, edx_3, &var_48, var_1b0 + 4)
                            sub_4b9aa0(&var_b8, edx_7, eax_10)
                            unimplemented  {fldz }
                            float var_100 = fconvert.s(unimplemented  {fst dword [esp+0xc8], st0})
                            float var_fc_1 = fconvert.s(unimplemented  {fst dword [esp+0xd0], st0})
                            float var_f8_1 = fconvert.s(unimplemented  {fstp dword [esp+0xd4], st0})
                            unimplemented  {fstp dword [esp+0xd4], st0}
                            float var_180
                            sub_51e1c0(eax_10, &var_180, &var_b8, &var_100)
                            unimplemented  {fld st0, dword [esp+0x20]}
                            unimplemented  {fsub st0, dword [esp+0x48]}
                            float var_10c = fconvert.s(unimplemented  {fstp dword [esp+0xbc], st0})
                            unimplemented  {fstp dword [esp+0xbc], st0}
                            unimplemented  {fld st0, dword [esp+0x24]}
                            unimplemented  {fsub st0, dword [esp+0x4c]}
                            float var_108_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0xc0], st0})
                            unimplemented  {fstp dword [esp+0xc0], st0}
                            unimplemented  {fld st0, dword [esp+0x28]}
                            unimplemented  {fsub st0, dword [esp+0x50]}
                            float var_104_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0xc4], st0})
                            unimplemented  {fstp dword [esp+0xc4], st0}
                            float var_168
                            sub_51e2a0(&var_10c, &var_168)
                            unimplemented  {fld st0, dword [esp+0x2c]}
                            unimplemented  {fsub st0, dword [esp+0x48]}
                            float var_13c = fconvert.s(unimplemented  {fstp dword [esp+0x8c], st0})
                            unimplemented  {fstp dword [esp+0x8c], st0}
                            unimplemented  {fld st0, dword [esp+0x30]}
                            unimplemented  {fsub st0, dword [esp+0x4c]}
                            float var_138_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x90], st0})
                            unimplemented  {fstp dword [esp+0x90], st0}
                            unimplemented  {fld st0, dword [esp+0x34]}
                            unimplemented  {fsub st0, dword [esp+0x50]}
                            float var_134_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x94], st0})
                            unimplemented  {fstp dword [esp+0x94], st0}
                            void* eax_13 = &var_48
                            float var_174
                            sub_6603e0(eax_13, sub_51e2a0(&var_13c, &var_174), &var_b8)
                            float var_6c
                            float var_60
                            float* eax_15 =
                                sub_51e2a0(sub_51e1c0(&var_168, &var_60, eax_13, &var_168), &var_6c)
                            int32_t ecx_14 = eax_15[1]
                            var_168 = *eax_15
                            int32_t edx_12 = eax_15[2]
                            int32_t var_164_1 = ecx_14
                            void* eax_16 = &var_48
                            int32_t var_160_1 = edx_12
                            sub_6603e0(eax_16, edx_12, &var_b8)
                            float var_78
                            float var_54
                            float* eax_18 =
                                sub_51e2a0(sub_51e1c0(&var_174, &var_78, eax_16, &var_174), &var_54)
                            unimplemented  {fldz }
                            float edx_14 = *eax_18
                            float var_14c = fconvert.s(unimplemented  {fst dword [esp+0x7c], st0})
                            int32_t ecx_17 = eax_18[1]
                            float var_148_1 = fconvert.s(unimplemented  {fst dword [esp+0x80], st0})
                            float var_144_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x84], st0})
                            unimplemented  {fstp dword [esp+0x84], st0}
                            var_174 = edx_14
                            int32_t edx_15 = eax_18[2]
                            unimplemented  {fld1 }
                            float var_140_1 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                            unimplemented  {fstp dword [esp+0x88], st0}
                            int16_t top_33
                            int16_t top_35 = top_33
                            int32_t var_170_1 = ecx_17
                            int32_t var_16c_1 = edx_15
                            char eax_20
                            int32_t ecx_19
                            eax_20, ecx_19 = sub_517f50(&var_174, edx_15, &var_168, &var_14c)
                            
                            if (eax_20 != 0)
                                int32_t eax_21 = *(ebx_3 + 0x20)
                                int32_t ecx_20 = *(ebx_3 + 0x24)
                                int32_t edx_16 = *(ebx_3 + 0x28)
                                int32_t ecx_21 = *(ebx_3 + 0x14)
                                int32_t var_f4 = *(ebx_3 + 0x10)
                                int32_t var_f0_1 = ecx_21
                                int32_t var_e8_1 = *(ebx_3 + 0x1c)
                                int32_t var_ec_1 = *(ebx_3 + 0x18)
                                float var_15c
                                sub_52a050(&var_14c, &var_15c, &var_f4)
                                float var_e4[0x8]
                                sub_52a3a0(&var_e4)
                                unimplemented  {call 0x52a3a0}
                                sub_4b4780(&var_e4, ebx_3)
                                sub_52a180(&var_15c, &var_e4)
                                unimplemented  {fldz }
                                float eax_25 = var_15c
                                float var_124 =
                                    fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
                                float var_120_1 =
                                    fconvert.s(unimplemented  {fst dword [esp+0xa8], st0})
                                float var_11c_1 =
                                    fconvert.s(unimplemented  {fstp dword [esp+0xac], st0})
                                unimplemented  {fstp dword [esp+0xac], st0}
                                top_35 -= 2
                                *(ebx_3 + 0x10) = eax_25
                                int32_t var_158
                                *(ebx_3 + 0x14) = var_158
                                int32_t var_154
                                *(ebx_3 + 0x18) = var_154
                                int32_t var_150
                                *(ebx_3 + 0x1c) = var_150
                                *(ebx_3 + 0x20) = eax_21
                                *(ebx_3 + 0x24) = ecx_20
                                *(ebx_3 + 0x28) = edx_16
                                struct sealengine::CDualQuaternion::VTable** eax_29
                                int32_t edx_21
                                eax_29, edx_21 = sub_4b5c50(var_190, ecx_20, &var_48, var_1b0 + 4)
                                float* eax_30 = &var_b8
                                sub_4b9aa0(eax_30, edx_21, eax_29)
                                float var_118
                                sub_51e1c0(&var_124, &var_118, eax_30, &var_124)
                                int32_t var_110
                                ecx_19 = var_110
                                var_1a8 = var_118
                                int32_t var_114
                                int32_t var_1a4_2 = var_114
                                int32_t var_1a0_2 = ecx_19
                            
                            unimplemented  {fld st0, dword [esp+0x24]}
                            int32_t var_1cc_10 = ecx_19
                            unimplemented  {fsub st0, dword [esp+0x34]}
                            unimplemented  {fld st0, dword [esp+0x24]}
                            unimplemented  {fsub st0, dword [esp+0x30]}
                            unimplemented  {fld st0, dword [esp+0x2c]}
                            unimplemented  {fsub st0, dword [esp+0x38]}
                            unimplemented  {fld st0, st1}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fmulp st2, st0}
                            unimplemented  {fld st0, st2}
                            unimplemented  {fmulp st3, st0}
                            unimplemented  {fmulp st3, st0}
                            unimplemented  {fxch st0, st1}
                            unimplemented  {fxch st0, st1}
                            unimplemented  {faddp st2, st0}
                            unimplemented  {faddp st2, st0}
                            unimplemented  {fmul st0, st0}
                            unimplemented  {faddp st1, st0}
                            unimplemented  {faddp st1, st0}
                            float var_1b4_3 =
                                fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                            unimplemented  {fstp dword [esp+0x18], st0}
                            unimplemented  {fld st0, dword [esp+0x18]}
                            float var_1cc_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_32
                            eax_32, edx_3 = sub_4d9250(var_1cc_11)
                            unimplemented  {call 0x4d9250}
                            long double temp1_1 = fconvert.t(9.99999975e-06f)
                            unimplemented  {fcomp st0, dword [0x75be00]} f- temp1_1
                            bool c0_3 = unimplemented  {fcomp st0, dword [0x75be00]} f< temp1_1
                            bool c2_3 = is_unordered.t(
                                unimplemented  {fcomp st0, dword [0x75be00]}, temp1_1)
                            bool c3_3 = unimplemented  {fcomp st0, dword [0x75be00]} f== temp1_1
                            unimplemented  {fcomp st0, dword [0x75be00]}
                            top_1 = top_35
                            eax_32.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa
                                | (c3_3 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
                            bool p_3 = unimplemented  {test ah, 0x41}
                            
                            if (p_3)
                                ebx = var_1b0
                                continue
                        
                        ebx = var_1b0
                        break
                
                result = result_2 + 1
                result_2 = result
                
                if (result s>= 5)
                    break
                
                ebp = var_190

sub_6b4885(eax_1 ^ &var_1b8)
return result

// 函数: sub_4baa90
// 地址: 0x4baa90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71336b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_e8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = *(arg1 + 0x12d)

if (result.b != 0)
    long double x87_r7_1 = float.t(0)
    float ecx_2 = *(arg1 + 0xd0) - *(arg1 + 0xcc)
    float var_90 = fconvert.s(x87_r7_1)
    float var_8c_1 = fconvert.s(x87_r7_1)
    float var_88_1 = fconvert.s(x87_r7_1)
    float var_84_1 = fconvert.s(x87_r7_1)
    float var_80_1 = fconvert.s(x87_r7_1)
    int32_t ebx_1 = 0
    result = ecx_2 s/ 0x24
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 1
    struct sealengine::CEmitterPos::VTable* const var_94_1 = &sealengine::CEmitterPos::`vftable'
    char var_7c_1 = 0
    int32_t var_4 = 0
    
    if (result s> 0)
        int32_t var_c0_1 = 0
        int16_t top_1 = 0xfffd
        
        while (true)
            int32_t* esi_2 = *(arg1 + 0xcc) + var_c0_1
            float var_ac
            int16_t top_4
            
            if (esi_2[8].b == 0)
                uint32_t eax_7
                
                if (*(arg1 + 0x24) == 1)
                    eax_7 = ebx_1 u/ 3 * 3
                    ecx_2 = ebx_1 u% 3
                
                if (*(arg1 + 0x24) != 1 || ebx_1 != eax_7)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_4 = top_1 + 1
                    var_ac = fconvert.s(unimplemented  {fst dword [esp+0x3c], st0})
                    float var_a8_3 = fconvert.s(unimplemented  {fst dword [esp+0x40], st0})
                    float var_a4_3 = fconvert.s(unimplemented  {fst dword [esp+0x44], st0})
                else
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    var_ac = fconvert.s(unimplemented  {fst dword [esp+0x3c], st0})
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    float var_a8_2 = fconvert.s(unimplemented  {fst dword [esp+0x40], st0})
                    float var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                    unimplemented  {fstp dword [esp+0x44], st0}
                    top_4 = top_1 + 1
                
                float var_a0_2 = fconvert.s(unimplemented  {fst dword [esp+0x48], st0})
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
            else
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top_4 = top_1 + 1
                var_ac = fconvert.s(unimplemented  {fst dword [esp+0x3c], st0})
                float var_a0_1 = fconvert.s(unimplemented  {fst dword [esp+0x48], st0})
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_a8_1 = fconvert.s(unimplemented  {fst dword [esp+0x40], st0})
                float var_a4_1 = fconvert.s(unimplemented  {fst dword [esp+0x44], st0})
            
            unimplemented  {fild st0, dword [esi]}
            int32_t eax_8 = *(arg1 + 0x24)
            float var_d4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            float var_d0
            int16_t top_8
            
            if (eax_8 == 0)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                float var_ec_3 = ecx_2
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fld st0, dword [esp+0x18]}
                float var_ec_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                ecx_2 = sub_4bcdb0(arg1 + 0x10c, &var_d0, var_ec_4)
                top_8 = top_4 + 1
                unimplemented  {call 0x4bcdb0}
            else if (eax_8 == 1)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                float var_ec_1 = ecx_2
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fld st0, dword [esp+0x18]}
                float var_ec_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_8 = top_4 + 2
                ecx_2 = sub_4bcef0(arg1 + 0x10c, &var_d0, var_ec_2)
            else
                var_d0 = fconvert.s(unimplemented  {fst dword [esp+0x18], st0})
                float var_cc_1 = fconvert.s(unimplemented  {fst dword [esp+0x1c], st0})
                float var_c8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                unimplemented  {fstp dword [esp+0x20], st0}
                float var_c4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                unimplemented  {fstp dword [esp+0x24], st0}
                top_8 = top_4 + 2
            
            int32_t eax_13 = *(arg1 + 4)
            
            if (eax_13 == 2)
                unimplemented  {fld st0, dword [esp+0x18]}
                unimplemented  {fchs }
                float var_78_1 = fconvert.s(unimplemented  {fstp dword [esp+0x70], st0})
                unimplemented  {fstp dword [esp+0x70], st0}
                unimplemented  {fld st0, dword [esp+0x1c]}
                var_d0 = var_78_1
                unimplemented  {fchs }
                float var_74_1 = fconvert.s(unimplemented  {fstp dword [esp+0x74], st0})
                unimplemented  {fstp dword [esp+0x74], st0}
                unimplemented  {fld st0, dword [esp+0x20]}
                float var_cc_2 = var_74_1
                unimplemented  {fchs }
                float var_70_1 = fconvert.s(unimplemented  {fstp dword [esp+0x78], st0})
                unimplemented  {fstp dword [esp+0x78], st0}
                ecx_2 = var_70_1
                unimplemented  {fld st0, dword [esp+0x24]}
                float var_c8_2 = ecx_2
                float var_6c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x7c], st0})
                unimplemented  {fstp dword [esp+0x7c], st0}
                float var_c4_2 = var_6c_1
            
            unimplemented  {fld st0, dword [0x759068]}
            int16_t top_24
            
            if (eax_13 == 2)
                float var_f0_4 = ecx_2
                float var_f0_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_24 = top_8
                sub_4bbcf0(arg2, &var_ac, &esi_2[3], var_f0_5, &var_d0)
            else
                float* var_f4_3 = &var_ac
                float var_f4_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_24 = top_8
                sub_4baf50(arg2, &esi_2[3], var_f4_4, &var_ac, &var_d0)
            
            if (ebx_1 s> 0)
                unimplemented  {fild st0, dword [esp+0x4c]}
                float var_d4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fld st0, dword [esp+0xf4]}
                int16_t top_28 = top_24 - 2
                unimplemented  {fld st0, dword [esp+0x14]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                bool p_1 = unimplemented  {test ah, 0x41}
                int32_t ecx_7
                bool c0_2
                bool c2_2
                bool c3_2
                
                if (not(p_1))
                    ecx_7 = *esi_2
                    int32_t var_d4_3 = ecx_7
                    unimplemented  {fild st0, dword [esp+0x14]}
                    unimplemented  {fcomp st0, st2} f- unimplemented  {fcomp st0, st2}
                    c0_2 = unimplemented  {fcomp st0, st2} f< unimplemented  {fcomp st0, st2}
                    c2_2 = is_unordered.t(unimplemented  {fcomp st0, st2}, 
                        unimplemented  {fcomp st0, st2})
                    c3_2 = unimplemented  {fcomp st0, st2} f== unimplemented  {fcomp st0, st2}
                    unimplemented  {fcomp st0, st2}
                
                int16_t top_76
                
                if (p_1 || (((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | (top_28 & 7) << 0xb):1.b & 0x41) != 0)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_76 = top_28 + 2
                else
                    unimplemented  {fsubr st0, st1}
                    int32_t ecx_8 = ecx_7 - var_9c_1
                    int32_t eax_16 = *(arg1 + 0x24)
                    int32_t var_d4_4 = ecx_8
                    unimplemented  {fidiv st0, dword [esp+0x14]}
                    float var_d4_5 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [edi]}
                    unimplemented  {fld st0, dword [esp+0x58]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_48_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
                    unimplemented  {fstp dword [esp+0xa0], st0}
                    unimplemented  {fld st0, dword [edi+0x4]}
                    unimplemented  {fld st0, dword [esp+0x5c]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_44_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa4], st0})
                    unimplemented  {fstp dword [esp+0xa4], st0}
                    unimplemented  {fld st0, dword [edi+0x8]}
                    unimplemented  {fld st0, dword [esp+0x60]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fsubp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_40_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
                    unimplemented  {fstp dword [esp+0xa8], st0}
                    unimplemented  {fld st0, dword [esp+0xa0]}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fmulp st2, st0}
                    unimplemented  {fmulp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_54_1 = fconvert.s(unimplemented  {fstp dword [esp+0x94], st0})
                    unimplemented  {fstp dword [esp+0x94], st0}
                    unimplemented  {fld st0, dword [esp+0xa4]}
                    unimplemented  {fmul st0, st1}
                    float var_50_1 = fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
                    unimplemented  {fstp dword [esp+0x98], st0}
                    unimplemented  {fmul st0, dword [esp+0xa8]}
                    float var_4c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
                    unimplemented  {fstp dword [esp+0x9c], st0}
                    unimplemented  {fld st0, dword [esp+0x94]}
                    unimplemented  {faddp st3, st0}
                    unimplemented  {faddp st3, st0}
                    unimplemented  {fxch st0, st2}
                    unimplemented  {fxch st0, st2}
                    float var_3c = fconvert.s(unimplemented  {fstp dword [esp+0xac], st0})
                    unimplemented  {fstp dword [esp+0xac], st0}
                    unimplemented  {fadd dword [esp+0x98]}
                    float var_38_1 = fconvert.s(unimplemented  {fstp dword [esp+0xb0], st0})
                    unimplemented  {fstp dword [esp+0xb0], st0}
                    unimplemented  {fadd dword [esp+0x9c]}
                    float var_34_1 = fconvert.s(unimplemented  {fstp dword [esp+0xb4], st0})
                    unimplemented  {fstp dword [esp+0xb4], st0}
                    float var_bc
                    int16_t top_62
                    
                    if (eax_16 == 0)
                        int32_t var_ec_9 = ecx_8
                        float var_ec_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4bcdb0(arg1 + 0x10c, &var_bc, var_ec_10)
                        unimplemented  {call 0x4bcdb0}
                        top_62 = top_28
                        unimplemented  {fldz }
                    else if (eax_16 == 1)
                        int32_t var_ec_7 = ecx_8
                        float var_ec_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4bcef0(arg1 + 0x10c, &var_bc, var_ec_8)
                        top_62 = top_28 + 1
                        unimplemented  {fldz }
                    else
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fldz }
                        var_bc = fconvert.s(unimplemented  {fst dword [esp+0x2c], st0})
                        float var_b8_1 = fconvert.s(unimplemented  {fst dword [esp+0x30], st0})
                        float var_b4_1 = fconvert.s(unimplemented  {fst dword [esp+0x34], st0})
                        unimplemented  {fld1 }
                        float var_b0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
                        unimplemented  {fstp dword [esp+0x38], st0}
                        top_62 = top_28 + 1
                    
                    if (*(arg1 + 4) == 2)
                        unimplemented  {fld st0, dword [esp+0x2c]}
                        unimplemented  {fchs }
                        float var_68_1 = fconvert.s(unimplemented  {fstp dword [esp+0x80], st0})
                        unimplemented  {fstp dword [esp+0x80], st0}
                        unimplemented  {fld st0, dword [esp+0x30]}
                        var_bc = var_68_1
                        unimplemented  {fchs }
                        float var_64_1 = fconvert.s(unimplemented  {fstp dword [esp+0x84], st0})
                        unimplemented  {fstp dword [esp+0x84], st0}
                        unimplemented  {fld st0, dword [esp+0x34]}
                        float var_b8_2 = var_64_1
                        unimplemented  {fchs }
                        float var_60_1 = fconvert.s(unimplemented  {fstp dword [esp+0x88], st0})
                        unimplemented  {fstp dword [esp+0x88], st0}
                        unimplemented  {fld st0, dword [esp+0x38]}
                        float var_b4_2 = var_60_1
                        float var_5c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x8c], st0})
                        unimplemented  {fstp dword [esp+0x8c], st0}
                        float var_b0_2 = var_5c_1
                    
                    float var_30 = fconvert.s(unimplemented  {fst dword [esp+0xb8], st0})
                    unimplemented  {fld1 }
                    float var_2c_1 = fconvert.s(unimplemented  {fst dword [esp+0xc0], st0})
                    float var_24_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc8], st0})
                    unimplemented  {fstp dword [esp+0xc8], st0}
                    float* var_f4_8 = &var_30
                    float var_28_1 = fconvert.s(unimplemented  {fstp dword [esp+0xcc], st0})
                    unimplemented  {fstp dword [esp+0xcc], st0}
                    unimplemented  {fld st0, dword [0x759068]}
                    float var_f4_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top_76 = top_62 + 1
                    sub_4baf50(arg2, &var_3c, var_f4_9, &var_30, &var_bc)
                
                unimplemented  {fld1 }
                float var_20 = fconvert.s(unimplemented  {fst dword [esp+0xc8], st0})
                float var_1c_1 = fconvert.s(unimplemented  {fst dword [esp+0xd0], st0})
                float var_18_1 = fconvert.s(unimplemented  {fst dword [esp+0xd4], st0})
                float var_14_1 = fconvert.s(unimplemented  {fstp dword [esp+0xdc], st0})
                unimplemented  {fstp dword [esp+0xdc], st0}
                top_24 = top_76
                sub_4bc6e0(&var_20, arg2, &var_90, &esi_2[3])
            
            unimplemented  {fld st0, dword [esi+0x18]}
            float var_84_2 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
            unimplemented  {fstp dword [esp+0x64], st0}
            unimplemented  {fld st0, dword [esi+0x1c]}
            var_c0_1 += 0x24
            float var_80_2 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
            unimplemented  {fstp dword [esp+0x68], st0}
            var_9c_1 = *esi_2
            ecx_2 = esi_2[4]
            int32_t var_98_2 = esi_2[1]
            int32_t edx_12 = esi_2[5]
            var_90 = esi_2[3]
            result.b = esi_2[8].b
            ebx_1 += 1
            float var_8c_2 = ecx_2
            int32_t var_88_2 = edx_12
            char var_7c_2 = result.b
            
            if (ebx_1 s>= result_1)
                break
            
            unimplemented  {fld st0, dword [0x75be20]}
            unimplemented  {fld1 }
            top_1 = top_24 - 3
            unimplemented  {fldz }
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result

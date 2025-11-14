// 函数: sub_4dc740
// 地址: 0x4dc740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726a2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != arg1[1] && arg1[4] != 0)
    struct sealengine::CDrawParam::VTable* var_138
    sub_4b97d0(&var_138)
    int32_t* ebx_1 = arg3
    int32_t var_c_1 = 0
    (*(*ebx_1 + 0x94))(1)
    (*(*ebx_1 + 0x98))(0)
    (*(*ebx_1 + 0xa0))(0)
    (*(*ebx_1 + 0xac))(0)
    int32_t eax_8 = *(*ebx_1 + 0x80)
    int32_t var_170_5 = 1
    int32_t var_174 = 0
    eax_8(var_174, var_170_5)
    int32_t eax_9 = *(*ebx_1 + 0x8c)
    int32_t var_170_6 = 5
    var_174 = 0
    eax_9(var_174, var_170_6)
    int32_t eax_10 = *(*ebx_1 + 0x90)
    int32_t var_170_7 = 5
    var_174 = 0
    eax_10(var_174, var_170_7)
    
    if ((*(*arg1[4] + 0x20))(eax_2) == 0)
    label_4dc820:
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    long double x87_r7_1 = float.t(1)
    long double x87_r6_1 = float.t(0)
    float var_e8_1 = fconvert.s(x87_r7_1)
    float var_e4_1 = fconvert.s(x87_r7_1)
    float var_e0_1 = fconvert.s(x87_r7_1)
    float var_dc_1 = fconvert.s(x87_r7_1)
    float var_d8_1 = fconvert.s(x87_r6_1)
    float var_c8_1 = fconvert.s(x87_r7_1)
    float var_d4_1 = fconvert.s(x87_r6_1)
    float var_d0_1 = fconvert.s(x87_r6_1)
    float var_cc_1 = fconvert.s(x87_r6_1)
    float var_58[0x11]
    sub_42e110(&var_58)
    int32_t eax_16 = *arg1
    void var_134
    __builtin_memcpy(&var_134, &var_58, 0x40)
    int32_t ecx_14 = 0
    int32_t esi_3 = (arg1[1] - eax_16) s>> 2
    int32_t var_f4_1 = 0
    int32_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    int32_t var_ac_1 = 0
    int32_t var_a8_1 = 0
    int32_t var_15c_1 = 0
    int32_t var_158_1 = 0
    
    if (esi_3 s> 0)
        while (true)
            void* edx_13 = *(eax_16 + (ecx_14 << 2))
            int32_t ebx_2 = 1
            int32_t var_140_1 = ecx_14 + 1
            
            if (ecx_14 + 1 s< esi_3)
                int32_t* var_144_1 = eax_16 + ((ecx_14 + 1) << 2)
                int32_t eax_20
                
                do
                    if (sub_4dc280(edx_13, *var_144_1) == 0)
                        break
                    
                    var_144_1 = &var_144_1[1]
                    eax_20 = var_140_1 + 1
                    ebx_2 += 1
                    var_140_1 = eax_20
                while (eax_20 s< esi_3)
            
            int32_t* eax_22 = arg1[4]
            var_174 = var_15c_1
            
            if (sub_4dc0b0(var_15c_1, arg3, edx_13, arg2, eax_22, var_174, ebx_2 * 2) == 0)
                goto label_4dc820
            
            var_15c_1 += ebx_2 * 6
            eax_16 = *arg1
            int32_t ecx_20 = var_158_1 + ebx_2
            esi_3 = (arg1[1] - eax_16) s>> 2
            var_158_1 = ecx_20
            
            if (ecx_20 s>= esi_3)
                ebx_1 = arg3
                break
            
            ecx_14 = var_158_1
    
    (*(*ebx_1 + 0xa0))(1)
    (*(*ebx_1 + 0xac))(2)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result

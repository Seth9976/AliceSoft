// 函数: sub_6909f0
// 地址: 0x6909f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_715ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3

if (result != 0)
    void* ecx = *(arg2 + 0x20)
    
    if (ecx != 0 && *(arg2 + 0x24) != 0)
        struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax_5 =
            sub_414910(ecx)
        struct guiengine::CGUIModel::guiengine::CGUIHScrollbarModel::VTable** eax_6 =
            sub_4149d0(*(arg2 + 0x24))
        sub_401270(arg2 + 0x60, nullptr, 0x72cf73)
        sub_401270(arg2 + 0x7c, nullptr, 0x72cf87)
        void* eax_7 = data_797d2c
        int32_t edi_1 = result[0xb]
        *(*(eax_7 + 0x30) + 0x17c) = result[0xa]
        *(*(eax_7 + 0x30) + 0x180) = result[0xb]
        char var_6e_1 = (result[0xe]).b
        char var_6f_1 = (result[0xd]).b
        char var_6d_1 = 0xff
        *(*(eax_7 + 0x30) + 0x184) = (result[0xc]).b.d
        void* eax_8 = *(eax_7 + 0x30)
        char var_6d_2 = 0xff
        *(eax_8 + 0x188) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result[0x10]))))
        *(eax_8 + 0x18c) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result[0x11]))))
        char var_6f_2 = (result[0x13]).b
        char var_6e_2 = (result[0x14]).b
        *(eax_8 + 0x190) = (result[0x12]).b.d
        int32_t eax_10
        int32_t edx_6
        edx_6:eax_10 = sx.q(sub_5e01a0(&result[0xa]))
        int32_t var_6c_3 = neg.d(eax_6[0x10] * edi_1)
        int32_t* result_1 = arg1
        result = (1 - eax_5[0x10]) * edi_1
        int32_t ebx_5 = ((edx_6 & 3) + eax_10) s>> 2
        
        if (result_1[4] u> 0)
            char var_70_2
            var_70_2.d = result + ebx_5
            
            while (true)
                if (arg4 s<= var_6c_3 + ebx_5 && arg5 s<= var_70_2.d)
                    result = sub_401180(arg2 + 0x7c, 0xffffffff, result_1, 0)
                    break
                
                int32_t* var_54
                sub_692940(result_1, &var_54)
                int32_t var_c_1 = 0
                int32_t var_44
                int32_t eax_18 = var_44
                
                if (var_44 u>= 1)
                    eax_18 = 1
                
                int32_t* edx_11 = var_54
                int32_t var_40
                
                if (var_40 u< 0x10)
                    edx_11 = &var_54
                
                int32_t eax_19 = sub_402320(eax_18, edx_11, 0x72fc3c, eax_18)
                bool cond:1_1 = eax_19 == 0
                
                if (eax_19 == 0)
                    if (var_44 u>= 1)
                        eax_19.b = var_44 != 1
                    else
                        eax_19 = 0xffffffff
                    
                    cond:1_1 = eax_19 == 0
                
                eax_19.b = cond:1_1
                
                if (eax_19.b != 0 && arg5 s<= var_70_2.d)
                    var_c_1.b = 1
                    void var_38
                    sub_401ef0(arg2 + 0x7c, sub_426250(&var_38, &var_54, arg1))
                    sub_401110(&var_38)
                    result = sub_401110(&var_54)
                    break
                
                sub_402000(arg2 + 0x60, &var_54, 0, 0xffffffff)
                int32_t eax_21 = var_44
                
                if (var_44 u>= 1)
                    eax_21 = 1
                
                int32_t** edx_12 = var_54
                
                if (var_40 u< 0x10)
                    edx_12 = &var_54
                
                int32_t eax_22 = sub_402320(eax_21, edx_12, 0x72fc40, eax_21)
                bool cond:3_1 = eax_22 == 0
                
                if (eax_22 == 0)
                    if (var_44 u>= 1)
                        eax_22.b = var_44 != 1
                    else
                        eax_22 = 0xffffffff
                    
                    cond:3_1 = eax_22 == 0
                
                eax_22.b = cond:3_1
                
                if (eax_22.b == 0)
                    var_6c_3 += sub_6996c0(&var_54)
                    int32_t var_c_3 = 0xffffffff
                    
                    if (var_40 u>= 0x10)
                        int32_t* var_88_6 = var_54
                        sub_6b4d5b()
                else
                    var_70_2.d += edi_1
                    int32_t var_c_2 = 0xffffffff
                    var_6c_3 = neg.d(eax_6[0x10] * edi_1)
                    
                    if (var_40 u>= 0x10)
                        int32_t* var_88_4 = var_54
                        sub_6b4d5b()
                
                result = arg1
                
                if (result[4] u<= 0)
                    break
                
                result_1 = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result

// 函数: sub_431df0
// 地址: 0x431df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x1c] != 0)
    result = arg1[2]
    
    if (result != 0)
        int32_t var_34 = result[2]
        var_34 = fconvert.s(fconvert.t(1000.0) / float.t(var_34))
        int32_t edi_1 = sub_70c710(float.t(arg1[0x3b]) / fconvert.t(var_34))
        
        if (arg1[0x3d].b != 0)
            int32_t edx_2 = arg1[0x3a]
            uint32_t eax_5 = zx.d(arg1[0x25].b)
            var_34 = arg1[0x24]
            arg1[0x1c]
            arg1[0x3d].b = 0
            result = sub_430150(&var_34, eax_5, edx_2, arg1)
        else if (*(arg1 + 0xf5) == 0)
            result = arg1[0x3c]
            
            if (result s< edi_1)
                void* i_1 = edi_1 - result
                void* i
                
                do
                    char edx_1 = arg1[0x25].b
                    int32_t eax_7 = arg1[0x3a]
                    int32_t var_30 = arg1[0x24]
                    struct _EXCEPTION_REGISTRATION_RECORD** ecx_5 = arg1[0x1c]
                    var_34.b = edx_1
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
                    int32_t var_24_1 = 0
                    int32_t var_20_1 = 0
                    int32_t var_c_1 = 0
                    sub_430250(ecx_5, &var_30, var_34, eax_7, arg1, &result_2)
                    int32_t var_c_2 = 0xffffffff
                    result = result_2
                    
                    if (result != 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                        result = sub_6b4d5b()
                    
                    i = i_1
                    i_1 -= 1
                    result_2 = nullptr
                    int32_t var_24_2 = 0
                    int32_t var_20_2 = 0
                while (i != 1)
        else
            int32_t ecx_3 = arg1[0x3a]
            struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = arg1[0x1c]
            var_34 = arg1[0x24]
            int32_t edx_3
            edx_3.b = arg1[0x25].b
            result = sub_4301d0(ecx_3, edx_3, eax_6, &var_34, arg1)
        
        arg1[0x3c] = edi_1

fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_5346e0
// 地址: 0x5346e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp_1 = arg2 - 1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 - 1 s< 0)
label_534899:
    result.b = 1
else
    uint32_t ebx_1
    int32_t esi_1
    
    if (arg4[0x10].b != 0)
        uint32_t eax_4 = arg4[1] u>> 2
        arg2 = eax_4
        ebx_1 = eax_4
        esi_1 = 0
    else
        esi_1 = 0
        ebx_1 = 0
        arg2 = 0
    
    if (ebp_1 s>= (arg3[2] - arg3[1]) s>> 2)
        result.b = 0
    else
        *(arg3[1] + (ebp_1 << 2)) = ebx_1
        
        if (ebp_1 == 0)
            int128_t* result_2 = nullptr
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t var_4 = 0
            void* eax_6 = arg4[0xd] - 0xe
            uint32_t var_24 = ebx_1
            uint32_t eax_7
            
            if (eax_6 u> 0x34)
                eax_7 = 0xffffffff
            else
                eax_7 = sub_534b60(eax_6)
            
            sub_65a090(&result_2, ebx_1)
            
            if (eax_7 s>= 0xa && (eax_7 s<= 0xb || eax_7 == 0x2f))
                int128_t* result_3 = result_2
                
                if (result_3 != var_18_1)
                    int128_t* eax_8
                    
                    if (arg4[1] != 0)
                        eax_8 = *arg4
                    else
                        eax_8 = nullptr
                    
                    sub_6c02a0(result_3, eax_8, ebx_1 << 2, eax_2)
                
                goto label_5347d8
            
            int32_t esi_3 = 0
            
            if (ebx_1 s<= 0)
            label_5347d8:
                sub_531c10(&var_24, &arg3[5])
                result = result_2
                
                if (result != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                    sub_6b4d5b()
                
            label_534899_1:
                result.b = 1
            else
                int128_t* result_4 = result_2
                
                while (true)
                    int32_t eax_10
                    
                    if (arg4[1] != 0)
                        eax_10 = *arg4
                    else
                        eax_10 = 0
                    
                    if (sub_534460(arg1, eax_7, *(eax_10 + (esi_3 << 2)), result_4 + (esi_3 << 2), 
                            arg5).b == 0)
                        if (result_4 != 0)
                            int128_t* result_5 = result_4
                            sub_6b4d5b()
                        
                        break
                    
                    esi_3 += 1
                    
                    if (esi_3 s>= arg2)
                        goto label_5347d8
                
                result.b = 0
        else if (ebx_1 s<= 0)
        label_534899_2:
            result.b = 1
        else
            while (true)
                result = arg4[1]
                
                if (esi_1 u>= result u>> 2)
                    break
                
                if (result != 0)
                    result = *arg4
                
                int32_t ecx_7 = *(arg5 + 8)
                result = result[esi_1]
                
                if (result u>= (*(arg5 + 0xc) - ecx_7) s>> 2)
                    break
                
                result = *(ecx_7 + (result << 2))
                
                if (result == 0)
                    break
                
                if (sub_5346e0(ebp_1, arg3, result, arg5).b == 0)
                    break
                
                esi_1 += 1
                
                if (esi_1 s>= ebx_1)
                    goto label_534899_2
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result

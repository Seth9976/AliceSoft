// 函数: sub_6f2920
// 地址: 0x6f2920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79baac
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t* var_1c = &result
int32_t var_8_1 = 0
result = 0
int32_t var_38 = 0
*arg3 = 0
int32_t var_8_2

if (arg2 u<= *(arg1 + 0x24))
    int32_t* var_40_5 = &result
    int32_t result_2 = sub_6fa870(arg1, arg2, arg4)
    result = result_2
    
    if (result_2 == 0)
    label_6f2a5d:
        var_8_2 = 0xffffffff
else
    int32_t* var_40 = &result
    *arg3 = operator new(arg2)
    int32_t eax_3 = *arg3
    
    if (eax_3 == 0)
        result = 0xfffffffb
    else
        *arg4 = eax_3
        int32_t ebx_1 = *arg3
        *arg5 = 1
        uint32_t ecx_2 = arg2
        uint32_t eax_5 = *(arg1 + 0x24)
        
        if (ecx_2 u>= eax_5)
            ecx_2 = eax_5
        
        data_797c48(ebx_1, *(arg1 + 0x10), ecx_2, &result)
        int32_t var_38_2 = ebx_1 + ecx_2
        uint32_t eax_8 = arg2 - ecx_2
        arg2 = eax_8
        *(arg1 + 0x10) += ecx_2
        *(arg1 + 0x1c) += ecx_2
        *(arg1 + 0x24) -= ecx_2
        
        if (eax_8 == 0)
        label_6f2a5d_1:
            var_8_2 = 0xffffffff
        else
            uint32_t var_30_1 = eax_8
            
            while (true)
                if (eax_8 u> 0xffff)
                    goto label_6f2a5d_1
                
                if (eax_8 u>= 0x1000)
                    eax_8 = 0x1000
                
                int32_t* var_40_2 = &result
                int32_t var_2c
                int32_t result_1 = sub_6fa870(arg1, eax_8, &var_2c)
                result = result_1
                
                if (result_1 != 0)
                    result = 0xffffffeb
                    int32_t* var_40_4 = &result
                    int32_t var_44_4 = *arg3
                    sub_6b4d5b()
                    *arg3 = 0
                    break
                
                uint32_t eax_9 = arg2
                
                if (eax_9 u>= 0x1000)
                    eax_9 = 0x1000
                
                data_797c48(var_38_2, var_2c, eax_9, &result)
                uint32_t edx_7
                
                edx_7 = arg2 u>= 0x1000 ? 0x1000 : arg2
                
                var_38_2 += edx_7
                eax_8 = arg2 - 0x1000
                bool cond:0_1 = arg2 != 0x1000
                arg2 = eax_8
                
                if (not(cond:0_1))
                    goto label_6f2a5d_1
fsbase->NtTib.ExceptionList = ExceptionList
return result

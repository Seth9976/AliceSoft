// 函数: sub_4caf00
// 地址: 0x4caf00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727d1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
int32_t* esi = arg1
int32_t ebx_2 = (ebp[1] - *ebp) s>> 2
sub_4cb3e0(esi, ebx_2)
int32_t var_10 = 0
int32_t* result

if (ebx_2 s<= 0)
label_4cb046:
    result.b = 1
else
    int32_t edi_1 = 0
    
    while (true)
        int32_t eax_3
        
        if (edi_1 s>= 0)
            eax_3 = *ebp
        
        int32_t* var_14_1
        
        if (edi_1 s< 0 || edi_1 s>= (ebp[1] - eax_3) s>> 2)
            var_14_1 = nullptr
        else
            var_14_1 = *(eax_3 + (edi_1 << 2))
        
        int32_t* ebp_1 = *esi + (edi_1 << 2)
        
        if (var_14_1 != 0)
            if (*ebp_1 == 0)
                int32_t* eax_5 = operator new(0x7c)
                
                if (eax_5 == 0)
                    eax_5 = nullptr
                else
                    int32_t ecx_6 = esi[6]
                    sub_4c91a0(ecx_6, esi[4], eax_5, ecx_6, esi[7], arg5, esi[5].b)
                
                *ebp_1 = eax_5
            
            if (sub_4c9390(*ebp_1, var_14_1, arg3, arg4, arg6).b == 0)
                result.b = 0
                break
            
            esi = arg1
        else
            result = *ebp_1
            
            if (result != 0)
                int32_t* result_2 = result
                int32_t var_4 = 0
                sub_4c9210(result)
                int32_t var_4_1 = 0xffffffff
                
                if (result[0x11] u>= 0x10)
                    int32_t var_30_1 = result[0xc]
                    sub_6b4d5b()
                
                result[0x11] = 0xf
                result[0x10] = 0
                int32_t* result_1 = result
                result[0xc].b = 0
                sub_6b4d5b()
                edi_1 = var_10
                *ebp_1 = 0
                esi = arg1
        
        edi_1 += 1
        var_10 = edi_1
        
        if (edi_1 s>= ebx_2)
            goto label_4cb046
        
        ebp = arg2

fsbase->NtTib.ExceptionList = ExceptionList
return result

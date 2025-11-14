// 函数: sub_5420a0
// 地址: 0x5420a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
int32_t* ecx_1

if (ebx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_1 = *(*(arg1 + 0x1e4) + (ebx << 2))

char result

if (ebx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && ecx_1 != 0)
    *(arg1 + 0x2b0) -= 4
    int32_t eax_10 = **(arg1 + 0x2b0)
    int32_t* ebp
    
    if (eax_10 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        ebp = *(*(arg1 + 0x1e4) + (eax_10 << 2))
    
    if (eax_10 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && ebp != 0)
        int32_t entry_ebx
        
        if (sub_550740(ebp, ecx_1) != 0)
            int128_t* edx_5
            
            if (ebp[1] != 0)
                edx_5 = *ebp
            else
                edx_5 = nullptr
            
            char var_2c
            sub_402be0(&var_2c, edx_5)
            int32_t var_4 = 0
            int32_t var_30
            bool var_31_1 = sub_552d50(arg1 + 0x1dc, &var_2c, &var_30) == 0
            int32_t var_4_1 = 0xffffffff
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_50_4 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (var_31_1 == 0)
                **(arg1 + 0x2b0) = var_30
                *(arg1 + 0x2b0) += 4
                
                if (sub_552880(arg1 + 0x1dc, ebx) != 0)
                    result = 1
                else
                    result = sub_53d0e0(arg1, 0x74e498, eax_4, arg4, arg3, arg2, entry_ebx)
            else
                result = sub_53d0e0(arg1, 0x74e460, eax_4, arg4, arg3, arg2, entry_ebx)
        else
            sub_53d0e0(arg1, "copyString", eax_4, arg4, arg3, arg2, entry_ebx)
            result = 0
    else
        result = sub_53d0e0(arg1, 0x74e400, eax_10, eax_4, arg4, arg3, arg2)
else
    result = sub_53d0e0(arg1, 0x74e3d0, ebx, eax_4, arg4, arg3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result

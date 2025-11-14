// 函数: sub_4b1c80
// 地址: 0x4b1c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717d09
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
int32_t ebx = 0
int32_t var_44 = 0
int32_t esi_2 = (arg2[1] - *arg2) s/ 0x3c
void* var_38 = ebp
int32_t result

if ((*(ebp + 0x14) - *(ebp + 0x10)) s/ 0x1c == esi_2
        && (*(ebp + 0x24) - *(ebp + 0x20)) s>> 2 == esi_2)
    if (esi_2 s> 0)
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        
        while (true)
            int32_t var_2c
            int32_t* eax_11 = sub_4b01c0(arg2, &var_2c, ebx)
            var_44 |= 1
            int32_t* edx_7 = *(ebp + 0x10) + var_3c_1
            int32_t edi_2 = eax_11[4]
            
            if (eax_11[5] u>= 0x10)
                eax_11 = *eax_11
            
            int32_t esi_4 = edx_7[4]
            int32_t ebp_1 = esi_4
            
            if (esi_4 u>= edi_2)
                ebp_1 = edi_2
            
            if (edx_7[5] u>= 0x10)
                edx_7 = *edx_7
            
            result = sub_402320(eax_11, edx_7, eax_11, ebp_1)
            bool cond:0_1 = result == 0
            
            if (result == 0)
                if (esi_4 u>= edi_2)
                    result.b = esi_4 != edi_2
                else
                    result = 0xffffffff
                
                cond:0_1 = result == 0
            
            result.b = cond:0_1
            result.b = result.b == 0
            char var_45_1
            int32_t esi_6
            
            if (result.b == 0)
                int32_t edx_10
                int32_t esi_5
                
                if (ebx s>= 0)
                    esi_5 = *arg2
                    int32_t ecx_9 = arg2[1] - esi_5
                    int32_t eax_13
                    int32_t edx_8
                    edx_8:eax_13 = muls.dp.d(0x88888889, ecx_9)
                    edx_10 = (edx_8 + ecx_9) s>> 5
                
                if (ebx s< 0 || ebx s>= (edx_10 u>> 0x1f) + edx_10)
                    esi_6 = 0xffffffff
                else
                    esi_6 = *(var_40_1 + esi_5 + 0x1c)
                
                var_45_1 = 0
            
            if (result.b != 0 || *(*(var_38 + 0x20) + (ebx << 2)) != esi_6)
                var_45_1 = 1
            
            int32_t var_4 = 0xffffffff
            
            if ((var_44.b & 1) != 0)
                var_44 &= 0xfffffffe
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_60_2 = var_2c
                    sub_6b4d5b()
            
            if (var_45_1 != 0)
                goto label_4b1d01
            
            var_3c_1 += 0x1c
            var_40_1 += 0x3c
            ebx += 1
            
            if (ebx s>= esi_2)
                break
            
            ebp = var_38
    
    result.b = 1
else
label_4b1d01:
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result

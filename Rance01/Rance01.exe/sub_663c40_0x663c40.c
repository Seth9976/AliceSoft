// 函数: sub_663c40
// 地址: 0x663c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720340
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
int32_t* edx = *edi
int32_t* var_4c = edi
char var_55 = 0
int32_t edx_4
void* i_2
void* i_4

if ((edi[1] - edx) s>> 4 s> 1)
    i_4 = arg2[1]
    i_2 = *arg2
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x2e8ba2e9, i_4 - i_2)
    edx_4 = edx_3 s>> 4

int32_t result

if ((edi[1] - edx) s>> 4 s<= 1 || (edx[1] - *edx) s>> 2 != (edx_4 u>> 0x1f) + edx_4)
    result.b = 0
else
    void* i = i_2
    void* i_3 = i_4
    
    for (; i != i_4; i += 0x58)
        if (*(i + 1) != 0)
            if (i_3 != i_4)
                void* ecx_8
                
                if (*(i + 0x2c) u< 0x10)
                    ecx_8 = i + 0x18
                else
                    ecx_8 = *(i + 0x18)
                
                void* eax_14
                
                if (*(i_3 + 0x2c) u< 0x10)
                    eax_14 = i_3 + 0x18
                else
                    eax_14 = *(i_3 + 0x18)
                
                void* var_70_2 = ecx_8
                void* var_74_2 = eax_14
                int32_t var_4 = 0
                sub_6685f0(sub_4104a0(0x730848), arg1)
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_2c
                    int32_t var_70_3 = var_2c
                    sub_6b4d5b()
                
                result.b = 1
                goto label_663e7a
            
            i_3 = i
    
    if (i_3 != i_4)
        int32_t ebp_1 = *(i_3 + 0x14)
        int32_t ecx_7 = (i_3 - i_2) s/ 0x58
        char eax_13
        
        if (ebp_1 == 3)
            eax_13 = sub_664070(ecx_7, arg1, edi)
        label_663d87:
            
            if (eax_13 != 0)
                var_55 = 1
        else if (ebp_1 == 1)
            eax_13 = sub_663ea0(ecx_7, ecx_7, arg1, edi)
            goto label_663d87
    
    result = arg2
    
    for (void* i_1 = *result; i_1 != *(result + 4); i_1 += 0x58)
        if (*(i_1 + 0x14) == 4)
            int32_t* j = *edi
            int32_t eax_17
            int32_t edx_8
            edx_8:eax_17 = muls.dp.d(0x2e8ba2e9, i_1 - *result)
            int32_t edx_9 = edx_8 s>> 4
            int32_t ebp_4 = (edx_9 u>> 0x1f) + edx_9
            
            for (; j != edi[1]; j = &j[4])
                int32_t eax_18 = *j
                
                if ((j[1] - eax_18) s>> 2 s> ebp_4)
                    if (sub_663c40(i_1 + 4, *(eax_18 + (ebp_4 << 2)) + 0x5c) != 0)
                        var_55 = 1
                else
                    int32_t var_4_1 = 1
                    sub_6685f0(sub_4104a0(0x730884), arg1)
                    int32_t var_4_2 = 0xffffffff
                    char var_48
                    int32_t var_34
                    
                    if (var_34 u>= 0x10)
                        int32_t var_70_5 = var_48.d
                        sub_6b4d5b()
                    
                    edi = var_4c
                    var_34 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
        
        result = arg2
    
    result.b = var_55

label_663e7a:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result

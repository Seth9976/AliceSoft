// 函数: sub_4fbdc0
// 地址: 0x4fbdc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714bd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg3
arg3 = nullptr
int32_t* result

if (ebp[4] != 0)
    int32_t eax_5 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_1c = 0
    
    if (arg4 != 0)
        int32_t var_4_1 = 1
        void*** i = *(arg1 + 0x50)
        
        if (i != *(arg1 + 0x54))
            do
                int32_t* eax_9
                
                if (ebp[5] u< 0x10)
                    eax_9 = ebp
                else
                    eax_9 = *ebp
                
                if (sub_405360(*i, eax_9, ebp[4]) != 0xffffffff)
                    sub_61b5a0(i, &var_1c)
                
                i = &i[1]
            while (i != *(arg1 + 0x54))
            
            eax_5 = var_1c
    else
        int32_t var_4 = 0
        int32_t* i_1 = *(arg1 + 0x50)
        
        if (i_1 != *(arg1 + 0x54))
            do
                void** eax_6 = *i_1
                int32_t edi_1 = ebp[4]
                int32_t* ecx_2
                
                if (ebp[5] u< 0x10)
                    ecx_2 = ebp
                else
                    ecx_2 = *ebp
                
                int32_t esi_1 = eax_6[4]
                int32_t edx_1 = esi_1
                
                if (esi_1 u>= edi_1)
                    edx_1 = edi_1
                
                if (eax_6[5] u>= 0x10)
                    eax_6 = *eax_6
                
                if (sub_402320(eax_6, eax_6, ecx_2, edx_1) == 0 && esi_1 u>= edi_1)
                    int32_t eax_7
                    eax_7.b = esi_1 != edi_1
                    
                    if (eax_7 == 0)
                        sub_61b5a0(i_1, &var_1c)
                
                i_1 = &i_1[1]
            while (i_1 != *(arg1 + 0x54))
            
            eax_5 = var_1c
    
    result = arg2
    result[2] = 0
    result[1] = 0
    *result = 0
    
    if (result != &var_1c)
        *result = eax_5
        result[2] = var_14_1
        result[1] = var_18_1
    else if (eax_5 != 0)
        int32_t var_38_4 = eax_5
        sub_6b4d5b()
else
    result = arg2
    sub_6b05e0(result, arg1 + 0x50)

fsbase->NtTib.ExceptionList = ExceptionList
return result

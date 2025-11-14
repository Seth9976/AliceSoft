// 函数: sub_4cc120
// 地址: 0x4cc120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1
int32_t* i_2 = i_1
void* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2e8ba2e9, i_2[1] - *i_2)
int32_t edx_3 = edx_2 s>> 3
int32_t i_3 = (edx_3 u>> 0x1f) + edx_3

if (i_3 s<= 0)
    result.b = 1
else if (i_3 == *(arg2 + 8))
label_4cc212:
    int32_t* edi_3 = *(arg2 + 4)
    
    if (edi_3 == 0)
        result.b = 0
    else
        int32_t eax_10 = sub_51e370(arg3)
        void* esi_3 = (*(*edi_3 + 0x14))(eax_2)
        
        if (esi_3 == 0)
            result.b = 0
        else
            if (i_3 s> 0)
                int32_t edi_4 = 0
                i_1 = i_3
                int32_t i
                
                do
                    int32_t eax_12 = *i_2
                    *esi_3 = fconvert.s(fconvert.t(*(eax_12 + edi_4 + 8)))
                    *(esi_3 + 4) = fconvert.s(fconvert.t(*(eax_12 + edi_4 + 0xc)))
                    *(esi_3 + 8) = fconvert.s(fconvert.t(*(eax_12 + edi_4 + 0x10)))
                    *(esi_3 + 0xc) = sub_4cc090(*(*i_2 + edi_4 + 0x14), eax_10)
                    int32_t edx_8 = *i_2
                    *(esi_3 + 0x10) = fconvert.s(fconvert.t(*(edx_8 + edi_4 + 0x1c)))
                    *(esi_3 + 0x14) = fconvert.s(fconvert.t(*(edx_8 + edi_4 + 0x20)))
                    *(esi_3 + 0x18) = fconvert.s(fconvert.t(*(edx_8 + edi_4 + 0x24)))
                    *(esi_3 + 0x1c) = sub_4cc090(*(*i_2 + edi_4 + 0x28), eax_10)
                    esi_3 += 0x20
                    edi_4 += 0x2c
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if ((*(**(arg2 + 4) + 0x18))().b == 0)
                result.b = 0
            else
                *(arg2 + 0xc) = arg4
                *(arg2 + 0xd) = arg5
                result.b = 1
else if (*(arg2 + 4) != 0)
label_4cc18c:
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    int32_t* edi_1 = &var_20
    i_1 = 1
    sub_61b5a0(&i_1, edi_1)
    i_1 = 4
    sub_61b5a0(&i_1, edi_1)
    int32_t edi_2 = var_20
    
    if ((*(**(arg2 + 4) + 8))(i_3 * 2, edi_2, (var_1c_1 - edi_2) s>> 2, 1).b != 0)
        *(arg2 + 8) = i_3
        int32_t var_4_1 = 0xffffffff
        
        if (edi_2 != 0)
            int32_t var_3c_2 = edi_2
            sub_6b4d5b()
        
        goto label_4cc212
    
    if (edi_2 != 0)
        int32_t var_3c_1 = edi_2
        sub_6b4d5b()
    
    result.b = 0
else
    result = (*(*arg1 + 0x30))(eax_2)
    *(arg2 + 4) = result
    
    if (result != 0)
        goto label_4cc18c
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result

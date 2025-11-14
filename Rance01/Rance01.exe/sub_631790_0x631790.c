// 函数: sub_631790
// 地址: 0x631790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_esi
int32_t eax_4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_60
var_34 = &var_60
int32_t var_4c = 0xf
int32_t var_50 = 0
var_60 = 0
int32_t edx = sub_401180(&var_60, 0xffffffff, arg2, 0)
int32_t* eax_5 = *(arg1 + 0x10)
void** ecx_1 = *eax_5
sub_631b70(eax_5, edx, ecx_1, &var_34, ecx_1, eax_5, var_60)
enum MESSAGEBOX_RESULT result

if (var_34 == *(arg1 + 0x10))
    (**arg3)(eax_4)
    int32_t var_48_1 = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_401180(&var_30, 0xffffffff, arg2, var_48_1)
    int32_t* var_14_1 = arg3
    int32_t var_4 = 0
    void* esi_1 = **(arg1 + 0x10)
    int32_t* eax_10 = sub_631d10(&var_30, esi_1, *(esi_1 + 4))
    int32_t ecx_5 = *(arg1 + 0x14)
    
    if (0x7fffffe - ecx_5 u< 1)
        sub_6b47bf("list<T> too long")
        noreturn
    
    *(arg1 + 0x14) = ecx_5 + 1
    *(esi_1 + 4) = eax_10
    *eax_10[1] = eax_10
    int32_t var_4_1 = 0xffffffff
    
    if (var_1c_1 u>= 0x10)
        int32_t var_48_4 = var_30.d
        sub_6b4d5b()
    
    int32_t eax_13 = (*(*arg3 + 0x20))()
    int32_t eax_15 = (*(*arg3 + 0x1c))()
    int32_t eax_18 = (*(*arg3 + 0x14))() * (eax_13 + eax_15)
    *(arg1 + 0x1c) += eax_18
    result = *(arg1 + 0x1c)
    
    if (result u> *(arg1 + 0x20))
        while (*(arg1 + 0x14) u> 1)
            int32_t* esi_4 = *(*(*(arg1 + 0x10) + 4) + 0x24)
            int32_t ebp_2 = (*(*esi_4 + 0x20))() + (*(*esi_4 + 0x1c))()
            int32_t eax_25 = (*(*esi_4 + 0x14))() * ebp_2
            *(arg1 + 0x1c) -= eax_25
            (*(**(*(*(arg1 + 0x10) + 4) + 0x24) + 4))()
            void* eax_28 = *(arg1 + 0x10)
            int32_t* esi_5 = *(eax_28 + 4)
            
            if (esi_5 != eax_28)
                *esi_5[1] = *esi_5
                *(*esi_5 + 4) = esi_5[1]
                
                if (esi_5[7] u>= 0x10)
                    int32_t var_48_5 = esi_5[2]
                    sub_6b4d5b()
                
                esi_5[7] = 0xf
                esi_5[6] = 0
                int32_t* var_48_6 = esi_5
                esi_5[2].b = 0
                sub_6b4d5b()
                *(arg1 + 0x14) -= 1
            
            result = *(arg1 + 0x1c)
            
            if (result u<= *(arg1 + 0x20))
                break
else
    result = sub_604c90(0x733ac8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result

// 函数: sub_5b42b0
// 地址: 0x5b42b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg4
void* ebx = arg3
arg4 = arg2
int32_t* result = *arg1
void* i = *result
*ebp = 0

for (; i != result; i = *result)
    void* eax_5 = *(i + 0xc) - *(i + 8)
    
    if (eax_5 u> ebx)
        sub_6c02a0(arg4, *(i + 8), ebx, eax_2)
        int32_t eax_12 = *(i + 0xc) - *(i + 8)
        *ebp += ebx
        int128_t* var_20 = nullptr
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        sub_404f60(eax_12 - ebx, &var_20)
        int32_t var_4 = 0
        int128_t* eax_14 = var_20
        void* ebp_2 = var_1c_1 - eax_14
        sub_6c02a0(eax_14, *(i + 8) + ebx, ebp_2)
        sub_404f60(ebp_2, i + 8)
        int128_t* esi_5 = var_20
        result = sub_6c02a0(*(i + 8), esi_5, ebp_2)
        
        if (esi_5 != 0)
            int128_t* var_3c_7 = esi_5
            result = sub_6b4d5b()
        
        break
    
    sub_6c02a0(arg4, *(i + 8), eax_5, eax_2)
    int32_t ecx_1 = *(i + 0xc)
    int32_t esi = *(i + 8)
    int32_t eax_7 = ecx_1 - esi
    arg4 += eax_7
    *ebp += eax_7
    result = *arg1
    ebx += esi - ecx_1
    int32_t* esi_2 = *result
    
    if (esi_2 != result)
        *esi_2[1] = *esi_2
        *(*esi_2 + 4) = esi_2[1]
        int32_t eax_10 = esi_2[2]
        
        if (eax_10 != 0)
            int32_t var_3c_2 = eax_10
            sub_6b4d5b()
        
        int32_t* var_3c_3 = esi_2
        esi_2[2] = 0
        esi_2[3] = 0
        esi_2[4] = 0
        result = sub_6b4d5b()
        arg1[1] -= 1
    
    if (ebx == 0)
        break
    
    result = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return result

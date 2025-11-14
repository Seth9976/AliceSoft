// 函数: sub_5983a0
// 地址: 0x5983a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1

if (ebx[5].b != 0)
    void* edi_1 = *(*ebx + 4)
    int32_t esi_1 = *(edi_1 + 8)
    int32_t eax_7 = (*(edi_1 + 0xc) - esi_1) s/ 0x1c
    int32_t* edx_4 = nullptr
    int32_t var_44_1
    int32_t ecx_5
    
    if (*(esi_1 + eax_7 * 0x1c - 0xc) != 0)
        ecx_5 = eax_7
        var_44_1 = eax_7
    else
        ecx_5 = eax_7 - 1
        var_44_1 = ecx_5
    
    int32_t esi_2 = 0
    result = nullptr
    int32_t var_48_1 = 0
    int32_t* var_3c = nullptr
    
    if (ecx_5 s>= 2)
        int32_t ebx_1 = *(edi_1 + 8)
        int32_t edx_5 = 0
        void* i_1 = ((ecx_5 - 2) u>> 1) + 1
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = i_1 * 2
        int32_t eax_8 = ebx_1 + 0x10
        void* i
        
        do
            esi_2 += *eax_8
            var_48_1 += *(edx_5 + ebx_1 + 0x2c)
            edx_5 += 0x38
            eax_8 += 0x38
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx = arg1
        ecx_5 = var_44_1
        result = result_1
        edx_4 = var_3c
    
    if (result s< ecx_5)
        ecx_5 = *(*ebx + 4)
        void* edx_8 = result * 7
        result = *(ecx_5 + 8)
        edx_4 = result[edx_8 + 4]
    
    int32_t esi_3 = esi_2 + var_48_1
    
    if (edx_4 != neg.d(esi_3))
        int32_t* var_38 = nullptr
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        sub_4bc7e0(1, edx_4 + esi_3, ecx_5, &var_38)
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        int32_t var_c_1 = 0
        int32_t* esi_5 = *ebx
        result = sub_598dd0(esi_5, esi_5[1], &var_38)
        int32_t ecx_8 = ebx[1]
        
        if (0x7fffffe - ecx_8 u< 1)
            sub_6b47bf("list<T> too long")
            noreturn
        
        ebx[1] = ecx_8 + 1
        esi_5[1] = result
        int32_t* esi_6 = var_38
        result[1]->Next = result
        
        if (esi_6 != 0)
            sub_405780(esi_6, var_34_1)
            int32_t* var_60_2 = esi_6
            result = sub_6b4d5b()
        
        while (ebx[1] s> ebx[3])
            result = sub_598ca0(ebx, &var_3c, **ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return result

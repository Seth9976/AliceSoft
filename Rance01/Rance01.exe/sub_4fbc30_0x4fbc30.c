// 函数: sub_4fbc30
// 地址: 0x4fbc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1
int32_t ecx = ebp[0x14]
int32_t result = (ebp[0x15] - ecx) s>> 2

if (result - 1 s> 0)
    int32_t ebx_1 = 1
    int32_t var_14_1 = 1
    arg1 = nullptr
    
    do
        void* edi_1 = *(arg1 + ecx)
        void* var_18_1 = edi_1
        
        if (edi_1 != 0 && ebx_1 s< result)
            while (true)
                int32_t* esi_1 = *(ecx + (ebx_1 << 2))
                
                if (esi_1 != 0 && sub_501d40(edi_1, esi_1, ebp[0xa]) != 0)
                    sub_502070(var_18_1, esi_1)
                    int32_t* var_10_1 = esi_1
                    int32_t var_4 = 0
                    int32_t eax_7 = esi_1[0xe]
                    
                    if (eax_7 != 0)
                        int32_t var_34_3 = eax_7
                        sub_6b4d5b()
                    
                    esi_1[0xe] = 0
                    esi_1[0xf] = 0
                    esi_1[0x10] = 0
                    sub_4fd080(&esi_1[0xa])
                    int32_t var_4_1 = 0xffffffff
                    
                    if (esi_1[5] u>= 0x10)
                        int32_t var_34_5 = *esi_1
                        sub_6b4d5b()
                    
                    esi_1[5] = 0xf
                    esi_1[4] = 0
                    int32_t* var_34_6 = esi_1
                    *esi_1 = 0
                    sub_6b4d5b()
                    *(ebp[0x14] + (ebx_1 << 2)) = 0
                
                ecx = ebp[0x14]
                ebx_1 += 1
                
                if (ebx_1 s>= (ebp[0x15] - ecx) s>> 2)
                    break
                
                edi_1 = var_18_1
            
            ebx_1 = var_14_1
        
        ecx = ebp[0x14]
        arg1 = &arg1[1]
        ebx_1 += 1
        result = (ebp[0x15] - ecx) s>> 2
        var_14_1 = ebx_1
    while (ebx_1 - 1 s< result - 1)

int32_t* i = ebp[0x14]

if (i != ebp[0x15])
    void* edi_2 = &i[1]
    
    do
        if (*i != 0)
            i = &i[1]
            edi_2 += 4
        else
            result = sub_6b49d0(i, edi_2, ((ebp[0x15] - edi_2) s>> 2) * 4, eax_2)
            ebp[0x15] -= 4
    while (i != ebp[0x15])

fsbase->NtTib.ExceptionList = ExceptionList
return result

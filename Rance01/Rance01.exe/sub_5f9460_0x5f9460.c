// 函数: sub_5f9460
// 地址: 0x5f9460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727ecb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::ISound::partsengine::CSound::VTable** ebp = arg1
struct partsengine::ISound::partsengine::CSound::VTable** var_18 = ebp
*ebp = &partsengine::CSound::`vftable'{for `partsengine::ISound'}
int32_t var_4 = 0
int32_t* eax_3 = ebp[5]
int32_t* var_1c = eax_3

if (eax_3 != ebp[6])
    while (true)
        int32_t edi_1 = *eax_3
        void* ebx_1 = ebp[0xb]
        char* eax_4 = data_797d94
        char* esi_2 = *(ebx_1 + 4) + edi_1
        char* var_14 = eax_4
        
        if (sub_5d57f0(eax_4) != 0)
            void* ebp_1 = *(var_14 + 0x3c)
            bool cond:0_1 = *(ebp_1 + 4) == 0
            var_14 = esi_2
            
            if (not(cond:0_1))
                int32_t* var_10
                sub_42e070(ebp_1 + 0x18, &var_10, &var_14)
                int32_t* eax_8 = var_10
                
                if (eax_8 != *(ebp_1 + 0x1c))
                    int32_t* eax_9 = eax_8[4]
                    
                    if (eax_9 != 0)
                        (*(**eax_9 + 0x18))(eax_2)
            
            ebp = var_18
        
        char* eax_12 = data_797d94
        int32_t esi_4 = *(ebx_1 + 4) + edi_1
        
        if (sub_5d57f0(eax_12) != 0)
            int32_t* ecx_2 = *(eax_12 + 0x3c)
            int32_t var_34_2 = esi_4
            int32_t* var_38_1 = ecx_2
            sub_5d8540(ecx_2)
        
        void* eax_15 = &var_1c[1]
        var_1c = eax_15
        
        if (eax_15 == ebp[6])
            break
        
        eax_3 = var_1c

int32_t result = ebp[5]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

ebp[5] = 0
ebp[6] = 0
ebp[7] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

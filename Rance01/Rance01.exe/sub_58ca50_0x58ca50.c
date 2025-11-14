// 函数: sub_58ca50
// 地址: 0x58ca50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719ee8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_10
int32_t* ebp = arg_10
int32_t ecx = *(arg1 + 8)

if (ecx u>= 0xccccccb)
    arg3 = (&ebp[4]).b
    int32_t var_4 = 0
    int32_t* eax_4 = ebp[5]
    sub_4365a0(&ebp[4], &arg_10, *eax_4, eax_4)
    int32_t var_4_1 = 0xffffffff
    int32_t var_24_2 = ebp[5]
    sub_6b4d5b()
    int32_t* var_28_1 = ebp
    sub_6b4d5b()
    sub_6b47bf("map/set<T> too long")
    noreturn

*(arg1 + 8) = ecx + 1
ebp[1] = arg4
void* ecx_3 = *(arg1 + 4)

if (arg4 == ecx_3)
    *(ecx_3 + 4) = ebp
    **(arg1 + 4) = ebp
    *(*(arg1 + 4) + 8) = ebp
else if (arg3 == 0)
    arg4[2] = ebp
    void* ecx_6 = *(arg1 + 4)
    
    if (arg4 == *(ecx_6 + 8))
        *(ecx_6 + 8) = ebp
else
    *arg4 = ebp
    void** ecx_5 = *(arg1 + 4)
    
    if (arg4 == *ecx_5)
        *ecx_5 = ebp

int32_t* esi_1 = ebp

if (*(ebp[1] + 0x20) == 0)
    do
        int32_t* eax_8 = esi_1[1]
        int32_t* ecx_7 = eax_8[1]
        int32_t* eax_12
        int32_t** ecx_12
        
        if (eax_8 != *ecx_7)
            int32_t ecx_13 = *ecx_7
            
            if (*(ecx_13 + 0x20) != 0)
                if (esi_1 == *eax_8)
                    esi_1 = eax_8
                    sub_54e960(esi_1, arg1)
                
                *(esi_1[1] + 0x20) = 1
                *(*(esi_1[1] + 4) + 0x20) = 0
                eax_12 = *(esi_1[1] + 4)
                ecx_12 = eax_12[2]
                eax_12[2] = *ecx_12
                int32_t* edx_13 = *ecx_12
                
                if (*(edx_13 + 0x21) == 0)
                    edx_13[1] = eax_12
                
                ecx_12[1] = eax_12[1]
                void* edx_15 = *(arg1 + 4)
                
                if (eax_12 != *(edx_15 + 4))
                    int32_t*** edx_16 = eax_12[1]
                    
                    if (eax_12 != *edx_16)
                        edx_16[2] = ecx_12
                    else
                        *edx_16 = ecx_12
                else
                    *(edx_15 + 4) = ecx_12
                
                *ecx_12 = eax_12
                eax_12[1] = ecx_12
            else
                eax_8[8].b = 1
                *(ecx_13 + 0x20) = 1
                *(*(esi_1[1] + 4) + 0x20) = 0
                esi_1 = *(esi_1[1] + 4)
        else
            void* ecx_8 = ecx_7[2]
            
            if (*(ecx_8 + 0x20) != 0)
                if (esi_1 == eax_8[2])
                    esi_1 = eax_8
                    sub_58c2a0(esi_1, arg1)
                
                *(esi_1[1] + 0x20) = 1
                *(*(esi_1[1] + 4) + 0x20) = 0
                eax_12 = *(esi_1[1] + 4)
                ecx_12 = *eax_12
                *eax_12 = ecx_12[2]
                void* edx_6 = ecx_12[2]
                
                if (*(edx_6 + 0x21) == 0)
                    *(edx_6 + 4) = eax_12
                
                ecx_12[1] = eax_12[1]
                void* edx_8 = *(arg1 + 4)
                
                if (eax_12 != *(edx_8 + 4))
                    void** edx_9 = eax_12[1]
                    
                    if (eax_12 != edx_9[2])
                        *edx_9 = ecx_12
                        ecx_12[2] = eax_12
                    else
                        edx_9[2] = ecx_12
                        ecx_12[2] = eax_12
                else
                    *(edx_8 + 4) = ecx_12
                    ecx_12[2] = eax_12
                
                eax_12[1] = ecx_12
            else
                eax_8[8].b = 1
                *(ecx_8 + 0x20) = 1
                *(*(esi_1[1] + 4) + 0x20) = 0
                esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0x20) == 0)

*(*(*(arg1 + 4) + 4) + 0x20) = 1
*arg2 = ebp
fsbase->NtTib.ExceptionList = ExceptionList
return arg2

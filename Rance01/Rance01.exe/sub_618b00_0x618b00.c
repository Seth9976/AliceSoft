// 函数: sub_618b00
// 地址: 0x618b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_24 = 0
int32_t var_20 = 0
void* esi = arg1
int32_t var_c_1 = 0
sub_61b000(esi + 0x34, &result_2)
sub_61b000(esi + 0x7c, &result_2)
int32_t* eax_3 = *(esi + 8)
int32_t* i = *eax_3

if (i != eax_3)
    do
        void* esi_1 = i[4]
        
        if (esi_1 != 0)
            if (*(esi_1 + 0x34) u>= 0x10)
                int32_t var_40_2 = *(esi_1 + 0x20)
                sub_6b4d5b()
            
            *(esi_1 + 0x34) = 0xf
            *(esi_1 + 0x30) = 0
            *(esi_1 + 0x20) = 0
            
            if (*(esi_1 + 0x18) u>= 0x10)
                int32_t var_40_3 = *(esi_1 + 4)
                sub_6b4d5b()
            
            *(esi_1 + 0x18) = 0xf
            *(esi_1 + 0x14) = 0
            void* var_40_4 = esi_1
            *(esi_1 + 4) = 0
            sub_6b4d5b()
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x15) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x15) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x15) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 8))
    
    esi = arg1

void** ebx = *(*(esi + 8) + 4)
void** esi_2 = ebx

if (*(ebx + 0x15) == 0)
    do
        sub_402c20(esi_2[2])
        esi_2 = *esi_2
        void** var_40_6 = ebx
        sub_6b4d5b()
        ebx = esi_2
    while (*(esi_2 + 0x15) == 0)

void* eax_6 = *(esi + 8)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(esi + 8)
*eax_7 = eax_7
void* eax_8 = *(esi + 8)
*(eax_8 + 8) = eax_8
int32_t result = result_2
*(esi + 0xc) = 0

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result

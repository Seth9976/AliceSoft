// 函数: sub_5d6dd0
// 地址: 0x5d6dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7125a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::kiwi::CSactBGI::VTable** edi = arg1
struct IInterface::kiwi::CSactBGI::VTable** var_14 = edi
*edi = &kiwi::CSactBGI::`vftable'{for `IInterface'}
int32_t var_4 = 0
int32_t* eax_3 = edi[3]
int32_t* i = *eax_3

if (i != eax_3)
    do
        arg1 = i[4]
        
        if (arg1 != 0)
            (**arg1)(1)
        
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
    while (i != edi[3])

void** ebp = edi[3]->__offset(0x4).d
void** edi_1 = ebp

if (*(ebp + 0x15) == 0)
    do
        sub_402c20(edi_1[2])
        edi_1 = *edi_1
        void** var_28_2 = ebp
        sub_6b4d5b()
        ebp = edi_1
    while (*(edi_1 + 0x15) == 0)

void* eax_6 = edi[3]
*(eax_6 + 4) = eax_6
int32_t* eax_7 = edi[3]
*eax_7 = eax_7
void* eax_8 = edi[3]
*(eax_8 + 8) = eax_8
edi[4] = 0
void* var_14_1 = &edi[2]
int32_t var_4_1 = 1
int32_t* eax_9 = edi[3]
void var_10
sub_4365a0(&edi[2], &var_10, *eax_9, eax_9)
int32_t var_28_4 = edi[3]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result

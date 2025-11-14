// 函数: sub_5e7890
// 地址: 0x5e7890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = data_793470

if (data_793484 u< 0x10)
    ecx = &data_793470

int32_t esi = arg2[4]
int32_t edi = data_793480
int32_t eax = esi

if (esi u>= edi)
    eax = edi

int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

if (sub_402320(eax, edx, ecx, eax) == 0 && esi u>= edi)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1
    eax_1.b = esi != edi
    
    if (eax_1 == 0)
        int32_t* edi_1 = *arg1
        
        if (edi_1 != 0xffffffff)
            sub_409390(edi_1)
            *arg1 = 0xffffffff
        
        eax_1.b = 1
        return eax_1

int32_t* esi_1 = *arg1

if (esi_1 == 0xffffffff)
    int32_t* ecx_1 = *arg1[1]
    void* edx_1 = data_797d2c
    int32_t* var_14_1 = ecx_1
    esi_1 = sub_40d040(*(edx_1 + 0x30) + 0x28c, edx_1, ecx_1)

int32_t eax_6

if (sub_5f9b80(esi_1, arg2) == 0)
    eax_6.b = 0
    return eax_6

*arg1 = esi_1
eax_6.b = 1
return eax_6

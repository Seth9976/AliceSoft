// 函数: sub_405150
// 地址: 0x405150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7134fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg1
int32_t ecx = arg2[1]
int32_t eax_3

if (edi u< ecx)
    eax_3 = *arg2

int32_t* result
int32_t* esi_3

if (edi u>= ecx || eax_3 u> edi)
    int32_t edx
    
    if (ecx == arg2[2])
        sub_405460(1, edx, arg2)
    esi_3 = arg2[1]
    int32_t var_4_1 = 1
    result = nullptr
else
    void* edi_1 = edi - eax_3
    int32_t eax_4
    void* edx_1
    edx_1:eax_4 = muls.dp.d(0x92492493, edi_1)
    
    if (ecx == arg2[2])
        sub_405460(1, (edx_1 + edi_1) s>> 4, arg2)
    
    esi_3 = arg2[1]
    edi = *arg2 + edi_1 s/ 0x1c * 0x1c
    result = nullptr
    int32_t var_4 = 0

if (esi_3 != 0)
    esi_3[5] = 0xf
    esi_3[4] = 0
    *esi_3 = 0
    result = sub_401ef0(esi_3, edi)

arg2[1] += 0x1c
fsbase->NtTib.ExceptionList = ExceptionList
return result

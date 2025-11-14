// 函数: sub_430340
// 地址: 0x430340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** i_1 = arg1
int32_t* edi = arg2

if (arg1[7] == 0 || arg1[8] == 0)
    return 

int32_t ecx = edi[1]
arg2 = *edi
struct _EXCEPTION_REGISTRATION_RECORD** i = arg1[0x16]
i_1 = i

if (arg2 == ecx)
label_430385:
    sub_416780(&i_1, edi)
    struct _EXCEPTION_REGISTRATION_RECORD** i_2 = i_1
    sub_430400(arg1, i_2)
    
    if (arg1[0x16] != i_2)
        sub_430250(arg1, arg3, arg4, arg5, arg6, edi)
        return 
    
    sub_4304c0(arg1, i_2, arg4.b)
    int32_t edi_3 = (arg1[0xa] - arg1[9]) s>> 2
    int32_t edi_4 = edi_3 - 1
    
    if (edi_3 - 1 s>= 0)
        int32_t temp2_1
        
        do
            sub_42d790(*(arg1[9] + (edi_4 << 2)), i_2, arg3, arg4, arg5, 0, arg6)
            temp2_1 = edi_4
            edi_4 -= 1
        while (temp2_1 - 1 s>= 0)
else
    while (*arg2 != i)
        arg2 = &arg2[1]
        
        if (arg2 == ecx)
            break
    
    if (arg2 == ecx)
        goto label_430385

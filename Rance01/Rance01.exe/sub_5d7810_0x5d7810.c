// 函数: sub_5d7810
// 地址: 0x5d7810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
void* arg_4
sub_42e070(arg1 + 0x24, &var_14, &arg_4)
void* eax_1 = var_14
struct kiwi::CSoundGroupInfo::VTable** ebx

if (eax_1 == *(arg1 + 0x28))
    struct kiwi::CSoundGroupInfo::VTable** eax_2 = operator new(0xc)
    
    if (eax_2 == 0)
        eax_2 = nullptr
    else
        *eax_2 = &kiwi::CSoundGroupInfo::`vftable'
        eax_2[1].w = 0
        eax_2[2] = 0x64
    
    ebx = eax_2
    var_14 = arg_4
    struct kiwi::CSoundGroupInfo::VTable** var_10_1 = eax_2
    sub_5d7ff0(&var_14, arg1 + 0x24, sub_40d430(arg1 + 0x24, &var_14))
else
    ebx = *(eax_1 + 0x10)

ebx[2] = arg2
return sub_5d7f70(arg1)

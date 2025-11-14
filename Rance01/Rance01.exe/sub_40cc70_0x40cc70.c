// 函数: sub_40cc70
// 地址: 0x40cc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** esi = arg2
int32_t** var_c = esi
int32_t** var_8
sub_42e070(&arg1[2], &var_8, &var_c)
int32_t** ebp = var_8

if (ebp != arg1[3])
    int32_t* esi_1 = ebp[4]
    
    if (esi_1 != 0)
        *esi_1 -= 1
        
        if (*esi_1 s<= 0)
            sub_40c6b0(esi_1)
    
    sub_436320(&arg1[2], &var_8, ebp)
    esi = arg2

int32_t* eax_1 = operator new(0xdc)

if (eax_1 == 0)
    eax_1 = nullptr
else
    sub_40c540(esi, eax_1, *arg1, arg1[1])

var_8 = esi
int32_t* var_4 = eax_1
sub_5d7ff0(&var_8, &arg1[2], sub_40d430(&arg1[2], &var_8))
void** result
result.b = 1
return result

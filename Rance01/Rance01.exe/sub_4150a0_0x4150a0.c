// 函数: sub_4150a0
// 地址: 0x4150a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** var_4 = arg1
int32_t* arg_4

if (arg_4 s<= 0)
    return 

int32_t* edx_1 = sub_42e070(&arg2[2], &var_4, &arg_4)
int32_t** ebx_1 = var_4

if (ebx_1 == arg2[3])
    return 

int32_t* esi_1 = ebx_1[4]
arg_4 = esi_1

if (esi_1 != 0)
    if (arg2[1] != 0)
        edx_1 = (*(*arg2[1] + 4))(esi_1)
    
    int32_t* ecx_2 = arg2[6]
    int32_t* var_14_2 = &arg_4
    int32_t var_18_1 = arg2[7]
    sub_416ae0(&var_4, edx_1, ecx_2, ecx_2)
    int32_t** eax_4 = var_4
    int32_t ecx_4 = sub_6b49d0(eax_4, &eax_4[1], ((arg2[7] - &eax_4[1]) s>> 2) * 4)
    arg2[7] -= 4
    sub_413840(ecx_4, *arg2, esi_1)
    (*(*esi_1 + 4))()

sub_436320(&arg2[2], &arg_4, ebx_1)

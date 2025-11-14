// 函数: sub_4c33d0
// 地址: 0x4c33d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t*** result = arg3
void* esi = arg1
int32_t** ebp = *(esi + 4)
int32_t** eax = ebp[1]
arg1.b = 1
var_4.b = 1

while (*(eax + 0x11) == 0)
    ebp = eax
    arg1.b = *arg2 u< eax[3]
    var_4.b = arg1.b
    
    if (arg1.b == 0)
        eax = eax[2]
    else
        eax = *eax

int32_t** eax_6 = ebp
arg3 = eax_6

if (arg1.b != 0)
    if (ebp == **(esi + 4))
        sub_416950(ebp, esi, &arg3, 1, sub_416d20(esi, arg2))
        *result = arg3
        result[1].b = 1
        return result
    
    sub_4f26e0(&arg3)
    eax_6 = arg3

if (eax_6[3] u>= *arg2)
    *result = eax_6
    result[1].b = 0
    return result

sub_416950(ebp, esi, &arg3, var_4.b, sub_416d20(esi, arg2))
*result = arg3
result[1].b = 1
return result

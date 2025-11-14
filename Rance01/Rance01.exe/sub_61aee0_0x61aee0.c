// 函数: sub_61aee0
// 地址: 0x61aee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_1 = arg3
int128_t* ebx = (*(*arg3 + 8))(2, 1)
int128_t* ebp = (*(*arg1 + 8))(0, 0)
void* eax_5 = arg4 * 3
int32_t eax_7 = (*(*arg3 + 0x1c))()
int32_t eax_9 = (*(*arg1 + 0x1c))()
int128_t* result = arg5

if (result s> 0)
    arg4 = result
    int128_t* i
    
    do
        result = sub_6c02a0(ebx, ebp, eax_5)
        ebx += eax_7
        ebp += eax_9
        i = arg4
        arg4 -= 1
    while (i != 1)

return result

// 函数: sub_573970
// 地址: 0x573970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1 = arg3
void* eax_1 = (*(*arg1 + 8))(0, 0)
int128_t* result = (*(*arg1 + 0x1c))()
void* esi_2 = result - arg2

if (i_1 s> 0)
    void* edi_1 = eax_1
    int32_t i
    
    do
        if (arg2 s> 0)
            result = sub_6bc670(edi_1, 0, arg2)
            edi_1 += arg2
        
        edi_1 += esi_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

// 函数: sub_67f0d0
// 地址: 0x67f0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = data_797ddc
int32_t* result = *(edi + 0x7c)

if (result != *(edi + 0x80))
    void* esi_1 = *result
    
    if (esi_1 != 0)
        sub_68b6f0(esi_1)
        void* var_c_1 = esi_1
        sub_6b4d5b()
    
    int128_t* eax = *(edi + 0x7c)
    result = sub_6b49d0(eax, eax + 4, ((*(edi + 0x80) - (eax + 4)) s>> 2) * 4)
    *(edi + 0x80) -= 4

return result

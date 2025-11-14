// 函数: sub_591590
// 地址: 0x591590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[1] -= 1
int32_t eax = arg1[1]

if (eax s<= 0)
    (*(*arg1 + 0x38))(1)
    return 0

if (eax == 1)
    void* edi_1 = arg1[2]
    int32_t* var_8 = arg1
    sub_58c400(&var_8, edi_1 + 0x34, sub_416d20(edi_1 + 0x34, &var_8))
    sub_588420(*(edi_1 + 0x1c))

return arg1[1]

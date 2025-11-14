// 函数: sub_597d70
// 地址: 0x597d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = data_797d68
void* eax_1 = *(*edi + 4)
int32_t esi = *(eax_1 + 8)
int32_t eax_5 = (*(eax_1 + 0xc) - esi) s/ 0x1c

if (*(esi + eax_5 * 0x1c - 0xc) == 0)
    eax_5 -= 1

int32_t result = edi[1]

if (eax_5 != 0)
    return result

return result - 1

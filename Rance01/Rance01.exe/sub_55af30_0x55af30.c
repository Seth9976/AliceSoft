// 函数: sub_55af30
// 地址: 0x55af30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 4)

if (*(esi + 0x2d) != 0)
    return sub_604c90(0x74c870)

char* eax_1 = arg2
void* edx = &eax_1[1]
void* ebx_1 = arg1

do
    arg1.b = *eax_1
    eax_1 = &eax_1[1]
while (arg1.b != 0)

if (eax_1 - edx + 1 u> esi[1] && sub_54fa60(esi, eax_1 - edx + 1) == 0)
    sub_604c90("IString::Set()\nallocMemory")

int128_t** eax_4 = *(ebx_1 + 4)

if (eax_4[1] != 0)
    return sub_6c02a0(*eax_4, arg2, eax_1 - edx + 1)

return sub_6c02a0(nullptr, arg2, eax_1 - edx + 1)

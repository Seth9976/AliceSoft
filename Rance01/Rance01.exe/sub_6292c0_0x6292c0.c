// 函数: sub_6292c0
// 地址: 0x6292c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0xd8)

if (eax u> 4)
    return eax

switch (eax)
    case 0
        int32_t eax_1 = sub_622bc0(*(arg1 + 0xdc))
        *(arg1 + 0x100) = eax_1
        return eax_1
    case 1
        int32_t eax_2 = sub_623160(*(arg1 + 0xdc))
        *(arg1 + 0x104) = eax_2
        return eax_2
    case 2
        *(arg1 + 0x108) = sub_6232d0(*(arg1 + 0xdc))
        int32_t eax_5 = sub_6233d0(*(arg1 + 0xdc))
        void* esi_1 = *(arg1 + 0xdc)
        *(arg1 + 0x10c) = eax_5
        int32_t eax_6 = sub_623650(esi_1)
        *(arg1 + 0x110) = eax_6
        return eax_6
    case 3
        int32_t eax_7 = sub_624540(*(arg1 + 0xdc))
        *(arg1 + 0x114) = eax_7
        return eax_7
    case 4
        return sub_629380(arg1)

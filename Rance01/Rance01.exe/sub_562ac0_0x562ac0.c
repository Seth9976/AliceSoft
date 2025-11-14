// 函数: sub_562ac0
// 地址: 0x562ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1[3]

if (edi != 0)
    sub_58a650(edi)
    (*(*arg1[3] + 4))()
    arg1[3] = 0

void* esi_1 = arg1[3]

if (esi_1 == 0)
    return 

arg1 = *(esi_1 + 0x14)

if (arg1 != 0)
    (*(*arg1 + 8))(arg1)
    *(esi_1 + 0x14) = 0

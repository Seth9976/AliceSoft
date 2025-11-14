// 函数: sub_56e9f0
// 地址: 0x56e9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x94)

if (edi == 0)
    return 

sub_58a650(edi)
void* esi_1 = *(arg1 + 0x94)
int128_t* ecx_1 = *(esi_1 + 0x1e0)
int128_t* edi_1 = *(esi_1 + 0x1dc)

if (edi_1 == ecx_1)
    return 

int32_t ebx_1 = 0 s>> 2 << 2
sub_6b49d0(edi_1, ecx_1, ebx_1)
*(esi_1 + 0x1e0) = ebx_1 + edi_1

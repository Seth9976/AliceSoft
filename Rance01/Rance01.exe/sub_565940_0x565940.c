// 函数: sub_565940
// 地址: 0x565940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_56d520(arg1 + 0x270)
sub_6b2880(arg1 + 0x240)
void* edi = *(arg1 + 0x2cc)

if (edi != 0)
    sub_58a650(edi)
    (*(**(arg1 + 0x2cc) + 4))()
    *(arg1 + 0x2cc) = 0

if (*(arg1 + 0x4e8) == 0)
    char i
    
    do
        i = sub_56a980(arg1 + 0x110)
    while (i != 0)

sub_564370(arg1 + 0x5d4)
int32_t* ecx_2 = *(arg1 + 0x624)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x624) = 0

int32_t* result = sub_561b30()
void* esi_2 = *(arg1 + 0x2cc)

if (esi_2 != 0)
    result = *(esi_2 + 0x14)
    
    if (result != 0)
        result = (*(*result + 8))(result)
        *(esi_2 + 0x14) = 0

int32_t* ebp_1 = *(arg1 + 0x4f0)

if (ebp_1[2].b != 0)
    result = timeEndPeriod(*ebp_1)
    ebp_1[2].b = 0

return result

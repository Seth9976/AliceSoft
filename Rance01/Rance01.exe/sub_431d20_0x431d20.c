// 函数: sub_431d20
// 地址: 0x431d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx
struct IInterface::partsengine::CFlatLayerView::VTable** edi = arg1

if (arg3 == 0 || edi[2] == arg3)
    return 

sub_431bf0(edi)
edi[2] = arg3
(**arg3)()
void* ebx_1 = edi[2]
sub_431fd0(edi)
sub_5f7cc0(&edi[3], *(ebx_1 + 0xc), *(ebx_1 + 0x10), fconvert.s(fconvert.t(10f)), 
    fconvert.s(fconvert.t(30f)), fconvert.s(arg2))
arg1 = operator new(0x60)
struct IInterface::partsengine::CFlatLayerView::VTable** esi_3

if (arg1 == 0)
    esi_3 = nullptr
else
    sub_42fa10(edi[0x1d], arg1, edi[0x1e], edi[0x1f], &edi[3], edi[0x20])
    esi_3 = arg1

edi[0x1c] = esi_3
int32_t* edi_1 = edi[2]
int32_t* ebx_2 = edi_1[9]

if (edi_1 == 0 || ebx_2 == 0)
    return 

sub_42fd90(esi_3)
esi_3[7] = edi_1
(**edi_1)()
esi_3[8] = ebx_2
(**ebx_2)()
sub_42fee0(esi_3)

// 函数: sub_5656a0
// 地址: 0x5656a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_564370(&arg1[0x175])
int32_t* ecx = arg1[0x189]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[0x189] = 0

sub_561b30()
struct IComponentSupplier::sys40::CComponentSupplier::VTable** eax_2 = operator new(8)

if (eax_2 == 0)
    eax_2 = nullptr
else
    *eax_2 = &sys40::CComponentSupplier::`vftable'{for `IComponentSupplier'}
    eax_2[1] = 1

int32_t esi = arg1[4]
arg1[0x189] = eax_2
char result = sub_561970(esi, arg1, eax_2)

if (result != 0)
    return sub_563d60(&arg1[0x180], arg1[0x189], &arg1[0x175], &arg1[0x33], &arg1[0x179]) != 0

return result

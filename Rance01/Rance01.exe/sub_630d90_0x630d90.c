// 函数: sub_630d90
// 地址: 0x630d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = zx.d(arg3.w)
uint32_t edi = arg3 u>> 0x10

if (arg1[0x25] != ebx || arg1[0x26] != edi)
    sub_62c310(&arg1[0x2a])
    arg1[0x2c] = ebx
    arg1[0x2d] = edi
    arg1[0x2e] = 0x20
    arg1[0x2f] = 4
    arg1[0x30] = ((ebx << 2) + 0xf) & 0xfffffff0
    int32_t* pbmi_3 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    sub_404f60(0x28, &pbmi_3)
    int32_t temp0_1 = divs.dp.d(sx.q(arg1[0x30]), arg1[0x2f])
    int32_t* pbmi = pbmi_3
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - edi
    pbmi[3] = 0x200001
    __builtin_memset(&pbmi[4], 0, 0x18)
    pbmi[1] = temp0_1
    HDC eax_6 = GetDC(arg2)
    HBITMAP eax_7 = CreateDIBSection(eax_6, pbmi, DIB_RGB_COLORS, &arg1[0x32], nullptr, 0)
    arg1[0x31] = eax_7
    HDC hdc
    
    if (eax_7 != 0)
        hdc = CreateCompatibleDC(eax_6)
        arg1[0x33] = hdc
    
    if (eax_7 == 0 || hdc == 0)
        ReleaseDC(arg2, eax_6)
        int32_t* pbmi_1 = pbmi
        sub_6b4d5b()
        return 0
    
    arg1[0x34] = SelectObject(hdc, arg1[0x31])
    ReleaseDC(arg2, eax_6)
    int32_t* pbmi_2 = pbmi
    arg1[0x2b].b = 1
    sub_6b4d5b()
    arg1[0x25] = ebx
    arg1[0x26] = edi

int32_t ecx_6 = arg1[0x27]
int32_t eax_14
int32_t edx_7
edx_7:eax_14 = sx.q(ecx_6)
sub_631160(arg1, divs.dp.d(sx.q(edi), arg1[0x29] + ecx_6))
sub_6312a0(arg1, divs.dp.d(sx.q(ebx), (eax_14 - edx_7) s>> 1))
(*(*arg1 + 0x3c))()
return 0

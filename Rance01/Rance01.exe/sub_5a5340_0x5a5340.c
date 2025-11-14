// 函数: sub_5a5340
// 地址: 0x5a5340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1 & 0xffff
uint32_t edx_2 = zx.d((arg1 s>> 0x10).w)
uint32_t esi_1 = zx.d(arg3.w)
uint32_t ecx_1 = zx.d((arg3 s>> 0x10).w)
int32_t edi_1 = esi_1 * eax
int32_t eax_4 = ecx_1 * eax + esi_1 * edx_2 + zx.d((edi_1 s>> 0x10).w)
*arg4 = ecx_1 * edx_2 + zx.d((eax_4 s>> 0x10).w)
int32_t result = eax_4 << 0x10 | zx.d(edi_1.w)
*arg5 = result
return result

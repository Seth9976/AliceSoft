// 函数: sub_5526f0
// 地址: 0x5526f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sys43vm::CMemoryFrameManager::`vftable'
sub_552760(arg1)
int32_t lpMem = arg1[0xe]

if (lpMem != 0)
    HeapFree(data_797df0, HEAP_NONE, lpMem)

sub_552290(&arg1[8])
int32_t eax_1 = arg1[9]

if (eax_1 != 0)
    int32_t var_10_1 = eax_1
    sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
int32_t result = arg1[2]

if (result != 0)
    int32_t __saved_esi_2 = result
    result = sub_6b4d5b()

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
return result

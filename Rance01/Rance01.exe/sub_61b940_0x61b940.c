// 函数: sub_61b940
// 地址: 0x61b940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = arg1[1]
*arg1 = &dpanalysis::SVarSourceList::`vftable'

for (; i != arg1[2]; i = &i[1])
    void* esi_1 = *i
    
    if (esi_1 != 0)
        sub_6074b0(esi_1)
        void* var_10_1 = esi_1
        sub_6b4d5b()

int128_t* ecx = arg1[2]
int128_t* esi_2 = arg1[1]

if (esi_2 != ecx)
    int32_t ebx = 0 s>> 2 << 2
    sub_6b49d0(esi_2, ecx, ebx)
    arg1[2] = ebx + esi_2

int32_t result = arg1[1]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
return result

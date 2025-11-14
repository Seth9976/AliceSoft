// 函数: sub_504cd0
// 地址: 0x504cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1[0x7a]

if (edi != 0)
    sub_507a60(edi)
    int32_t* var_c_2 = edi
    sub_6b4d5b()
    arg1[0x7a] = 0

int32_t* ecx = arg1[0x79]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[0x79] = 0

int32_t result
int32_t ecx_1
result, ecx_1 = sub_4c8b60(arg1)
int32_t* edi_1 = arg1[0x7d]

if (edi_1 != 0)
    sub_4c0ca0(ecx_1, edi_1)
    int32_t* var_c_5 = edi_1
    result = sub_6b4d5b()
    arg1[0x7d] = 0

*(arg1 + 0x209) = 0
arg1[0x7c] = 0
return result

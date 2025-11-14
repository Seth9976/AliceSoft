// 函数: sub_677720
// 地址: 0x677720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_699840(arg2)
int32_t eax_1 = sub_699900(arg2)
int32_t var_10 = 0
int32_t var_c = 0
sub_6771c0(&var_10, &var_c, arg4, arg3)
var_10 = eax - var_10
long double x87_r6 = fconvert.t(0.5)
int32_t eax_3 = sub_70c710(float.t(var_10) * x87_r6)
int32_t edi_1 = eax_1 - var_c
var_10 = eax_3
var_c = edi_1
int32_t eax_4 = sub_70c710(x87_r6 * float.t(var_c))
void* edi_2 = *(arg1 + 0x10)
var_c = eax_4
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_6 = sub_414e30(edi_2)
int32_t* ecx_2 = *(edi_2 + 0x38)

if (ecx_2 != 0 && eax_6[2] == 0)
    eax_6[8] = ecx_2
    eax_6[2] = (**ecx_2)(1)

int32_t eax_9 = *(edi_2 + 0x30)
void* ecx_3 = eax_6[2]
eax_6[4] = edi_2
eax_6[3] = eax_9
sub_6987b0(*(ecx_3 + 4), arg2, arg5)
sub_698870(arg4, eax_6[2]->vFunc_1, var_10, var_c, arg3, 0, 0, arg5)
void* result = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)

if (result != 0)
    result = sub_5f3790(result, arg5)
    
    if (result != 0)
        return sub_5e4050(result)

return result

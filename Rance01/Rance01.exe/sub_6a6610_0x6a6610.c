// 函数: sub_6a6610
// 地址: 0x6a6610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct dpsound::CDialog::dpsound::CDialogSelectViewItem::VTable* dwInitParam
sub_6a4740(&dwInitParam)
int32_t var_bb
sub_6aa020(&var_bb, &dpsound::CParamCheckBox::`vftable'{for `dpsound::CParamBase'}, *(arg1 + 0x10c))
int32_t var_af = var_bb
int16_t var_b7
int16_t var_ab = var_b7
char var_b5
int32_t* eax_1
eax_1.b = var_b5
char var_a9 = eax_1.b
char var_b0

if (var_b0 != 0)
    sub_6a4950(&dwInitParam, &var_af)

sub_6a4b00(&var_bb, DialogBoxParamA(*(arg1 + 0x18), 0x88, arg2, sub_6a46f0, &dwInitParam), 
    &dwInitParam)
int32_t ebx
ebx.b = var_b5
void* result = *(arg1 + 0x10c)
*(result + 0x2a4) = var_bb
*(result + 0x2a8) = var_b7
*(result + 0x2aa) = ebx.b
return result

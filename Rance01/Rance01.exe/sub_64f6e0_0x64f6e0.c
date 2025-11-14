// 函数: sub_64f6e0
// 地址: 0x64f6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct dpparts::CColorDialog::VTable* var_20
sub_636910(&var_20)
CHOOSECOLORA* param0
param0->hwndOwner = *(arg1 + 0x34)
param0->rgbResult = arg2
ChooseColorA(param0)
uint32_t rgbResult = param0->rgbResult
CHOOSECOLORA* param0_1 = param0
var_20 = &dpparts::CColorDialog::`vftable'
sub_6b4d5b()
int32_t var_1c

if (var_1c != 0)
    int32_t var_2c_2 = var_1c
    sub_6b4d5b()

return rgbResult

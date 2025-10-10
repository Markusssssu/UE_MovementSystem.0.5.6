#include "Data/ControllerInputData.h"

UTexture2D* UControllerInputData::GetButtonIcon(FName ButtonName) const
{
    if (const TObjectPtr<UTexture2D>* FoundIcon = ButtonIcons.Find(ButtonName))
        {
            return FoundIcon->Get();
        }

     return nullptr; 
}

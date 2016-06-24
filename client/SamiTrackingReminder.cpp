
#include "SamiTrackingReminder.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTrackingReminder::SamiTrackingReminder() {
    init();
}

SamiTrackingReminder::~SamiTrackingReminder() {
    this->cleanup();
}

void
SamiTrackingReminder::init() {
    pId = null;
pClientId = null;
pUserId = null;
pVariableId = null;
pDefaultValue = null;
pReminderStartTime = null;
pReminderEndTime = null;
pReminderSound = null;
pReminderFrequency = null;
pPopUp = null;
pSms = null;
pEmail = null;
pNotificationBar = null;
pLastReminded = null;
pLastTracked = null;
pFirstDailyReminderTime = null;
pSecondDailyReminderTime = null;
pThirdDailyReminderTime = null;
pStartTrackingDate = null;
pStopTrackingDate = null;
pUpdatedAt = null;
pVariableName = null;
pVariableCategoryName = null;
pAbbreviatedUnitName = null;
pCombinationOperation = null;
}

void
SamiTrackingReminder::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pClientId != null) {
        
        delete pClientId;
        pClientId = null;
    }
if(pUserId != null) {
        
        delete pUserId;
        pUserId = null;
    }
if(pVariableId != null) {
        
        delete pVariableId;
        pVariableId = null;
    }
if(pDefaultValue != null) {
        
        delete pDefaultValue;
        pDefaultValue = null;
    }
if(pReminderStartTime != null) {
        
        delete pReminderStartTime;
        pReminderStartTime = null;
    }
if(pReminderEndTime != null) {
        
        delete pReminderEndTime;
        pReminderEndTime = null;
    }
if(pReminderSound != null) {
        
        delete pReminderSound;
        pReminderSound = null;
    }
if(pReminderFrequency != null) {
        
        delete pReminderFrequency;
        pReminderFrequency = null;
    }
if(pPopUp != null) {
        
        delete pPopUp;
        pPopUp = null;
    }
if(pSms != null) {
        
        delete pSms;
        pSms = null;
    }
if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pNotificationBar != null) {
        
        delete pNotificationBar;
        pNotificationBar = null;
    }
if(pLastReminded != null) {
        
        delete pLastReminded;
        pLastReminded = null;
    }
if(pLastTracked != null) {
        
        delete pLastTracked;
        pLastTracked = null;
    }
if(pFirstDailyReminderTime != null) {
        
        delete pFirstDailyReminderTime;
        pFirstDailyReminderTime = null;
    }
if(pSecondDailyReminderTime != null) {
        
        delete pSecondDailyReminderTime;
        pSecondDailyReminderTime = null;
    }
if(pThirdDailyReminderTime != null) {
        
        delete pThirdDailyReminderTime;
        pThirdDailyReminderTime = null;
    }
if(pStartTrackingDate != null) {
        
        delete pStartTrackingDate;
        pStartTrackingDate = null;
    }
if(pStopTrackingDate != null) {
        
        delete pStopTrackingDate;
        pStopTrackingDate = null;
    }
if(pUpdatedAt != null) {
        
        delete pUpdatedAt;
        pUpdatedAt = null;
    }
if(pVariableName != null) {
        
        delete pVariableName;
        pVariableName = null;
    }
if(pVariableCategoryName != null) {
        
        delete pVariableCategoryName;
        pVariableCategoryName = null;
    }
if(pAbbreviatedUnitName != null) {
        
        delete pAbbreviatedUnitName;
        pAbbreviatedUnitName = null;
    }
if(pCombinationOperation != null) {
        
        delete pCombinationOperation;
        pCombinationOperation = null;
    }
}


SamiTrackingReminder*
SamiTrackingReminder::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiTrackingReminder::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pClientIdKey = new JsonString(L"clientId");
        IJsonValue* pClientIdVal = null;
        pJsonObject->GetValue(pClientIdKey, pClientIdVal);
        if(pClientIdVal != null) {
            
            pClientId = new String();
            jsonToValue(pClientId, pClientIdVal, L"String", L"String");
        }
        delete pClientIdKey;
JsonString* pUserIdKey = new JsonString(L"userId");
        IJsonValue* pUserIdVal = null;
        pJsonObject->GetValue(pUserIdKey, pUserIdVal);
        if(pUserIdVal != null) {
            
            pUserId = new Integer();
            jsonToValue(pUserId, pUserIdVal, L"Integer", L"Integer");
        }
        delete pUserIdKey;
JsonString* pVariableIdKey = new JsonString(L"variableId");
        IJsonValue* pVariableIdVal = null;
        pJsonObject->GetValue(pVariableIdKey, pVariableIdVal);
        if(pVariableIdVal != null) {
            
            pVariableId = new Integer();
            jsonToValue(pVariableId, pVariableIdVal, L"Integer", L"Integer");
        }
        delete pVariableIdKey;
JsonString* pDefaultValueKey = new JsonString(L"defaultValue");
        IJsonValue* pDefaultValueVal = null;
        pJsonObject->GetValue(pDefaultValueKey, pDefaultValueVal);
        if(pDefaultValueVal != null) {
            
            pDefaultValue = new Float();
            jsonToValue(pDefaultValue, pDefaultValueVal, L"Float", L"Float");
        }
        delete pDefaultValueKey;
JsonString* pReminderStartTimeKey = new JsonString(L"reminderStartTime");
        IJsonValue* pReminderStartTimeVal = null;
        pJsonObject->GetValue(pReminderStartTimeKey, pReminderStartTimeVal);
        if(pReminderStartTimeVal != null) {
            
            pReminderStartTime = new String();
            jsonToValue(pReminderStartTime, pReminderStartTimeVal, L"String", L"String");
        }
        delete pReminderStartTimeKey;
JsonString* pReminderEndTimeKey = new JsonString(L"reminderEndTime");
        IJsonValue* pReminderEndTimeVal = null;
        pJsonObject->GetValue(pReminderEndTimeKey, pReminderEndTimeVal);
        if(pReminderEndTimeVal != null) {
            
            pReminderEndTime = new String();
            jsonToValue(pReminderEndTime, pReminderEndTimeVal, L"String", L"String");
        }
        delete pReminderEndTimeKey;
JsonString* pReminderSoundKey = new JsonString(L"reminderSound");
        IJsonValue* pReminderSoundVal = null;
        pJsonObject->GetValue(pReminderSoundKey, pReminderSoundVal);
        if(pReminderSoundVal != null) {
            
            pReminderSound = new String();
            jsonToValue(pReminderSound, pReminderSoundVal, L"String", L"String");
        }
        delete pReminderSoundKey;
JsonString* pReminderFrequencyKey = new JsonString(L"reminderFrequency");
        IJsonValue* pReminderFrequencyVal = null;
        pJsonObject->GetValue(pReminderFrequencyKey, pReminderFrequencyVal);
        if(pReminderFrequencyVal != null) {
            
            pReminderFrequency = new Integer();
            jsonToValue(pReminderFrequency, pReminderFrequencyVal, L"Integer", L"Integer");
        }
        delete pReminderFrequencyKey;
JsonString* pPopUpKey = new JsonString(L"popUp");
        IJsonValue* pPopUpVal = null;
        pJsonObject->GetValue(pPopUpKey, pPopUpVal);
        if(pPopUpVal != null) {
            
            pPopUp = new Boolean(false);
            jsonToValue(pPopUp, pPopUpVal, L"Boolean", L"Boolean");
        }
        delete pPopUpKey;
JsonString* pSmsKey = new JsonString(L"sms");
        IJsonValue* pSmsVal = null;
        pJsonObject->GetValue(pSmsKey, pSmsVal);
        if(pSmsVal != null) {
            
            pSms = new Boolean(false);
            jsonToValue(pSms, pSmsVal, L"Boolean", L"Boolean");
        }
        delete pSmsKey;
JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new Boolean(false);
            jsonToValue(pEmail, pEmailVal, L"Boolean", L"Boolean");
        }
        delete pEmailKey;
JsonString* pNotificationBarKey = new JsonString(L"notificationBar");
        IJsonValue* pNotificationBarVal = null;
        pJsonObject->GetValue(pNotificationBarKey, pNotificationBarVal);
        if(pNotificationBarVal != null) {
            
            pNotificationBar = new Boolean(false);
            jsonToValue(pNotificationBar, pNotificationBarVal, L"Boolean", L"Boolean");
        }
        delete pNotificationBarKey;
JsonString* pLastRemindedKey = new JsonString(L"lastReminded");
        IJsonValue* pLastRemindedVal = null;
        pJsonObject->GetValue(pLastRemindedKey, pLastRemindedVal);
        if(pLastRemindedVal != null) {
            
            pLastReminded = new DateTime();
            jsonToValue(pLastReminded, pLastRemindedVal, L"DateTime", L"DateTime");
        }
        delete pLastRemindedKey;
JsonString* pLastTrackedKey = new JsonString(L"lastTracked");
        IJsonValue* pLastTrackedVal = null;
        pJsonObject->GetValue(pLastTrackedKey, pLastTrackedVal);
        if(pLastTrackedVal != null) {
            
            pLastTracked = new DateTime();
            jsonToValue(pLastTracked, pLastTrackedVal, L"DateTime", L"DateTime");
        }
        delete pLastTrackedKey;
JsonString* pFirstDailyReminderTimeKey = new JsonString(L"firstDailyReminderTime");
        IJsonValue* pFirstDailyReminderTimeVal = null;
        pJsonObject->GetValue(pFirstDailyReminderTimeKey, pFirstDailyReminderTimeVal);
        if(pFirstDailyReminderTimeVal != null) {
            
            pFirstDailyReminderTime = new String();
            jsonToValue(pFirstDailyReminderTime, pFirstDailyReminderTimeVal, L"String", L"String");
        }
        delete pFirstDailyReminderTimeKey;
JsonString* pSecondDailyReminderTimeKey = new JsonString(L"secondDailyReminderTime");
        IJsonValue* pSecondDailyReminderTimeVal = null;
        pJsonObject->GetValue(pSecondDailyReminderTimeKey, pSecondDailyReminderTimeVal);
        if(pSecondDailyReminderTimeVal != null) {
            
            pSecondDailyReminderTime = new String();
            jsonToValue(pSecondDailyReminderTime, pSecondDailyReminderTimeVal, L"String", L"String");
        }
        delete pSecondDailyReminderTimeKey;
JsonString* pThirdDailyReminderTimeKey = new JsonString(L"thirdDailyReminderTime");
        IJsonValue* pThirdDailyReminderTimeVal = null;
        pJsonObject->GetValue(pThirdDailyReminderTimeKey, pThirdDailyReminderTimeVal);
        if(pThirdDailyReminderTimeVal != null) {
            
            pThirdDailyReminderTime = new String();
            jsonToValue(pThirdDailyReminderTime, pThirdDailyReminderTimeVal, L"String", L"String");
        }
        delete pThirdDailyReminderTimeKey;
JsonString* pStartTrackingDateKey = new JsonString(L"startTrackingDate");
        IJsonValue* pStartTrackingDateVal = null;
        pJsonObject->GetValue(pStartTrackingDateKey, pStartTrackingDateVal);
        if(pStartTrackingDateVal != null) {
            
            pStartTrackingDate = new String();
            jsonToValue(pStartTrackingDate, pStartTrackingDateVal, L"String", L"String");
        }
        delete pStartTrackingDateKey;
JsonString* pStopTrackingDateKey = new JsonString(L"stopTrackingDate");
        IJsonValue* pStopTrackingDateVal = null;
        pJsonObject->GetValue(pStopTrackingDateKey, pStopTrackingDateVal);
        if(pStopTrackingDateVal != null) {
            
            pStopTrackingDate = new String();
            jsonToValue(pStopTrackingDate, pStopTrackingDateVal, L"String", L"String");
        }
        delete pStopTrackingDateKey;
JsonString* pUpdatedAtKey = new JsonString(L"updatedAt");
        IJsonValue* pUpdatedAtVal = null;
        pJsonObject->GetValue(pUpdatedAtKey, pUpdatedAtVal);
        if(pUpdatedAtVal != null) {
            
            pUpdatedAt = new DateTime();
            jsonToValue(pUpdatedAt, pUpdatedAtVal, L"DateTime", L"DateTime");
        }
        delete pUpdatedAtKey;
JsonString* pVariableNameKey = new JsonString(L"variableName");
        IJsonValue* pVariableNameVal = null;
        pJsonObject->GetValue(pVariableNameKey, pVariableNameVal);
        if(pVariableNameVal != null) {
            
            pVariableName = new String();
            jsonToValue(pVariableName, pVariableNameVal, L"String", L"String");
        }
        delete pVariableNameKey;
JsonString* pVariableCategoryNameKey = new JsonString(L"variableCategoryName");
        IJsonValue* pVariableCategoryNameVal = null;
        pJsonObject->GetValue(pVariableCategoryNameKey, pVariableCategoryNameVal);
        if(pVariableCategoryNameVal != null) {
            
            pVariableCategoryName = new String();
            jsonToValue(pVariableCategoryName, pVariableCategoryNameVal, L"String", L"String");
        }
        delete pVariableCategoryNameKey;
JsonString* pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
        IJsonValue* pAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pAbbreviatedUnitNameKey, pAbbreviatedUnitNameVal);
        if(pAbbreviatedUnitNameVal != null) {
            
            pAbbreviatedUnitName = new String();
            jsonToValue(pAbbreviatedUnitName, pAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pAbbreviatedUnitNameKey;
JsonString* pCombinationOperationKey = new JsonString(L"combinationOperation");
        IJsonValue* pCombinationOperationVal = null;
        pJsonObject->GetValue(pCombinationOperationKey, pCombinationOperationVal);
        if(pCombinationOperationVal != null) {
            
            pCombinationOperation = new String();
            jsonToValue(pCombinationOperation, pCombinationOperationVal, L"String", L"String");
        }
        delete pCombinationOperationKey;
    }
}

SamiTrackingReminder::SamiTrackingReminder(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiTrackingReminder::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiTrackingReminder::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pClientIdKey = new JsonString(L"clientId");
    pJsonObject->Add(pClientIdKey, toJson(getPClientId(), "String", ""));

    JsonString *pUserIdKey = new JsonString(L"userId");
    pJsonObject->Add(pUserIdKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pVariableIdKey = new JsonString(L"variableId");
    pJsonObject->Add(pVariableIdKey, toJson(getPVariableId(), "Integer", ""));

    JsonString *pDefaultValueKey = new JsonString(L"defaultValue");
    pJsonObject->Add(pDefaultValueKey, toJson(getPDefaultValue(), "Float", ""));

    JsonString *pReminderStartTimeKey = new JsonString(L"reminderStartTime");
    pJsonObject->Add(pReminderStartTimeKey, toJson(getPReminderStartTime(), "String", ""));

    JsonString *pReminderEndTimeKey = new JsonString(L"reminderEndTime");
    pJsonObject->Add(pReminderEndTimeKey, toJson(getPReminderEndTime(), "String", ""));

    JsonString *pReminderSoundKey = new JsonString(L"reminderSound");
    pJsonObject->Add(pReminderSoundKey, toJson(getPReminderSound(), "String", ""));

    JsonString *pReminderFrequencyKey = new JsonString(L"reminderFrequency");
    pJsonObject->Add(pReminderFrequencyKey, toJson(getPReminderFrequency(), "Integer", ""));

    JsonString *pPopUpKey = new JsonString(L"popUp");
    pJsonObject->Add(pPopUpKey, toJson(getPPopUp(), "Boolean", ""));

    JsonString *pSmsKey = new JsonString(L"sms");
    pJsonObject->Add(pSmsKey, toJson(getPSms(), "Boolean", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "Boolean", ""));

    JsonString *pNotificationBarKey = new JsonString(L"notificationBar");
    pJsonObject->Add(pNotificationBarKey, toJson(getPNotificationBar(), "Boolean", ""));

    JsonString *pLastRemindedKey = new JsonString(L"lastReminded");
    pJsonObject->Add(pLastRemindedKey, toJson(getPLastReminded(), "DateTime", ""));

    JsonString *pLastTrackedKey = new JsonString(L"lastTracked");
    pJsonObject->Add(pLastTrackedKey, toJson(getPLastTracked(), "DateTime", ""));

    JsonString *pFirstDailyReminderTimeKey = new JsonString(L"firstDailyReminderTime");
    pJsonObject->Add(pFirstDailyReminderTimeKey, toJson(getPFirstDailyReminderTime(), "String", ""));

    JsonString *pSecondDailyReminderTimeKey = new JsonString(L"secondDailyReminderTime");
    pJsonObject->Add(pSecondDailyReminderTimeKey, toJson(getPSecondDailyReminderTime(), "String", ""));

    JsonString *pThirdDailyReminderTimeKey = new JsonString(L"thirdDailyReminderTime");
    pJsonObject->Add(pThirdDailyReminderTimeKey, toJson(getPThirdDailyReminderTime(), "String", ""));

    JsonString *pStartTrackingDateKey = new JsonString(L"startTrackingDate");
    pJsonObject->Add(pStartTrackingDateKey, toJson(getPStartTrackingDate(), "String", ""));

    JsonString *pStopTrackingDateKey = new JsonString(L"stopTrackingDate");
    pJsonObject->Add(pStopTrackingDateKey, toJson(getPStopTrackingDate(), "String", ""));

    JsonString *pUpdatedAtKey = new JsonString(L"updatedAt");
    pJsonObject->Add(pUpdatedAtKey, toJson(getPUpdatedAt(), "DateTime", ""));

    JsonString *pVariableNameKey = new JsonString(L"variableName");
    pJsonObject->Add(pVariableNameKey, toJson(getPVariableName(), "String", ""));

    JsonString *pVariableCategoryNameKey = new JsonString(L"variableCategoryName");
    pJsonObject->Add(pVariableCategoryNameKey, toJson(getPVariableCategoryName(), "String", ""));

    JsonString *pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
    pJsonObject->Add(pAbbreviatedUnitNameKey, toJson(getPAbbreviatedUnitName(), "String", ""));

    JsonString *pCombinationOperationKey = new JsonString(L"combinationOperation");
    pJsonObject->Add(pCombinationOperationKey, toJson(getPCombinationOperation(), "String", ""));

    return pJsonObject;
}

Integer*
SamiTrackingReminder::getPId() {
    return pId;
}
void
SamiTrackingReminder::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiTrackingReminder::getPClientId() {
    return pClientId;
}
void
SamiTrackingReminder::setPClientId(String* pClientId) {
    this->pClientId = pClientId;
}

Integer*
SamiTrackingReminder::getPUserId() {
    return pUserId;
}
void
SamiTrackingReminder::setPUserId(Integer* pUserId) {
    this->pUserId = pUserId;
}

Integer*
SamiTrackingReminder::getPVariableId() {
    return pVariableId;
}
void
SamiTrackingReminder::setPVariableId(Integer* pVariableId) {
    this->pVariableId = pVariableId;
}

Float*
SamiTrackingReminder::getPDefaultValue() {
    return pDefaultValue;
}
void
SamiTrackingReminder::setPDefaultValue(Float* pDefaultValue) {
    this->pDefaultValue = pDefaultValue;
}

String*
SamiTrackingReminder::getPReminderStartTime() {
    return pReminderStartTime;
}
void
SamiTrackingReminder::setPReminderStartTime(String* pReminderStartTime) {
    this->pReminderStartTime = pReminderStartTime;
}

String*
SamiTrackingReminder::getPReminderEndTime() {
    return pReminderEndTime;
}
void
SamiTrackingReminder::setPReminderEndTime(String* pReminderEndTime) {
    this->pReminderEndTime = pReminderEndTime;
}

String*
SamiTrackingReminder::getPReminderSound() {
    return pReminderSound;
}
void
SamiTrackingReminder::setPReminderSound(String* pReminderSound) {
    this->pReminderSound = pReminderSound;
}

Integer*
SamiTrackingReminder::getPReminderFrequency() {
    return pReminderFrequency;
}
void
SamiTrackingReminder::setPReminderFrequency(Integer* pReminderFrequency) {
    this->pReminderFrequency = pReminderFrequency;
}

Boolean*
SamiTrackingReminder::getPPopUp() {
    return pPopUp;
}
void
SamiTrackingReminder::setPPopUp(Boolean* pPopUp) {
    this->pPopUp = pPopUp;
}

Boolean*
SamiTrackingReminder::getPSms() {
    return pSms;
}
void
SamiTrackingReminder::setPSms(Boolean* pSms) {
    this->pSms = pSms;
}

Boolean*
SamiTrackingReminder::getPEmail() {
    return pEmail;
}
void
SamiTrackingReminder::setPEmail(Boolean* pEmail) {
    this->pEmail = pEmail;
}

Boolean*
SamiTrackingReminder::getPNotificationBar() {
    return pNotificationBar;
}
void
SamiTrackingReminder::setPNotificationBar(Boolean* pNotificationBar) {
    this->pNotificationBar = pNotificationBar;
}

DateTime*
SamiTrackingReminder::getPLastReminded() {
    return pLastReminded;
}
void
SamiTrackingReminder::setPLastReminded(DateTime* pLastReminded) {
    this->pLastReminded = pLastReminded;
}

DateTime*
SamiTrackingReminder::getPLastTracked() {
    return pLastTracked;
}
void
SamiTrackingReminder::setPLastTracked(DateTime* pLastTracked) {
    this->pLastTracked = pLastTracked;
}

String*
SamiTrackingReminder::getPFirstDailyReminderTime() {
    return pFirstDailyReminderTime;
}
void
SamiTrackingReminder::setPFirstDailyReminderTime(String* pFirstDailyReminderTime) {
    this->pFirstDailyReminderTime = pFirstDailyReminderTime;
}

String*
SamiTrackingReminder::getPSecondDailyReminderTime() {
    return pSecondDailyReminderTime;
}
void
SamiTrackingReminder::setPSecondDailyReminderTime(String* pSecondDailyReminderTime) {
    this->pSecondDailyReminderTime = pSecondDailyReminderTime;
}

String*
SamiTrackingReminder::getPThirdDailyReminderTime() {
    return pThirdDailyReminderTime;
}
void
SamiTrackingReminder::setPThirdDailyReminderTime(String* pThirdDailyReminderTime) {
    this->pThirdDailyReminderTime = pThirdDailyReminderTime;
}

String*
SamiTrackingReminder::getPStartTrackingDate() {
    return pStartTrackingDate;
}
void
SamiTrackingReminder::setPStartTrackingDate(String* pStartTrackingDate) {
    this->pStartTrackingDate = pStartTrackingDate;
}

String*
SamiTrackingReminder::getPStopTrackingDate() {
    return pStopTrackingDate;
}
void
SamiTrackingReminder::setPStopTrackingDate(String* pStopTrackingDate) {
    this->pStopTrackingDate = pStopTrackingDate;
}

DateTime*
SamiTrackingReminder::getPUpdatedAt() {
    return pUpdatedAt;
}
void
SamiTrackingReminder::setPUpdatedAt(DateTime* pUpdatedAt) {
    this->pUpdatedAt = pUpdatedAt;
}

String*
SamiTrackingReminder::getPVariableName() {
    return pVariableName;
}
void
SamiTrackingReminder::setPVariableName(String* pVariableName) {
    this->pVariableName = pVariableName;
}

String*
SamiTrackingReminder::getPVariableCategoryName() {
    return pVariableCategoryName;
}
void
SamiTrackingReminder::setPVariableCategoryName(String* pVariableCategoryName) {
    this->pVariableCategoryName = pVariableCategoryName;
}

String*
SamiTrackingReminder::getPAbbreviatedUnitName() {
    return pAbbreviatedUnitName;
}
void
SamiTrackingReminder::setPAbbreviatedUnitName(String* pAbbreviatedUnitName) {
    this->pAbbreviatedUnitName = pAbbreviatedUnitName;
}

String*
SamiTrackingReminder::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiTrackingReminder::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}



} /* namespace Swagger */


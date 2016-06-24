
#include "SamiTrackingReminderNotification.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTrackingReminderNotification::SamiTrackingReminderNotification() {
    init();
}

SamiTrackingReminderNotification::~SamiTrackingReminderNotification() {
    this->cleanup();
}

void
SamiTrackingReminderNotification::init() {
    pId = null;
pTrackingReminderId = null;
pClientId = null;
pUserId = null;
pVariableId = null;
pPendingReminderTime = null;
pDefaultValue = null;
pReminderSound = null;
pPopUp = null;
pSms = null;
pEmail = null;
pNotificationBar = null;
pUpdatedAt = null;
pVariableName = null;
pVariableCategoryName = null;
pAbbreviatedUnitName = null;
pCombinationOperation = null;
}

void
SamiTrackingReminderNotification::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pTrackingReminderId != null) {
        
        delete pTrackingReminderId;
        pTrackingReminderId = null;
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
if(pPendingReminderTime != null) {
        
        delete pPendingReminderTime;
        pPendingReminderTime = null;
    }
if(pDefaultValue != null) {
        
        delete pDefaultValue;
        pDefaultValue = null;
    }
if(pReminderSound != null) {
        
        delete pReminderSound;
        pReminderSound = null;
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


SamiTrackingReminderNotification*
SamiTrackingReminderNotification::fromJson(String* json) {
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
SamiTrackingReminderNotification::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pTrackingReminderIdKey = new JsonString(L"trackingReminderId");
        IJsonValue* pTrackingReminderIdVal = null;
        pJsonObject->GetValue(pTrackingReminderIdKey, pTrackingReminderIdVal);
        if(pTrackingReminderIdVal != null) {
            
            pTrackingReminderId = new Integer();
            jsonToValue(pTrackingReminderId, pTrackingReminderIdVal, L"Integer", L"Integer");
        }
        delete pTrackingReminderIdKey;
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
JsonString* pPendingReminderTimeKey = new JsonString(L"pendingReminderTime");
        IJsonValue* pPendingReminderTimeVal = null;
        pJsonObject->GetValue(pPendingReminderTimeKey, pPendingReminderTimeVal);
        if(pPendingReminderTimeVal != null) {
            
            pPendingReminderTime = new DateTime();
            jsonToValue(pPendingReminderTime, pPendingReminderTimeVal, L"DateTime", L"DateTime");
        }
        delete pPendingReminderTimeKey;
JsonString* pDefaultValueKey = new JsonString(L"defaultValue");
        IJsonValue* pDefaultValueVal = null;
        pJsonObject->GetValue(pDefaultValueKey, pDefaultValueVal);
        if(pDefaultValueVal != null) {
            
            pDefaultValue = new Float();
            jsonToValue(pDefaultValue, pDefaultValueVal, L"Float", L"Float");
        }
        delete pDefaultValueKey;
JsonString* pReminderSoundKey = new JsonString(L"reminderSound");
        IJsonValue* pReminderSoundVal = null;
        pJsonObject->GetValue(pReminderSoundKey, pReminderSoundVal);
        if(pReminderSoundVal != null) {
            
            pReminderSound = new String();
            jsonToValue(pReminderSound, pReminderSoundVal, L"String", L"String");
        }
        delete pReminderSoundKey;
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

SamiTrackingReminderNotification::SamiTrackingReminderNotification(String* json) {
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
SamiTrackingReminderNotification::asJson ()
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
SamiTrackingReminderNotification::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pTrackingReminderIdKey = new JsonString(L"trackingReminderId");
    pJsonObject->Add(pTrackingReminderIdKey, toJson(getPTrackingReminderId(), "Integer", ""));

    JsonString *pClientIdKey = new JsonString(L"clientId");
    pJsonObject->Add(pClientIdKey, toJson(getPClientId(), "String", ""));

    JsonString *pUserIdKey = new JsonString(L"userId");
    pJsonObject->Add(pUserIdKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pVariableIdKey = new JsonString(L"variableId");
    pJsonObject->Add(pVariableIdKey, toJson(getPVariableId(), "Integer", ""));

    JsonString *pPendingReminderTimeKey = new JsonString(L"pendingReminderTime");
    pJsonObject->Add(pPendingReminderTimeKey, toJson(getPPendingReminderTime(), "DateTime", ""));

    JsonString *pDefaultValueKey = new JsonString(L"defaultValue");
    pJsonObject->Add(pDefaultValueKey, toJson(getPDefaultValue(), "Float", ""));

    JsonString *pReminderSoundKey = new JsonString(L"reminderSound");
    pJsonObject->Add(pReminderSoundKey, toJson(getPReminderSound(), "String", ""));

    JsonString *pPopUpKey = new JsonString(L"popUp");
    pJsonObject->Add(pPopUpKey, toJson(getPPopUp(), "Boolean", ""));

    JsonString *pSmsKey = new JsonString(L"sms");
    pJsonObject->Add(pSmsKey, toJson(getPSms(), "Boolean", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "Boolean", ""));

    JsonString *pNotificationBarKey = new JsonString(L"notificationBar");
    pJsonObject->Add(pNotificationBarKey, toJson(getPNotificationBar(), "Boolean", ""));

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
SamiTrackingReminderNotification::getPId() {
    return pId;
}
void
SamiTrackingReminderNotification::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiTrackingReminderNotification::getPTrackingReminderId() {
    return pTrackingReminderId;
}
void
SamiTrackingReminderNotification::setPTrackingReminderId(Integer* pTrackingReminderId) {
    this->pTrackingReminderId = pTrackingReminderId;
}

String*
SamiTrackingReminderNotification::getPClientId() {
    return pClientId;
}
void
SamiTrackingReminderNotification::setPClientId(String* pClientId) {
    this->pClientId = pClientId;
}

Integer*
SamiTrackingReminderNotification::getPUserId() {
    return pUserId;
}
void
SamiTrackingReminderNotification::setPUserId(Integer* pUserId) {
    this->pUserId = pUserId;
}

Integer*
SamiTrackingReminderNotification::getPVariableId() {
    return pVariableId;
}
void
SamiTrackingReminderNotification::setPVariableId(Integer* pVariableId) {
    this->pVariableId = pVariableId;
}

DateTime*
SamiTrackingReminderNotification::getPPendingReminderTime() {
    return pPendingReminderTime;
}
void
SamiTrackingReminderNotification::setPPendingReminderTime(DateTime* pPendingReminderTime) {
    this->pPendingReminderTime = pPendingReminderTime;
}

Float*
SamiTrackingReminderNotification::getPDefaultValue() {
    return pDefaultValue;
}
void
SamiTrackingReminderNotification::setPDefaultValue(Float* pDefaultValue) {
    this->pDefaultValue = pDefaultValue;
}

String*
SamiTrackingReminderNotification::getPReminderSound() {
    return pReminderSound;
}
void
SamiTrackingReminderNotification::setPReminderSound(String* pReminderSound) {
    this->pReminderSound = pReminderSound;
}

Boolean*
SamiTrackingReminderNotification::getPPopUp() {
    return pPopUp;
}
void
SamiTrackingReminderNotification::setPPopUp(Boolean* pPopUp) {
    this->pPopUp = pPopUp;
}

Boolean*
SamiTrackingReminderNotification::getPSms() {
    return pSms;
}
void
SamiTrackingReminderNotification::setPSms(Boolean* pSms) {
    this->pSms = pSms;
}

Boolean*
SamiTrackingReminderNotification::getPEmail() {
    return pEmail;
}
void
SamiTrackingReminderNotification::setPEmail(Boolean* pEmail) {
    this->pEmail = pEmail;
}

Boolean*
SamiTrackingReminderNotification::getPNotificationBar() {
    return pNotificationBar;
}
void
SamiTrackingReminderNotification::setPNotificationBar(Boolean* pNotificationBar) {
    this->pNotificationBar = pNotificationBar;
}

DateTime*
SamiTrackingReminderNotification::getPUpdatedAt() {
    return pUpdatedAt;
}
void
SamiTrackingReminderNotification::setPUpdatedAt(DateTime* pUpdatedAt) {
    this->pUpdatedAt = pUpdatedAt;
}

String*
SamiTrackingReminderNotification::getPVariableName() {
    return pVariableName;
}
void
SamiTrackingReminderNotification::setPVariableName(String* pVariableName) {
    this->pVariableName = pVariableName;
}

String*
SamiTrackingReminderNotification::getPVariableCategoryName() {
    return pVariableCategoryName;
}
void
SamiTrackingReminderNotification::setPVariableCategoryName(String* pVariableCategoryName) {
    this->pVariableCategoryName = pVariableCategoryName;
}

String*
SamiTrackingReminderNotification::getPAbbreviatedUnitName() {
    return pAbbreviatedUnitName;
}
void
SamiTrackingReminderNotification::setPAbbreviatedUnitName(String* pAbbreviatedUnitName) {
    this->pAbbreviatedUnitName = pAbbreviatedUnitName;
}

String*
SamiTrackingReminderNotification::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiTrackingReminderNotification::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}



} /* namespace Swagger */



#include "SamiUserVariables.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserVariables::SamiUserVariables() {
    init();
}

SamiUserVariables::~SamiUserVariables() {
    this->cleanup();
}

void
SamiUserVariables::init() {
    pUser = null;
    pVariable = null;
    pDurationOfAction = null;
    pFillingValue = null;
    pJoinWith = null;
    pMaximumAllowedValue = null;
    pMinimumAllowedValue = null;
    pName = null;
    pOnsetDelay = null;
    pUnit = null;
    
}

void
SamiUserVariables::cleanup() {
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
    if(pVariable != null) {
        
        delete pVariable;
        pVariable = null;
    }
    if(pDurationOfAction != null) {
        
        delete pDurationOfAction;
        pDurationOfAction = null;
    }
    if(pFillingValue != null) {
        
        delete pFillingValue;
        pFillingValue = null;
    }
    if(pJoinWith != null) {
        
        delete pJoinWith;
        pJoinWith = null;
    }
    if(pMaximumAllowedValue != null) {
        
        delete pMaximumAllowedValue;
        pMaximumAllowedValue = null;
    }
    if(pMinimumAllowedValue != null) {
        
        delete pMinimumAllowedValue;
        pMinimumAllowedValue = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pOnsetDelay != null) {
        
        delete pOnsetDelay;
        pOnsetDelay = null;
    }
    if(pUnit != null) {
        
        delete pUnit;
        pUnit = null;
    }
    
}


SamiUserVariables*
SamiUserVariables::fromJson(String* json) {
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
SamiUserVariables::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = null;
            jsonToValue(pUser, pUserVal, L"Integer", L"Integer");
        }
        delete pUserKey;
        JsonString* pVariableKey = new JsonString(L"variable");
        IJsonValue* pVariableVal = null;
        pJsonObject->GetValue(pVariableKey, pVariableVal);
        if(pVariableVal != null) {
            
            pVariable = new String();
            jsonToValue(pVariable, pVariableVal, L"String", L"String");
        }
        delete pVariableKey;
        JsonString* pDurationOfActionKey = new JsonString(L"durationOfAction");
        IJsonValue* pDurationOfActionVal = null;
        pJsonObject->GetValue(pDurationOfActionKey, pDurationOfActionVal);
        if(pDurationOfActionVal != null) {
            
            pDurationOfAction = null;
            jsonToValue(pDurationOfAction, pDurationOfActionVal, L"Integer", L"Integer");
        }
        delete pDurationOfActionKey;
        JsonString* pFillingValueKey = new JsonString(L"fillingValue");
        IJsonValue* pFillingValueVal = null;
        pJsonObject->GetValue(pFillingValueKey, pFillingValueVal);
        if(pFillingValueVal != null) {
            
            pFillingValue = null;
            jsonToValue(pFillingValue, pFillingValueVal, L"Integer", L"Integer");
        }
        delete pFillingValueKey;
        JsonString* pJoinWithKey = new JsonString(L"joinWith");
        IJsonValue* pJoinWithVal = null;
        pJsonObject->GetValue(pJoinWithKey, pJoinWithVal);
        if(pJoinWithVal != null) {
            
            pJoinWith = new String();
            jsonToValue(pJoinWith, pJoinWithVal, L"String", L"String");
        }
        delete pJoinWithKey;
        JsonString* pMaximumAllowedValueKey = new JsonString(L"maximumAllowedValue");
        IJsonValue* pMaximumAllowedValueVal = null;
        pJsonObject->GetValue(pMaximumAllowedValueKey, pMaximumAllowedValueVal);
        if(pMaximumAllowedValueVal != null) {
            
            pMaximumAllowedValue = new Float();
            jsonToValue(pMaximumAllowedValue, pMaximumAllowedValueVal, L"Float", L"Float");
        }
        delete pMaximumAllowedValueKey;
        JsonString* pMinimumAllowedValueKey = new JsonString(L"minimumAllowedValue");
        IJsonValue* pMinimumAllowedValueVal = null;
        pJsonObject->GetValue(pMinimumAllowedValueKey, pMinimumAllowedValueVal);
        if(pMinimumAllowedValueVal != null) {
            
            pMinimumAllowedValue = new Float();
            jsonToValue(pMinimumAllowedValue, pMinimumAllowedValueVal, L"Float", L"Float");
        }
        delete pMinimumAllowedValueKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pOnsetDelayKey = new JsonString(L"onsetDelay");
        IJsonValue* pOnsetDelayVal = null;
        pJsonObject->GetValue(pOnsetDelayKey, pOnsetDelayVal);
        if(pOnsetDelayVal != null) {
            
            pOnsetDelay = null;
            jsonToValue(pOnsetDelay, pOnsetDelayVal, L"Integer", L"Integer");
        }
        delete pOnsetDelayKey;
        JsonString* pUnitKey = new JsonString(L"unit");
        IJsonValue* pUnitVal = null;
        pJsonObject->GetValue(pUnitKey, pUnitVal);
        if(pUnitVal != null) {
            
            pUnit = new String();
            jsonToValue(pUnit, pUnitVal, L"String", L"String");
        }
        delete pUnitKey;
        
    }
}

SamiUserVariables::SamiUserVariables(String* json) {
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
SamiUserVariables::asJson ()
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
SamiUserVariables::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "Integer", ""));

    
    JsonString *pVariableKey = new JsonString(L"variable");
    pJsonObject->Add(pVariableKey, toJson(getPVariable(), "String", ""));

    
    JsonString *pDurationOfActionKey = new JsonString(L"durationOfAction");
    pJsonObject->Add(pDurationOfActionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pFillingValueKey = new JsonString(L"fillingValue");
    pJsonObject->Add(pFillingValueKey, toJson(getPFillingValue(), "Integer", ""));

    
    JsonString *pJoinWithKey = new JsonString(L"joinWith");
    pJsonObject->Add(pJoinWithKey, toJson(getPJoinWith(), "String", ""));

    
    JsonString *pMaximumAllowedValueKey = new JsonString(L"maximumAllowedValue");
    pJsonObject->Add(pMaximumAllowedValueKey, toJson(getPMaximumAllowedValue(), "Float", ""));

    
    JsonString *pMinimumAllowedValueKey = new JsonString(L"minimumAllowedValue");
    pJsonObject->Add(pMinimumAllowedValueKey, toJson(getPMinimumAllowedValue(), "Float", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pOnsetDelayKey = new JsonString(L"onsetDelay");
    pJsonObject->Add(pOnsetDelayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pUnitKey = new JsonString(L"unit");
    pJsonObject->Add(pUnitKey, toJson(getPUnit(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiUserVariables::getPUser() {
    return pUser;
}
void
SamiUserVariables::setPUser(Integer* pUser) {
    this->pUser = pUser;
}

String*
SamiUserVariables::getPVariable() {
    return pVariable;
}
void
SamiUserVariables::setPVariable(String* pVariable) {
    this->pVariable = pVariable;
}

Integer*
SamiUserVariables::getPDurationOfAction() {
    return pDurationOfAction;
}
void
SamiUserVariables::setPDurationOfAction(Integer* pDurationOfAction) {
    this->pDurationOfAction = pDurationOfAction;
}

Integer*
SamiUserVariables::getPFillingValue() {
    return pFillingValue;
}
void
SamiUserVariables::setPFillingValue(Integer* pFillingValue) {
    this->pFillingValue = pFillingValue;
}

String*
SamiUserVariables::getPJoinWith() {
    return pJoinWith;
}
void
SamiUserVariables::setPJoinWith(String* pJoinWith) {
    this->pJoinWith = pJoinWith;
}

Float*
SamiUserVariables::getPMaximumAllowedValue() {
    return pMaximumAllowedValue;
}
void
SamiUserVariables::setPMaximumAllowedValue(Float* pMaximumAllowedValue) {
    this->pMaximumAllowedValue = pMaximumAllowedValue;
}

Float*
SamiUserVariables::getPMinimumAllowedValue() {
    return pMinimumAllowedValue;
}
void
SamiUserVariables::setPMinimumAllowedValue(Float* pMinimumAllowedValue) {
    this->pMinimumAllowedValue = pMinimumAllowedValue;
}

String*
SamiUserVariables::getPName() {
    return pName;
}
void
SamiUserVariables::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiUserVariables::getPOnsetDelay() {
    return pOnsetDelay;
}
void
SamiUserVariables::setPOnsetDelay(Integer* pOnsetDelay) {
    this->pOnsetDelay = pOnsetDelay;
}

String*
SamiUserVariables::getPUnit() {
    return pUnit;
}
void
SamiUserVariables::setPUnit(String* pUnit) {
    this->pUnit = pUnit;
}



} /* namespace Swagger */


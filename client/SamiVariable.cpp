
#include "SamiVariable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariable::SamiVariable() {
    init();
}

SamiVariable::~SamiVariable() {
    this->cleanup();
}

void
SamiVariable::init() {
    pName = null;
    pOriginalName = null;
    pCategory = null;
    pUnit = null;
    pSources = null;
    pMinimumValue = null;
    pMaximumValue = null;
    pCombinationOperation = null;
    pFillingValue = null;
    
}

void
SamiVariable::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pOriginalName != null) {
        
        delete pOriginalName;
        pOriginalName = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pUnit != null) {
        
        delete pUnit;
        pUnit = null;
    }
    if(pSources != null) {
        
        delete pSources;
        pSources = null;
    }
    if(pMinimumValue != null) {
        
        delete pMinimumValue;
        pMinimumValue = null;
    }
    if(pMaximumValue != null) {
        
        delete pMaximumValue;
        pMaximumValue = null;
    }
    if(pCombinationOperation != null) {
        
        delete pCombinationOperation;
        pCombinationOperation = null;
    }
    if(pFillingValue != null) {
        
        delete pFillingValue;
        pFillingValue = null;
    }
    
}


SamiVariable*
SamiVariable::fromJson(String* json) {
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
SamiVariable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pOriginalNameKey = new JsonString(L"originalName");
        IJsonValue* pOriginalNameVal = null;
        pJsonObject->GetValue(pOriginalNameKey, pOriginalNameVal);
        if(pOriginalNameVal != null) {
            
            pOriginalName = new String();
            jsonToValue(pOriginalName, pOriginalNameVal, L"String", L"String");
        }
        delete pOriginalNameKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pUnitKey = new JsonString(L"unit");
        IJsonValue* pUnitVal = null;
        pJsonObject->GetValue(pUnitKey, pUnitVal);
        if(pUnitVal != null) {
            
            pUnit = new String();
            jsonToValue(pUnit, pUnitVal, L"String", L"String");
        }
        delete pUnitKey;
        JsonString* pSourcesKey = new JsonString(L"sources");
        IJsonValue* pSourcesVal = null;
        pJsonObject->GetValue(pSourcesKey, pSourcesVal);
        if(pSourcesVal != null) {
            
            pSources = new String();
            jsonToValue(pSources, pSourcesVal, L"String", L"String");
        }
        delete pSourcesKey;
        JsonString* pMinimumValueKey = new JsonString(L"minimumValue");
        IJsonValue* pMinimumValueVal = null;
        pJsonObject->GetValue(pMinimumValueKey, pMinimumValueVal);
        if(pMinimumValueVal != null) {
            
            pMinimumValue = new Double();
            jsonToValue(pMinimumValue, pMinimumValueVal, L"Double", L"Double");
        }
        delete pMinimumValueKey;
        JsonString* pMaximumValueKey = new JsonString(L"maximumValue");
        IJsonValue* pMaximumValueVal = null;
        pJsonObject->GetValue(pMaximumValueKey, pMaximumValueVal);
        if(pMaximumValueVal != null) {
            
            pMaximumValue = new Double();
            jsonToValue(pMaximumValue, pMaximumValueVal, L"Double", L"Double");
        }
        delete pMaximumValueKey;
        JsonString* pCombinationOperationKey = new JsonString(L"combinationOperation");
        IJsonValue* pCombinationOperationVal = null;
        pJsonObject->GetValue(pCombinationOperationKey, pCombinationOperationVal);
        if(pCombinationOperationVal != null) {
            
            pCombinationOperation = new String();
            jsonToValue(pCombinationOperation, pCombinationOperationVal, L"String", L"String");
        }
        delete pCombinationOperationKey;
        JsonString* pFillingValueKey = new JsonString(L"fillingValue");
        IJsonValue* pFillingValueVal = null;
        pJsonObject->GetValue(pFillingValueKey, pFillingValueVal);
        if(pFillingValueVal != null) {
            
            pFillingValue = new Double();
            jsonToValue(pFillingValue, pFillingValueVal, L"Double", L"Double");
        }
        delete pFillingValueKey;
        
    }
}

SamiVariable::SamiVariable(String* json) {
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
SamiVariable::asJson ()
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
SamiVariable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pOriginalNameKey = new JsonString(L"originalName");
    pJsonObject->Add(pOriginalNameKey, toJson(getPOriginalName(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    
    JsonString *pUnitKey = new JsonString(L"unit");
    pJsonObject->Add(pUnitKey, toJson(getPUnit(), "String", ""));

    
    JsonString *pSourcesKey = new JsonString(L"sources");
    pJsonObject->Add(pSourcesKey, toJson(getPSources(), "String", ""));

    
    JsonString *pMinimumValueKey = new JsonString(L"minimumValue");
    pJsonObject->Add(pMinimumValueKey, toJson(getPMinimumValue(), "Double", ""));

    
    JsonString *pMaximumValueKey = new JsonString(L"maximumValue");
    pJsonObject->Add(pMaximumValueKey, toJson(getPMaximumValue(), "Double", ""));

    
    JsonString *pCombinationOperationKey = new JsonString(L"combinationOperation");
    pJsonObject->Add(pCombinationOperationKey, toJson(getPCombinationOperation(), "String", ""));

    
    JsonString *pFillingValueKey = new JsonString(L"fillingValue");
    pJsonObject->Add(pFillingValueKey, toJson(getPFillingValue(), "Double", ""));

    
    return pJsonObject;
}

String*
SamiVariable::getPName() {
    return pName;
}
void
SamiVariable::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiVariable::getPOriginalName() {
    return pOriginalName;
}
void
SamiVariable::setPOriginalName(String* pOriginalName) {
    this->pOriginalName = pOriginalName;
}

String*
SamiVariable::getPCategory() {
    return pCategory;
}
void
SamiVariable::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

String*
SamiVariable::getPUnit() {
    return pUnit;
}
void
SamiVariable::setPUnit(String* pUnit) {
    this->pUnit = pUnit;
}

String*
SamiVariable::getPSources() {
    return pSources;
}
void
SamiVariable::setPSources(String* pSources) {
    this->pSources = pSources;
}

Double*
SamiVariable::getPMinimumValue() {
    return pMinimumValue;
}
void
SamiVariable::setPMinimumValue(Double* pMinimumValue) {
    this->pMinimumValue = pMinimumValue;
}

Double*
SamiVariable::getPMaximumValue() {
    return pMaximumValue;
}
void
SamiVariable::setPMaximumValue(Double* pMaximumValue) {
    this->pMaximumValue = pMaximumValue;
}

String*
SamiVariable::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiVariable::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}

Double*
SamiVariable::getPFillingValue() {
    return pFillingValue;
}
void
SamiVariable::setPFillingValue(Double* pFillingValue) {
    this->pFillingValue = pFillingValue;
}



} /* namespace Swagger */


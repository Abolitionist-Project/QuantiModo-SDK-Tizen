
#include "SamiUnit.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUnit::SamiUnit() {
    init();
}

SamiUnit::~SamiUnit() {
    this->cleanup();
}

void
SamiUnit::init() {
    pName = null;
    pAbbreviatedName = null;
    pCategory = null;
    pMinimum = null;
    pMaximum = null;
    pConversionSteps = null;
    
}

void
SamiUnit::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pAbbreviatedName != null) {
        
        delete pAbbreviatedName;
        pAbbreviatedName = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pMinimum != null) {
        
        delete pMinimum;
        pMinimum = null;
    }
    if(pMaximum != null) {
        
        delete pMaximum;
        pMaximum = null;
    }
    if(pConversionSteps != null) {
        pConversionSteps->RemoveAll(true);
        delete pConversionSteps;
        pConversionSteps = null;
    }
    
}


SamiUnit*
SamiUnit::fromJson(String* json) {
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
SamiUnit::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pAbbreviatedNameKey = new JsonString(L"abbreviatedName");
        IJsonValue* pAbbreviatedNameVal = null;
        pJsonObject->GetValue(pAbbreviatedNameKey, pAbbreviatedNameVal);
        if(pAbbreviatedNameVal != null) {
            
            pAbbreviatedName = new String();
            jsonToValue(pAbbreviatedName, pAbbreviatedNameVal, L"String", L"String");
        }
        delete pAbbreviatedNameKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pMinimumKey = new JsonString(L"minimum");
        IJsonValue* pMinimumVal = null;
        pJsonObject->GetValue(pMinimumKey, pMinimumVal);
        if(pMinimumVal != null) {
            
            pMinimum = new Double();
            jsonToValue(pMinimum, pMinimumVal, L"Double", L"Double");
        }
        delete pMinimumKey;
        JsonString* pMaximumKey = new JsonString(L"maximum");
        IJsonValue* pMaximumVal = null;
        pJsonObject->GetValue(pMaximumKey, pMaximumVal);
        if(pMaximumVal != null) {
            
            pMaximum = new Double();
            jsonToValue(pMaximum, pMaximumVal, L"Double", L"Double");
        }
        delete pMaximumKey;
        JsonString* pConversionStepsKey = new JsonString(L"conversionSteps");
        IJsonValue* pConversionStepsVal = null;
        pJsonObject->GetValue(pConversionStepsKey, pConversionStepsVal);
        if(pConversionStepsVal != null) {
            pConversionSteps = new ArrayList();
            
            jsonToValue(pConversionSteps, pConversionStepsVal, L"IList", L"SamiConversionStep");
        }
        delete pConversionStepsKey;
        
    }
}

SamiUnit::SamiUnit(String* json) {
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
SamiUnit::asJson ()
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
SamiUnit::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pAbbreviatedNameKey = new JsonString(L"abbreviatedName");
    pJsonObject->Add(pAbbreviatedNameKey, toJson(getPAbbreviatedName(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    
    JsonString *pMinimumKey = new JsonString(L"minimum");
    pJsonObject->Add(pMinimumKey, toJson(getPMinimum(), "Double", ""));

    
    JsonString *pMaximumKey = new JsonString(L"maximum");
    pJsonObject->Add(pMaximumKey, toJson(getPMaximum(), "Double", ""));

    
    JsonString *pConversionStepsKey = new JsonString(L"conversionSteps");
    pJsonObject->Add(pConversionStepsKey, toJson(getPConversionSteps(), "SamiConversionStep", "array"));

    
    return pJsonObject;
}

String*
SamiUnit::getPName() {
    return pName;
}
void
SamiUnit::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiUnit::getPAbbreviatedName() {
    return pAbbreviatedName;
}
void
SamiUnit::setPAbbreviatedName(String* pAbbreviatedName) {
    this->pAbbreviatedName = pAbbreviatedName;
}

String*
SamiUnit::getPCategory() {
    return pCategory;
}
void
SamiUnit::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

Double*
SamiUnit::getPMinimum() {
    return pMinimum;
}
void
SamiUnit::setPMinimum(Double* pMinimum) {
    this->pMinimum = pMinimum;
}

Double*
SamiUnit::getPMaximum() {
    return pMaximum;
}
void
SamiUnit::setPMaximum(Double* pMaximum) {
    this->pMaximum = pMaximum;
}

IList*
SamiUnit::getPConversionSteps() {
    return pConversionSteps;
}
void
SamiUnit::setPConversionSteps(IList* pConversionSteps) {
    this->pConversionSteps = pConversionSteps;
}



} /* namespace Swagger */


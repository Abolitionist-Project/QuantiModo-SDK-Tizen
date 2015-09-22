
#include "SamiMeasurementRange.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurementRange::SamiMeasurementRange() {
    init();
}

SamiMeasurementRange::~SamiMeasurementRange() {
    this->cleanup();
}

void
SamiMeasurementRange::init() {
    pLowerLimit = null;
    pUpperLimit = null;
    
}

void
SamiMeasurementRange::cleanup() {
    if(pLowerLimit != null) {
        
        delete pLowerLimit;
        pLowerLimit = null;
    }
    if(pUpperLimit != null) {
        
        delete pUpperLimit;
        pUpperLimit = null;
    }
    
}


SamiMeasurementRange*
SamiMeasurementRange::fromJson(String* json) {
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
SamiMeasurementRange::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pLowerLimitKey = new JsonString(L"lowerLimit");
        IJsonValue* pLowerLimitVal = null;
        pJsonObject->GetValue(pLowerLimitKey, pLowerLimitVal);
        if(pLowerLimitVal != null) {
            
            pLowerLimit = null;
            jsonToValue(pLowerLimit, pLowerLimitVal, L"Integer", L"Integer");
        }
        delete pLowerLimitKey;
        JsonString* pUpperLimitKey = new JsonString(L"upperLimit");
        IJsonValue* pUpperLimitVal = null;
        pJsonObject->GetValue(pUpperLimitKey, pUpperLimitVal);
        if(pUpperLimitVal != null) {
            
            pUpperLimit = null;
            jsonToValue(pUpperLimit, pUpperLimitVal, L"Integer", L"Integer");
        }
        delete pUpperLimitKey;
        
    }
}

SamiMeasurementRange::SamiMeasurementRange(String* json) {
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
SamiMeasurementRange::asJson ()
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
SamiMeasurementRange::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pLowerLimitKey = new JsonString(L"lowerLimit");
    pJsonObject->Add(pLowerLimitKey, toJson(getPLowerLimit(), "Integer", ""));

    
    JsonString *pUpperLimitKey = new JsonString(L"upperLimit");
    pJsonObject->Add(pUpperLimitKey, toJson(getPUpperLimit(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiMeasurementRange::getPLowerLimit() {
    return pLowerLimit;
}
void
SamiMeasurementRange::setPLowerLimit(Integer* pLowerLimit) {
    this->pLowerLimit = pLowerLimit;
}

Integer*
SamiMeasurementRange::getPUpperLimit() {
    return pUpperLimit;
}
void
SamiMeasurementRange::setPUpperLimit(Integer* pUpperLimit) {
    this->pUpperLimit = pUpperLimit;
}



} /* namespace Swagger */


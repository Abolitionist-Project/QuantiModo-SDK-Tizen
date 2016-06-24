
#include "SamiMeasurementDelete.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurementDelete::SamiMeasurementDelete() {
    init();
}

SamiMeasurementDelete::~SamiMeasurementDelete() {
    this->cleanup();
}

void
SamiMeasurementDelete::init() {
    pVariableId = null;
pStartTime = null;
}

void
SamiMeasurementDelete::cleanup() {
    if(pVariableId != null) {
        
        delete pVariableId;
        pVariableId = null;
    }
if(pStartTime != null) {
        
        delete pStartTime;
        pStartTime = null;
    }
}


SamiMeasurementDelete*
SamiMeasurementDelete::fromJson(String* json) {
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
SamiMeasurementDelete::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pVariableIdKey = new JsonString(L"variableId");
        IJsonValue* pVariableIdVal = null;
        pJsonObject->GetValue(pVariableIdKey, pVariableIdVal);
        if(pVariableIdVal != null) {
            
            pVariableId = null;
            jsonToValue(pVariableId, pVariableIdVal, L"Integer", L"Integer");
        }
        delete pVariableIdKey;
JsonString* pStartTimeKey = new JsonString(L"startTime");
        IJsonValue* pStartTimeVal = null;
        pJsonObject->GetValue(pStartTimeKey, pStartTimeVal);
        if(pStartTimeVal != null) {
            
            pStartTime = null;
            jsonToValue(pStartTime, pStartTimeVal, L"Integer", L"Integer");
        }
        delete pStartTimeKey;
    }
}

SamiMeasurementDelete::SamiMeasurementDelete(String* json) {
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
SamiMeasurementDelete::asJson ()
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
SamiMeasurementDelete::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pVariableIdKey = new JsonString(L"variableId");
    pJsonObject->Add(pVariableIdKey, toJson(getPVariableId(), "Integer", ""));

    JsonString *pStartTimeKey = new JsonString(L"startTime");
    pJsonObject->Add(pStartTimeKey, toJson(getPStartTime(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiMeasurementDelete::getPVariableId() {
    return pVariableId;
}
void
SamiMeasurementDelete::setPVariableId(Integer* pVariableId) {
    this->pVariableId = pVariableId;
}

Integer*
SamiMeasurementDelete::getPStartTime() {
    return pStartTime;
}
void
SamiMeasurementDelete::setPStartTime(Integer* pStartTime) {
    this->pStartTime = pStartTime;
}



} /* namespace Swagger */


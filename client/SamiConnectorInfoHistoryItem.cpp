
#include "SamiConnectorInfoHistoryItem.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnectorInfoHistoryItem::SamiConnectorInfoHistoryItem() {
    init();
}

SamiConnectorInfoHistoryItem::~SamiConnectorInfoHistoryItem() {
    this->cleanup();
}

void
SamiConnectorInfoHistoryItem::init() {
    pNumberOfMeasurements = null;
pSuccess = null;
pMessage = null;
pCreatedAt = null;
}

void
SamiConnectorInfoHistoryItem::cleanup() {
    if(pNumberOfMeasurements != null) {
        
        delete pNumberOfMeasurements;
        pNumberOfMeasurements = null;
    }
if(pSuccess != null) {
        
        delete pSuccess;
        pSuccess = null;
    }
if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
if(pCreatedAt != null) {
        
        delete pCreatedAt;
        pCreatedAt = null;
    }
}


SamiConnectorInfoHistoryItem*
SamiConnectorInfoHistoryItem::fromJson(String* json) {
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
SamiConnectorInfoHistoryItem::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNumberOfMeasurementsKey = new JsonString(L"numberOfMeasurements");
        IJsonValue* pNumberOfMeasurementsVal = null;
        pJsonObject->GetValue(pNumberOfMeasurementsKey, pNumberOfMeasurementsVal);
        if(pNumberOfMeasurementsVal != null) {
            
            pNumberOfMeasurements = null;
            jsonToValue(pNumberOfMeasurements, pNumberOfMeasurementsVal, L"Integer", L"Integer");
        }
        delete pNumberOfMeasurementsKey;
JsonString* pSuccessKey = new JsonString(L"success");
        IJsonValue* pSuccessVal = null;
        pJsonObject->GetValue(pSuccessKey, pSuccessVal);
        if(pSuccessVal != null) {
            
            pSuccess = new Boolean(false);
            jsonToValue(pSuccess, pSuccessVal, L"Boolean", L"Boolean");
        }
        delete pSuccessKey;
JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
JsonString* pCreatedAtKey = new JsonString(L"createdAt");
        IJsonValue* pCreatedAtVal = null;
        pJsonObject->GetValue(pCreatedAtKey, pCreatedAtVal);
        if(pCreatedAtVal != null) {
            
            pCreatedAt = new String();
            jsonToValue(pCreatedAt, pCreatedAtVal, L"String", L"String");
        }
        delete pCreatedAtKey;
    }
}

SamiConnectorInfoHistoryItem::SamiConnectorInfoHistoryItem(String* json) {
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
SamiConnectorInfoHistoryItem::asJson ()
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
SamiConnectorInfoHistoryItem::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNumberOfMeasurementsKey = new JsonString(L"numberOfMeasurements");
    pJsonObject->Add(pNumberOfMeasurementsKey, toJson(getPNumberOfMeasurements(), "Integer", ""));

    JsonString *pSuccessKey = new JsonString(L"success");
    pJsonObject->Add(pSuccessKey, toJson(getPSuccess(), "Boolean", ""));

    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    JsonString *pCreatedAtKey = new JsonString(L"createdAt");
    pJsonObject->Add(pCreatedAtKey, toJson(getPCreatedAt(), "String", ""));

    return pJsonObject;
}

Integer*
SamiConnectorInfoHistoryItem::getPNumberOfMeasurements() {
    return pNumberOfMeasurements;
}
void
SamiConnectorInfoHistoryItem::setPNumberOfMeasurements(Integer* pNumberOfMeasurements) {
    this->pNumberOfMeasurements = pNumberOfMeasurements;
}

Boolean*
SamiConnectorInfoHistoryItem::getPSuccess() {
    return pSuccess;
}
void
SamiConnectorInfoHistoryItem::setPSuccess(Boolean* pSuccess) {
    this->pSuccess = pSuccess;
}

String*
SamiConnectorInfoHistoryItem::getPMessage() {
    return pMessage;
}
void
SamiConnectorInfoHistoryItem::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

String*
SamiConnectorInfoHistoryItem::getPCreatedAt() {
    return pCreatedAt;
}
void
SamiConnectorInfoHistoryItem::setPCreatedAt(String* pCreatedAt) {
    this->pCreatedAt = pCreatedAt;
}



} /* namespace Swagger */


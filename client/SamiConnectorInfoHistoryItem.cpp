
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
    pNumber_of_measurements = null;
    pSuccess = null;
    pMessage = null;
    pCreated_at = null;
    
}

void
SamiConnectorInfoHistoryItem::cleanup() {
    if(pNumber_of_measurements != null) {
        
        delete pNumber_of_measurements;
        pNumber_of_measurements = null;
    }
    if(pSuccess != null) {
        
        delete pSuccess;
        pSuccess = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
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
        JsonString* pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
        IJsonValue* pNumber_of_measurementsVal = null;
        pJsonObject->GetValue(pNumber_of_measurementsKey, pNumber_of_measurementsVal);
        if(pNumber_of_measurementsVal != null) {
            
            pNumber_of_measurements = null;
            jsonToValue(pNumber_of_measurements, pNumber_of_measurementsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_measurementsKey;
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
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new String();
            jsonToValue(pCreated_at, pCreated_atVal, L"String", L"String");
        }
        delete pCreated_atKey;
        
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

    
    JsonString *pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
    pJsonObject->Add(pNumber_of_measurementsKey, toJson(getPNumberOfMeasurements(), "Integer", ""));

    
    JsonString *pSuccessKey = new JsonString(L"success");
    pJsonObject->Add(pSuccessKey, toJson(getPSuccess(), "Boolean", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiConnectorInfoHistoryItem::getPNumberOfMeasurements() {
    return pNumber_of_measurements;
}
void
SamiConnectorInfoHistoryItem::setPNumberOfMeasurements(Integer* pNumber_of_measurements) {
    this->pNumber_of_measurements = pNumber_of_measurements;
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
    return pCreated_at;
}
void
SamiConnectorInfoHistoryItem::setPCreatedAt(String* pCreated_at) {
    this->pCreated_at = pCreated_at;
}



} /* namespace Swagger */


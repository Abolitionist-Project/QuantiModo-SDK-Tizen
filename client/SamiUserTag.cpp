
#include "SamiUserTag.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTag::SamiUserTag() {
    init();
}

SamiUserTag::~SamiUserTag() {
    this->cleanup();
}

void
SamiUserTag::init() {
    pTaggedVariableId = null;
pTagVariableId = null;
pConversionFactor = null;
}

void
SamiUserTag::cleanup() {
    if(pTaggedVariableId != null) {
        
        delete pTaggedVariableId;
        pTaggedVariableId = null;
    }
if(pTagVariableId != null) {
        
        delete pTagVariableId;
        pTagVariableId = null;
    }
if(pConversionFactor != null) {
        
        delete pConversionFactor;
        pConversionFactor = null;
    }
}


SamiUserTag*
SamiUserTag::fromJson(String* json) {
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
SamiUserTag::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTaggedVariableIdKey = new JsonString(L"taggedVariableId");
        IJsonValue* pTaggedVariableIdVal = null;
        pJsonObject->GetValue(pTaggedVariableIdKey, pTaggedVariableIdVal);
        if(pTaggedVariableIdVal != null) {
            
            pTaggedVariableId = null;
            jsonToValue(pTaggedVariableId, pTaggedVariableIdVal, L"Integer", L"Integer");
        }
        delete pTaggedVariableIdKey;
JsonString* pTagVariableIdKey = new JsonString(L"tagVariableId");
        IJsonValue* pTagVariableIdVal = null;
        pJsonObject->GetValue(pTagVariableIdKey, pTagVariableIdVal);
        if(pTagVariableIdVal != null) {
            
            pTagVariableId = null;
            jsonToValue(pTagVariableId, pTagVariableIdVal, L"Integer", L"Integer");
        }
        delete pTagVariableIdKey;
JsonString* pConversionFactorKey = new JsonString(L"conversionFactor");
        IJsonValue* pConversionFactorVal = null;
        pJsonObject->GetValue(pConversionFactorKey, pConversionFactorVal);
        if(pConversionFactorVal != null) {
            
            pConversionFactor = new Long();
            jsonToValue(pConversionFactor, pConversionFactorVal, L"Long", L"Long");
        }
        delete pConversionFactorKey;
    }
}

SamiUserTag::SamiUserTag(String* json) {
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
SamiUserTag::asJson ()
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
SamiUserTag::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pTaggedVariableIdKey = new JsonString(L"taggedVariableId");
    pJsonObject->Add(pTaggedVariableIdKey, toJson(getPTaggedVariableId(), "Integer", ""));

    JsonString *pTagVariableIdKey = new JsonString(L"tagVariableId");
    pJsonObject->Add(pTagVariableIdKey, toJson(getPTagVariableId(), "Integer", ""));

    JsonString *pConversionFactorKey = new JsonString(L"conversionFactor");
    pJsonObject->Add(pConversionFactorKey, toJson(getPConversionFactor(), "Long", ""));

    return pJsonObject;
}

Integer*
SamiUserTag::getPTaggedVariableId() {
    return pTaggedVariableId;
}
void
SamiUserTag::setPTaggedVariableId(Integer* pTaggedVariableId) {
    this->pTaggedVariableId = pTaggedVariableId;
}

Integer*
SamiUserTag::getPTagVariableId() {
    return pTagVariableId;
}
void
SamiUserTag::setPTagVariableId(Integer* pTagVariableId) {
    this->pTagVariableId = pTagVariableId;
}

Long*
SamiUserTag::getPConversionFactor() {
    return pConversionFactor;
}
void
SamiUserTag::setPConversionFactor(Long* pConversionFactor) {
    this->pConversionFactor = pConversionFactor;
}



} /* namespace Swagger */


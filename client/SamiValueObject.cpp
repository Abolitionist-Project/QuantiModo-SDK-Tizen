
#include "SamiValueObject.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiValueObject::SamiValueObject() {
    init();
}

SamiValueObject::~SamiValueObject() {
    this->cleanup();
}

void
SamiValueObject::init() {
    pTimestamp = null;
    pValue = null;
    pNote = null;
    
}

void
SamiValueObject::cleanup() {
    if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    if(pNote != null) {
        
        delete pNote;
        pNote = null;
    }
    
}


SamiValueObject*
SamiValueObject::fromJson(String* json) {
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
SamiValueObject::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new Long();
            jsonToValue(pTimestamp, pTimestampVal, L"Long", L"Long");
        }
        delete pTimestampKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
        JsonString* pNoteKey = new JsonString(L"note");
        IJsonValue* pNoteVal = null;
        pJsonObject->GetValue(pNoteKey, pNoteVal);
        if(pNoteVal != null) {
            
            pNote = new String();
            jsonToValue(pNote, pNoteVal, L"String", L"String");
        }
        delete pNoteKey;
        
    }
}

SamiValueObject::SamiValueObject(String* json) {
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
SamiValueObject::asJson ()
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
SamiValueObject::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "Long", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    
    JsonString *pNoteKey = new JsonString(L"note");
    pJsonObject->Add(pNoteKey, toJson(getPNote(), "String", ""));

    
    return pJsonObject;
}

Long*
SamiValueObject::getPTimestamp() {
    return pTimestamp;
}
void
SamiValueObject::setPTimestamp(Long* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

Double*
SamiValueObject::getPValue() {
    return pValue;
}
void
SamiValueObject::setPValue(Double* pValue) {
    this->pValue = pValue;
}

String*
SamiValueObject::getPNote() {
    return pNote;
}
void
SamiValueObject::setPNote(String* pNote) {
    this->pNote = pNote;
}



} /* namespace Swagger */


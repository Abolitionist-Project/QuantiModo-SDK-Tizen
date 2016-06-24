
#include "SamiVariableUserSource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariableUserSource::SamiVariableUserSource() {
    init();
}

SamiVariableUserSource::~SamiVariableUserSource() {
    this->cleanup();
}

void
SamiVariableUserSource::init() {
    pUser_id = null;
pVariable_id = null;
pSource_id = null;
pTimestamp = null;
pEarliest_measurement_time = null;
pLatest_measurement_time = null;
pCreated_at = null;
pUpdated_at = null;
}

void
SamiVariableUserSource::cleanup() {
    if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
if(pVariable_id != null) {
        
        delete pVariable_id;
        pVariable_id = null;
    }
if(pSource_id != null) {
        
        delete pSource_id;
        pSource_id = null;
    }
if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
if(pEarliest_measurement_time != null) {
        
        delete pEarliest_measurement_time;
        pEarliest_measurement_time = null;
    }
if(pLatest_measurement_time != null) {
        
        delete pLatest_measurement_time;
        pLatest_measurement_time = null;
    }
if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
}


SamiVariableUserSource*
SamiVariableUserSource::fromJson(String* json) {
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
SamiVariableUserSource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
JsonString* pVariable_idKey = new JsonString(L"variable_id");
        IJsonValue* pVariable_idVal = null;
        pJsonObject->GetValue(pVariable_idKey, pVariable_idVal);
        if(pVariable_idVal != null) {
            
            pVariable_id = new Integer();
            jsonToValue(pVariable_id, pVariable_idVal, L"Integer", L"Integer");
        }
        delete pVariable_idKey;
JsonString* pSource_idKey = new JsonString(L"source_id");
        IJsonValue* pSource_idVal = null;
        pJsonObject->GetValue(pSource_idKey, pSource_idVal);
        if(pSource_idVal != null) {
            
            pSource_id = new Integer();
            jsonToValue(pSource_id, pSource_idVal, L"Integer", L"Integer");
        }
        delete pSource_idKey;
JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new Integer();
            jsonToValue(pTimestamp, pTimestampVal, L"Integer", L"Integer");
        }
        delete pTimestampKey;
JsonString* pEarliest_measurement_timeKey = new JsonString(L"earliest_measurement_time");
        IJsonValue* pEarliest_measurement_timeVal = null;
        pJsonObject->GetValue(pEarliest_measurement_timeKey, pEarliest_measurement_timeVal);
        if(pEarliest_measurement_timeVal != null) {
            
            pEarliest_measurement_time = new Integer();
            jsonToValue(pEarliest_measurement_time, pEarliest_measurement_timeVal, L"Integer", L"Integer");
        }
        delete pEarliest_measurement_timeKey;
JsonString* pLatest_measurement_timeKey = new JsonString(L"latest_measurement_time");
        IJsonValue* pLatest_measurement_timeVal = null;
        pJsonObject->GetValue(pLatest_measurement_timeKey, pLatest_measurement_timeVal);
        if(pLatest_measurement_timeVal != null) {
            
            pLatest_measurement_time = new Integer();
            jsonToValue(pLatest_measurement_time, pLatest_measurement_timeVal, L"Integer", L"Integer");
        }
        delete pLatest_measurement_timeKey;
JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new DateTime();
            jsonToValue(pCreated_at, pCreated_atVal, L"DateTime", L"DateTime");
        }
        delete pCreated_atKey;
JsonString* pUpdated_atKey = new JsonString(L"updated_at");
        IJsonValue* pUpdated_atVal = null;
        pJsonObject->GetValue(pUpdated_atKey, pUpdated_atVal);
        if(pUpdated_atVal != null) {
            
            pUpdated_at = new DateTime();
            jsonToValue(pUpdated_at, pUpdated_atVal, L"DateTime", L"DateTime");
        }
        delete pUpdated_atKey;
    }
}

SamiVariableUserSource::SamiVariableUserSource(String* json) {
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
SamiVariableUserSource::asJson ()
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
SamiVariableUserSource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pVariable_idKey = new JsonString(L"variable_id");
    pJsonObject->Add(pVariable_idKey, toJson(getPVariableId(), "Integer", ""));

    JsonString *pSource_idKey = new JsonString(L"source_id");
    pJsonObject->Add(pSource_idKey, toJson(getPSourceId(), "Integer", ""));

    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "Integer", ""));

    JsonString *pEarliest_measurement_timeKey = new JsonString(L"earliest_measurement_time");
    pJsonObject->Add(pEarliest_measurement_timeKey, toJson(getPEarliestMeasurementTime(), "Integer", ""));

    JsonString *pLatest_measurement_timeKey = new JsonString(L"latest_measurement_time");
    pJsonObject->Add(pLatest_measurement_timeKey, toJson(getPLatestMeasurementTime(), "Integer", ""));

    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    return pJsonObject;
}

Integer*
SamiVariableUserSource::getPUserId() {
    return pUser_id;
}
void
SamiVariableUserSource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiVariableUserSource::getPVariableId() {
    return pVariable_id;
}
void
SamiVariableUserSource::setPVariableId(Integer* pVariable_id) {
    this->pVariable_id = pVariable_id;
}

Integer*
SamiVariableUserSource::getPSourceId() {
    return pSource_id;
}
void
SamiVariableUserSource::setPSourceId(Integer* pSource_id) {
    this->pSource_id = pSource_id;
}

Integer*
SamiVariableUserSource::getPTimestamp() {
    return pTimestamp;
}
void
SamiVariableUserSource::setPTimestamp(Integer* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

Integer*
SamiVariableUserSource::getPEarliestMeasurementTime() {
    return pEarliest_measurement_time;
}
void
SamiVariableUserSource::setPEarliestMeasurementTime(Integer* pEarliest_measurement_time) {
    this->pEarliest_measurement_time = pEarliest_measurement_time;
}

Integer*
SamiVariableUserSource::getPLatestMeasurementTime() {
    return pLatest_measurement_time;
}
void
SamiVariableUserSource::setPLatestMeasurementTime(Integer* pLatest_measurement_time) {
    this->pLatest_measurement_time = pLatest_measurement_time;
}

DateTime*
SamiVariableUserSource::getPCreatedAt() {
    return pCreated_at;
}
void
SamiVariableUserSource::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiVariableUserSource::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiVariableUserSource::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */


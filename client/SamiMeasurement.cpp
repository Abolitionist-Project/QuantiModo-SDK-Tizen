
#include "SamiMeasurement.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurement::SamiMeasurement() {
    init();
}

SamiMeasurement::~SamiMeasurement() {
    this->cleanup();
}

void
SamiMeasurement::init() {
    pVariable = null;
    pSource = null;
    pTimestamp = null;
    pStartTime = null;
    pHumanTime = null;
    pValue = null;
    pUnit = null;
    pOriginalValue = null;
    pStoredValue = null;
    pStoredAbbreviatedUnitName = null;
    pOriginalAbbreviatedUnitName = null;
    pAbbreviatedUnitName = null;
    pNote = null;
    
}

void
SamiMeasurement::cleanup() {
    if(pVariable != null) {
        
        delete pVariable;
        pVariable = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
    if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
    if(pStartTime != null) {
        
        delete pStartTime;
        pStartTime = null;
    }
    if(pHumanTime != null) {
        
        delete pHumanTime;
        pHumanTime = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    if(pUnit != null) {
        
        delete pUnit;
        pUnit = null;
    }
    if(pOriginalValue != null) {
        
        delete pOriginalValue;
        pOriginalValue = null;
    }
    if(pStoredValue != null) {
        
        delete pStoredValue;
        pStoredValue = null;
    }
    if(pStoredAbbreviatedUnitName != null) {
        
        delete pStoredAbbreviatedUnitName;
        pStoredAbbreviatedUnitName = null;
    }
    if(pOriginalAbbreviatedUnitName != null) {
        
        delete pOriginalAbbreviatedUnitName;
        pOriginalAbbreviatedUnitName = null;
    }
    if(pAbbreviatedUnitName != null) {
        
        delete pAbbreviatedUnitName;
        pAbbreviatedUnitName = null;
    }
    if(pNote != null) {
        
        delete pNote;
        pNote = null;
    }
    
}


SamiMeasurement*
SamiMeasurement::fromJson(String* json) {
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
SamiMeasurement::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pVariableKey = new JsonString(L"variable");
        IJsonValue* pVariableVal = null;
        pJsonObject->GetValue(pVariableKey, pVariableVal);
        if(pVariableVal != null) {
            
            pVariable = new String();
            jsonToValue(pVariable, pVariableVal, L"String", L"String");
        }
        delete pVariableKey;
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
        JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new Long();
            jsonToValue(pTimestamp, pTimestampVal, L"Long", L"Long");
        }
        delete pTimestampKey;
        JsonString* pStartTimeKey = new JsonString(L"startTime");
        IJsonValue* pStartTimeVal = null;
        pJsonObject->GetValue(pStartTimeKey, pStartTimeVal);
        if(pStartTimeVal != null) {
            
            pStartTime = new String();
            jsonToValue(pStartTime, pStartTimeVal, L"String", L"String");
        }
        delete pStartTimeKey;
        JsonString* pHumanTimeKey = new JsonString(L"humanTime");
        IJsonValue* pHumanTimeVal = null;
        pJsonObject->GetValue(pHumanTimeKey, pHumanTimeVal);
        if(pHumanTimeVal != null) {
            
            pHumanTime = new SamiHumanTime();
            jsonToValue(pHumanTime, pHumanTimeVal, L"SamiHumanTime", L"SamiHumanTime");
        }
        delete pHumanTimeKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
        JsonString* pUnitKey = new JsonString(L"unit");
        IJsonValue* pUnitVal = null;
        pJsonObject->GetValue(pUnitKey, pUnitVal);
        if(pUnitVal != null) {
            
            pUnit = new String();
            jsonToValue(pUnit, pUnitVal, L"String", L"String");
        }
        delete pUnitKey;
        JsonString* pOriginalValueKey = new JsonString(L"originalValue");
        IJsonValue* pOriginalValueVal = null;
        pJsonObject->GetValue(pOriginalValueKey, pOriginalValueVal);
        if(pOriginalValueVal != null) {
            
            pOriginalValue = null;
            jsonToValue(pOriginalValue, pOriginalValueVal, L"Integer", L"Integer");
        }
        delete pOriginalValueKey;
        JsonString* pStoredValueKey = new JsonString(L"storedValue");
        IJsonValue* pStoredValueVal = null;
        pJsonObject->GetValue(pStoredValueKey, pStoredValueVal);
        if(pStoredValueVal != null) {
            
            pStoredValue = new Double();
            jsonToValue(pStoredValue, pStoredValueVal, L"Double", L"Double");
        }
        delete pStoredValueKey;
        JsonString* pStoredAbbreviatedUnitNameKey = new JsonString(L"storedAbbreviatedUnitName");
        IJsonValue* pStoredAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pStoredAbbreviatedUnitNameKey, pStoredAbbreviatedUnitNameVal);
        if(pStoredAbbreviatedUnitNameVal != null) {
            
            pStoredAbbreviatedUnitName = new String();
            jsonToValue(pStoredAbbreviatedUnitName, pStoredAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pStoredAbbreviatedUnitNameKey;
        JsonString* pOriginalAbbreviatedUnitNameKey = new JsonString(L"originalAbbreviatedUnitName");
        IJsonValue* pOriginalAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pOriginalAbbreviatedUnitNameKey, pOriginalAbbreviatedUnitNameVal);
        if(pOriginalAbbreviatedUnitNameVal != null) {
            
            pOriginalAbbreviatedUnitName = new String();
            jsonToValue(pOriginalAbbreviatedUnitName, pOriginalAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pOriginalAbbreviatedUnitNameKey;
        JsonString* pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
        IJsonValue* pAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pAbbreviatedUnitNameKey, pAbbreviatedUnitNameVal);
        if(pAbbreviatedUnitNameVal != null) {
            
            pAbbreviatedUnitName = new String();
            jsonToValue(pAbbreviatedUnitName, pAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pAbbreviatedUnitNameKey;
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

SamiMeasurement::SamiMeasurement(String* json) {
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
SamiMeasurement::asJson ()
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
SamiMeasurement::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pVariableKey = new JsonString(L"variable");
    pJsonObject->Add(pVariableKey, toJson(getPVariable(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    
    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "Long", ""));

    
    JsonString *pStartTimeKey = new JsonString(L"startTime");
    pJsonObject->Add(pStartTimeKey, toJson(getPStartTime(), "String", ""));

    
    JsonString *pHumanTimeKey = new JsonString(L"humanTime");
    pJsonObject->Add(pHumanTimeKey, toJson(getPHumanTime(), "SamiHumanTime", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    
    JsonString *pUnitKey = new JsonString(L"unit");
    pJsonObject->Add(pUnitKey, toJson(getPUnit(), "String", ""));

    
    JsonString *pOriginalValueKey = new JsonString(L"originalValue");
    pJsonObject->Add(pOriginalValueKey, toJson(getPOriginalValue(), "Integer", ""));

    
    JsonString *pStoredValueKey = new JsonString(L"storedValue");
    pJsonObject->Add(pStoredValueKey, toJson(getPStoredValue(), "Double", ""));

    
    JsonString *pStoredAbbreviatedUnitNameKey = new JsonString(L"storedAbbreviatedUnitName");
    pJsonObject->Add(pStoredAbbreviatedUnitNameKey, toJson(getPStoredAbbreviatedUnitName(), "String", ""));

    
    JsonString *pOriginalAbbreviatedUnitNameKey = new JsonString(L"originalAbbreviatedUnitName");
    pJsonObject->Add(pOriginalAbbreviatedUnitNameKey, toJson(getPOriginalAbbreviatedUnitName(), "String", ""));

    
    JsonString *pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
    pJsonObject->Add(pAbbreviatedUnitNameKey, toJson(getPAbbreviatedUnitName(), "String", ""));

    
    JsonString *pNoteKey = new JsonString(L"note");
    pJsonObject->Add(pNoteKey, toJson(getPNote(), "String", ""));

    
    return pJsonObject;
}

String*
SamiMeasurement::getPVariable() {
    return pVariable;
}
void
SamiMeasurement::setPVariable(String* pVariable) {
    this->pVariable = pVariable;
}

String*
SamiMeasurement::getPSource() {
    return pSource;
}
void
SamiMeasurement::setPSource(String* pSource) {
    this->pSource = pSource;
}

Long*
SamiMeasurement::getPTimestamp() {
    return pTimestamp;
}
void
SamiMeasurement::setPTimestamp(Long* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

String*
SamiMeasurement::getPStartTime() {
    return pStartTime;
}
void
SamiMeasurement::setPStartTime(String* pStartTime) {
    this->pStartTime = pStartTime;
}

SamiHumanTime*
SamiMeasurement::getPHumanTime() {
    return pHumanTime;
}
void
SamiMeasurement::setPHumanTime(SamiHumanTime* pHumanTime) {
    this->pHumanTime = pHumanTime;
}

Double*
SamiMeasurement::getPValue() {
    return pValue;
}
void
SamiMeasurement::setPValue(Double* pValue) {
    this->pValue = pValue;
}

String*
SamiMeasurement::getPUnit() {
    return pUnit;
}
void
SamiMeasurement::setPUnit(String* pUnit) {
    this->pUnit = pUnit;
}

Integer*
SamiMeasurement::getPOriginalValue() {
    return pOriginalValue;
}
void
SamiMeasurement::setPOriginalValue(Integer* pOriginalValue) {
    this->pOriginalValue = pOriginalValue;
}

Double*
SamiMeasurement::getPStoredValue() {
    return pStoredValue;
}
void
SamiMeasurement::setPStoredValue(Double* pStoredValue) {
    this->pStoredValue = pStoredValue;
}

String*
SamiMeasurement::getPStoredAbbreviatedUnitName() {
    return pStoredAbbreviatedUnitName;
}
void
SamiMeasurement::setPStoredAbbreviatedUnitName(String* pStoredAbbreviatedUnitName) {
    this->pStoredAbbreviatedUnitName = pStoredAbbreviatedUnitName;
}

String*
SamiMeasurement::getPOriginalAbbreviatedUnitName() {
    return pOriginalAbbreviatedUnitName;
}
void
SamiMeasurement::setPOriginalAbbreviatedUnitName(String* pOriginalAbbreviatedUnitName) {
    this->pOriginalAbbreviatedUnitName = pOriginalAbbreviatedUnitName;
}

String*
SamiMeasurement::getPAbbreviatedUnitName() {
    return pAbbreviatedUnitName;
}
void
SamiMeasurement::setPAbbreviatedUnitName(String* pAbbreviatedUnitName) {
    this->pAbbreviatedUnitName = pAbbreviatedUnitName;
}

String*
SamiMeasurement::getPNote() {
    return pNote;
}
void
SamiMeasurement::setPNote(String* pNote) {
    this->pNote = pNote;
}



} /* namespace Swagger */


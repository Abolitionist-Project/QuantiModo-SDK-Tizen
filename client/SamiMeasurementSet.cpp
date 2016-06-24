
#include "SamiMeasurementSet.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurementSet::SamiMeasurementSet() {
    init();
}

SamiMeasurementSet::~SamiMeasurementSet() {
    this->cleanup();
}

void
SamiMeasurementSet::init() {
    pMeasurements = null;
pVariableName = null;
pSourceName = null;
pVariableCategoryName = null;
pCombinationOperation = null;
pAbbreviatedUnitName = null;
}

void
SamiMeasurementSet::cleanup() {
    if(pMeasurements != null) {
        pMeasurements->RemoveAll(true);
        delete pMeasurements;
        pMeasurements = null;
    }
if(pVariableName != null) {
        
        delete pVariableName;
        pVariableName = null;
    }
if(pSourceName != null) {
        
        delete pSourceName;
        pSourceName = null;
    }
if(pVariableCategoryName != null) {
        
        delete pVariableCategoryName;
        pVariableCategoryName = null;
    }
if(pCombinationOperation != null) {
        
        delete pCombinationOperation;
        pCombinationOperation = null;
    }
if(pAbbreviatedUnitName != null) {
        
        delete pAbbreviatedUnitName;
        pAbbreviatedUnitName = null;
    }
}


SamiMeasurementSet*
SamiMeasurementSet::fromJson(String* json) {
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
SamiMeasurementSet::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMeasurementsKey = new JsonString(L"measurements");
        IJsonValue* pMeasurementsVal = null;
        pJsonObject->GetValue(pMeasurementsKey, pMeasurementsVal);
        if(pMeasurementsVal != null) {
            pMeasurements = new ArrayList();
            
            jsonToValue(pMeasurements, pMeasurementsVal, L"IList", L"SamiValueObject");
        }
        delete pMeasurementsKey;
JsonString* pVariableNameKey = new JsonString(L"variableName");
        IJsonValue* pVariableNameVal = null;
        pJsonObject->GetValue(pVariableNameKey, pVariableNameVal);
        if(pVariableNameVal != null) {
            
            pVariableName = new String();
            jsonToValue(pVariableName, pVariableNameVal, L"String", L"String");
        }
        delete pVariableNameKey;
JsonString* pSourceNameKey = new JsonString(L"sourceName");
        IJsonValue* pSourceNameVal = null;
        pJsonObject->GetValue(pSourceNameKey, pSourceNameVal);
        if(pSourceNameVal != null) {
            
            pSourceName = new String();
            jsonToValue(pSourceName, pSourceNameVal, L"String", L"String");
        }
        delete pSourceNameKey;
JsonString* pVariableCategoryNameKey = new JsonString(L"variableCategoryName");
        IJsonValue* pVariableCategoryNameVal = null;
        pJsonObject->GetValue(pVariableCategoryNameKey, pVariableCategoryNameVal);
        if(pVariableCategoryNameVal != null) {
            
            pVariableCategoryName = new String();
            jsonToValue(pVariableCategoryName, pVariableCategoryNameVal, L"String", L"String");
        }
        delete pVariableCategoryNameKey;
JsonString* pCombinationOperationKey = new JsonString(L"combinationOperation");
        IJsonValue* pCombinationOperationVal = null;
        pJsonObject->GetValue(pCombinationOperationKey, pCombinationOperationVal);
        if(pCombinationOperationVal != null) {
            
            pCombinationOperation = new String();
            jsonToValue(pCombinationOperation, pCombinationOperationVal, L"String", L"String");
        }
        delete pCombinationOperationKey;
JsonString* pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
        IJsonValue* pAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pAbbreviatedUnitNameKey, pAbbreviatedUnitNameVal);
        if(pAbbreviatedUnitNameVal != null) {
            
            pAbbreviatedUnitName = new String();
            jsonToValue(pAbbreviatedUnitName, pAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pAbbreviatedUnitNameKey;
    }
}

SamiMeasurementSet::SamiMeasurementSet(String* json) {
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
SamiMeasurementSet::asJson ()
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
SamiMeasurementSet::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pMeasurementsKey = new JsonString(L"measurements");
    pJsonObject->Add(pMeasurementsKey, toJson(getPMeasurements(), "SamiValueObject", "array"));

    JsonString *pVariableNameKey = new JsonString(L"variableName");
    pJsonObject->Add(pVariableNameKey, toJson(getPVariableName(), "String", ""));

    JsonString *pSourceNameKey = new JsonString(L"sourceName");
    pJsonObject->Add(pSourceNameKey, toJson(getPSourceName(), "String", ""));

    JsonString *pVariableCategoryNameKey = new JsonString(L"variableCategoryName");
    pJsonObject->Add(pVariableCategoryNameKey, toJson(getPVariableCategoryName(), "String", ""));

    JsonString *pCombinationOperationKey = new JsonString(L"combinationOperation");
    pJsonObject->Add(pCombinationOperationKey, toJson(getPCombinationOperation(), "String", ""));

    JsonString *pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
    pJsonObject->Add(pAbbreviatedUnitNameKey, toJson(getPAbbreviatedUnitName(), "String", ""));

    return pJsonObject;
}

IList*
SamiMeasurementSet::getPMeasurements() {
    return pMeasurements;
}
void
SamiMeasurementSet::setPMeasurements(IList* pMeasurements) {
    this->pMeasurements = pMeasurements;
}

String*
SamiMeasurementSet::getPVariableName() {
    return pVariableName;
}
void
SamiMeasurementSet::setPVariableName(String* pVariableName) {
    this->pVariableName = pVariableName;
}

String*
SamiMeasurementSet::getPSourceName() {
    return pSourceName;
}
void
SamiMeasurementSet::setPSourceName(String* pSourceName) {
    this->pSourceName = pSourceName;
}

String*
SamiMeasurementSet::getPVariableCategoryName() {
    return pVariableCategoryName;
}
void
SamiMeasurementSet::setPVariableCategoryName(String* pVariableCategoryName) {
    this->pVariableCategoryName = pVariableCategoryName;
}

String*
SamiMeasurementSet::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiMeasurementSet::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}

String*
SamiMeasurementSet::getPAbbreviatedUnitName() {
    return pAbbreviatedUnitName;
}
void
SamiMeasurementSet::setPAbbreviatedUnitName(String* pAbbreviatedUnitName) {
    this->pAbbreviatedUnitName = pAbbreviatedUnitName;
}



} /* namespace Swagger */


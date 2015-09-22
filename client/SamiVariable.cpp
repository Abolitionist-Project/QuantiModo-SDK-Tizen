
#include "SamiVariable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariable::SamiVariable() {
    init();
}

SamiVariable::~SamiVariable() {
    this->cleanup();
}

void
SamiVariable::init() {
    pId = null;
    pName = null;
    pOriginalName = null;
    pCategory = null;
    pAbbreviatedUnitName = null;
    pAbbreviatedUnitId = null;
    pSources = null;
    pMinimumValue = null;
    pMaximumValue = null;
    pCombinationOperation = null;
    pFillingValue = null;
    pJoinWith = null;
    pJoinedVariables = null;
    pParent = null;
    pSubVariables = null;
    pOnsetDelay = null;
    pDurationOfAction = null;
    pEarliestMeasurementTime = null;
    pLatestMeasurementTime = null;
    pUpdated = null;
    pCauseOnly = null;
    pNumberOfCorrelations = null;
    pOutcome = null;
    pMeasurementsAtLastAnalysis = null;
    pNumberOfMeasurements = null;
    pLastUnit = null;
    pLastValue = null;
    pMostCommonValue = null;
    pMostCommonUnit = null;
    pLastSource = null;
    
}

void
SamiVariable::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pOriginalName != null) {
        
        delete pOriginalName;
        pOriginalName = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pAbbreviatedUnitName != null) {
        
        delete pAbbreviatedUnitName;
        pAbbreviatedUnitName = null;
    }
    if(pAbbreviatedUnitId != null) {
        
        delete pAbbreviatedUnitId;
        pAbbreviatedUnitId = null;
    }
    if(pSources != null) {
        
        delete pSources;
        pSources = null;
    }
    if(pMinimumValue != null) {
        
        delete pMinimumValue;
        pMinimumValue = null;
    }
    if(pMaximumValue != null) {
        
        delete pMaximumValue;
        pMaximumValue = null;
    }
    if(pCombinationOperation != null) {
        
        delete pCombinationOperation;
        pCombinationOperation = null;
    }
    if(pFillingValue != null) {
        
        delete pFillingValue;
        pFillingValue = null;
    }
    if(pJoinWith != null) {
        
        delete pJoinWith;
        pJoinWith = null;
    }
    if(pJoinedVariables != null) {
        pJoinedVariables->RemoveAll(true);
        delete pJoinedVariables;
        pJoinedVariables = null;
    }
    if(pParent != null) {
        
        delete pParent;
        pParent = null;
    }
    if(pSubVariables != null) {
        pSubVariables->RemoveAll(true);
        delete pSubVariables;
        pSubVariables = null;
    }
    if(pOnsetDelay != null) {
        
        delete pOnsetDelay;
        pOnsetDelay = null;
    }
    if(pDurationOfAction != null) {
        
        delete pDurationOfAction;
        pDurationOfAction = null;
    }
    if(pEarliestMeasurementTime != null) {
        
        delete pEarliestMeasurementTime;
        pEarliestMeasurementTime = null;
    }
    if(pLatestMeasurementTime != null) {
        
        delete pLatestMeasurementTime;
        pLatestMeasurementTime = null;
    }
    if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
    if(pCauseOnly != null) {
        
        delete pCauseOnly;
        pCauseOnly = null;
    }
    if(pNumberOfCorrelations != null) {
        
        delete pNumberOfCorrelations;
        pNumberOfCorrelations = null;
    }
    if(pOutcome != null) {
        
        delete pOutcome;
        pOutcome = null;
    }
    if(pMeasurementsAtLastAnalysis != null) {
        
        delete pMeasurementsAtLastAnalysis;
        pMeasurementsAtLastAnalysis = null;
    }
    if(pNumberOfMeasurements != null) {
        
        delete pNumberOfMeasurements;
        pNumberOfMeasurements = null;
    }
    if(pLastUnit != null) {
        
        delete pLastUnit;
        pLastUnit = null;
    }
    if(pLastValue != null) {
        
        delete pLastValue;
        pLastValue = null;
    }
    if(pMostCommonValue != null) {
        
        delete pMostCommonValue;
        pMostCommonValue = null;
    }
    if(pMostCommonUnit != null) {
        
        delete pMostCommonUnit;
        pMostCommonUnit = null;
    }
    if(pLastSource != null) {
        
        delete pLastSource;
        pLastSource = null;
    }
    
}


SamiVariable*
SamiVariable::fromJson(String* json) {
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
SamiVariable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = null;
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pOriginalNameKey = new JsonString(L"originalName");
        IJsonValue* pOriginalNameVal = null;
        pJsonObject->GetValue(pOriginalNameKey, pOriginalNameVal);
        if(pOriginalNameVal != null) {
            
            pOriginalName = new String();
            jsonToValue(pOriginalName, pOriginalNameVal, L"String", L"String");
        }
        delete pOriginalNameKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
        IJsonValue* pAbbreviatedUnitNameVal = null;
        pJsonObject->GetValue(pAbbreviatedUnitNameKey, pAbbreviatedUnitNameVal);
        if(pAbbreviatedUnitNameVal != null) {
            
            pAbbreviatedUnitName = new String();
            jsonToValue(pAbbreviatedUnitName, pAbbreviatedUnitNameVal, L"String", L"String");
        }
        delete pAbbreviatedUnitNameKey;
        JsonString* pAbbreviatedUnitIdKey = new JsonString(L"abbreviatedUnitId");
        IJsonValue* pAbbreviatedUnitIdVal = null;
        pJsonObject->GetValue(pAbbreviatedUnitIdKey, pAbbreviatedUnitIdVal);
        if(pAbbreviatedUnitIdVal != null) {
            
            pAbbreviatedUnitId = null;
            jsonToValue(pAbbreviatedUnitId, pAbbreviatedUnitIdVal, L"Integer", L"Integer");
        }
        delete pAbbreviatedUnitIdKey;
        JsonString* pSourcesKey = new JsonString(L"sources");
        IJsonValue* pSourcesVal = null;
        pJsonObject->GetValue(pSourcesKey, pSourcesVal);
        if(pSourcesVal != null) {
            
            pSources = new String();
            jsonToValue(pSources, pSourcesVal, L"String", L"String");
        }
        delete pSourcesKey;
        JsonString* pMinimumValueKey = new JsonString(L"minimumValue");
        IJsonValue* pMinimumValueVal = null;
        pJsonObject->GetValue(pMinimumValueKey, pMinimumValueVal);
        if(pMinimumValueVal != null) {
            
            pMinimumValue = new Double();
            jsonToValue(pMinimumValue, pMinimumValueVal, L"Double", L"Double");
        }
        delete pMinimumValueKey;
        JsonString* pMaximumValueKey = new JsonString(L"maximumValue");
        IJsonValue* pMaximumValueVal = null;
        pJsonObject->GetValue(pMaximumValueKey, pMaximumValueVal);
        if(pMaximumValueVal != null) {
            
            pMaximumValue = new Double();
            jsonToValue(pMaximumValue, pMaximumValueVal, L"Double", L"Double");
        }
        delete pMaximumValueKey;
        JsonString* pCombinationOperationKey = new JsonString(L"combinationOperation");
        IJsonValue* pCombinationOperationVal = null;
        pJsonObject->GetValue(pCombinationOperationKey, pCombinationOperationVal);
        if(pCombinationOperationVal != null) {
            
            pCombinationOperation = new String();
            jsonToValue(pCombinationOperation, pCombinationOperationVal, L"String", L"String");
        }
        delete pCombinationOperationKey;
        JsonString* pFillingValueKey = new JsonString(L"fillingValue");
        IJsonValue* pFillingValueVal = null;
        pJsonObject->GetValue(pFillingValueKey, pFillingValueVal);
        if(pFillingValueVal != null) {
            
            pFillingValue = new Double();
            jsonToValue(pFillingValue, pFillingValueVal, L"Double", L"Double");
        }
        delete pFillingValueKey;
        JsonString* pJoinWithKey = new JsonString(L"joinWith");
        IJsonValue* pJoinWithVal = null;
        pJsonObject->GetValue(pJoinWithKey, pJoinWithVal);
        if(pJoinWithVal != null) {
            
            pJoinWith = new String();
            jsonToValue(pJoinWith, pJoinWithVal, L"String", L"String");
        }
        delete pJoinWithKey;
        JsonString* pJoinedVariablesKey = new JsonString(L"joinedVariables");
        IJsonValue* pJoinedVariablesVal = null;
        pJsonObject->GetValue(pJoinedVariablesKey, pJoinedVariablesVal);
        if(pJoinedVariablesVal != null) {
            pJoinedVariables = new ArrayList();
            
            jsonToValue(pJoinedVariables, pJoinedVariablesVal, L"IList", L"SamiVariable");
        }
        delete pJoinedVariablesKey;
        JsonString* pParentKey = new JsonString(L"parent");
        IJsonValue* pParentVal = null;
        pJsonObject->GetValue(pParentKey, pParentVal);
        if(pParentVal != null) {
            
            pParent = null;
            jsonToValue(pParent, pParentVal, L"Integer", L"Integer");
        }
        delete pParentKey;
        JsonString* pSubVariablesKey = new JsonString(L"subVariables");
        IJsonValue* pSubVariablesVal = null;
        pJsonObject->GetValue(pSubVariablesKey, pSubVariablesVal);
        if(pSubVariablesVal != null) {
            pSubVariables = new ArrayList();
            
            jsonToValue(pSubVariables, pSubVariablesVal, L"IList", L"SamiVariable");
        }
        delete pSubVariablesKey;
        JsonString* pOnsetDelayKey = new JsonString(L"onsetDelay");
        IJsonValue* pOnsetDelayVal = null;
        pJsonObject->GetValue(pOnsetDelayKey, pOnsetDelayVal);
        if(pOnsetDelayVal != null) {
            
            pOnsetDelay = null;
            jsonToValue(pOnsetDelay, pOnsetDelayVal, L"Integer", L"Integer");
        }
        delete pOnsetDelayKey;
        JsonString* pDurationOfActionKey = new JsonString(L"durationOfAction");
        IJsonValue* pDurationOfActionVal = null;
        pJsonObject->GetValue(pDurationOfActionKey, pDurationOfActionVal);
        if(pDurationOfActionVal != null) {
            
            pDurationOfAction = null;
            jsonToValue(pDurationOfAction, pDurationOfActionVal, L"Integer", L"Integer");
        }
        delete pDurationOfActionKey;
        JsonString* pEarliestMeasurementTimeKey = new JsonString(L"earliestMeasurementTime");
        IJsonValue* pEarliestMeasurementTimeVal = null;
        pJsonObject->GetValue(pEarliestMeasurementTimeKey, pEarliestMeasurementTimeVal);
        if(pEarliestMeasurementTimeVal != null) {
            
            pEarliestMeasurementTime = null;
            jsonToValue(pEarliestMeasurementTime, pEarliestMeasurementTimeVal, L"Integer", L"Integer");
        }
        delete pEarliestMeasurementTimeKey;
        JsonString* pLatestMeasurementTimeKey = new JsonString(L"latestMeasurementTime");
        IJsonValue* pLatestMeasurementTimeVal = null;
        pJsonObject->GetValue(pLatestMeasurementTimeKey, pLatestMeasurementTimeVal);
        if(pLatestMeasurementTimeVal != null) {
            
            pLatestMeasurementTime = null;
            jsonToValue(pLatestMeasurementTime, pLatestMeasurementTimeVal, L"Integer", L"Integer");
        }
        delete pLatestMeasurementTimeKey;
        JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = null;
            jsonToValue(pUpdated, pUpdatedVal, L"Integer", L"Integer");
        }
        delete pUpdatedKey;
        JsonString* pCauseOnlyKey = new JsonString(L"causeOnly");
        IJsonValue* pCauseOnlyVal = null;
        pJsonObject->GetValue(pCauseOnlyKey, pCauseOnlyVal);
        if(pCauseOnlyVal != null) {
            
            pCauseOnly = null;
            jsonToValue(pCauseOnly, pCauseOnlyVal, L"Integer", L"Integer");
        }
        delete pCauseOnlyKey;
        JsonString* pNumberOfCorrelationsKey = new JsonString(L"numberOfCorrelations");
        IJsonValue* pNumberOfCorrelationsVal = null;
        pJsonObject->GetValue(pNumberOfCorrelationsKey, pNumberOfCorrelationsVal);
        if(pNumberOfCorrelationsVal != null) {
            
            pNumberOfCorrelations = null;
            jsonToValue(pNumberOfCorrelations, pNumberOfCorrelationsVal, L"Integer", L"Integer");
        }
        delete pNumberOfCorrelationsKey;
        JsonString* pOutcomeKey = new JsonString(L"outcome");
        IJsonValue* pOutcomeVal = null;
        pJsonObject->GetValue(pOutcomeKey, pOutcomeVal);
        if(pOutcomeVal != null) {
            
            pOutcome = null;
            jsonToValue(pOutcome, pOutcomeVal, L"Integer", L"Integer");
        }
        delete pOutcomeKey;
        JsonString* pMeasurementsAtLastAnalysisKey = new JsonString(L"measurementsAtLastAnalysis");
        IJsonValue* pMeasurementsAtLastAnalysisVal = null;
        pJsonObject->GetValue(pMeasurementsAtLastAnalysisKey, pMeasurementsAtLastAnalysisVal);
        if(pMeasurementsAtLastAnalysisVal != null) {
            
            pMeasurementsAtLastAnalysis = null;
            jsonToValue(pMeasurementsAtLastAnalysis, pMeasurementsAtLastAnalysisVal, L"Integer", L"Integer");
        }
        delete pMeasurementsAtLastAnalysisKey;
        JsonString* pNumberOfMeasurementsKey = new JsonString(L"numberOfMeasurements");
        IJsonValue* pNumberOfMeasurementsVal = null;
        pJsonObject->GetValue(pNumberOfMeasurementsKey, pNumberOfMeasurementsVal);
        if(pNumberOfMeasurementsVal != null) {
            
            pNumberOfMeasurements = null;
            jsonToValue(pNumberOfMeasurements, pNumberOfMeasurementsVal, L"Integer", L"Integer");
        }
        delete pNumberOfMeasurementsKey;
        JsonString* pLastUnitKey = new JsonString(L"lastUnit");
        IJsonValue* pLastUnitVal = null;
        pJsonObject->GetValue(pLastUnitKey, pLastUnitVal);
        if(pLastUnitVal != null) {
            
            pLastUnit = new String();
            jsonToValue(pLastUnit, pLastUnitVal, L"String", L"String");
        }
        delete pLastUnitKey;
        JsonString* pLastValueKey = new JsonString(L"lastValue");
        IJsonValue* pLastValueVal = null;
        pJsonObject->GetValue(pLastValueKey, pLastValueVal);
        if(pLastValueVal != null) {
            
            pLastValue = null;
            jsonToValue(pLastValue, pLastValueVal, L"Integer", L"Integer");
        }
        delete pLastValueKey;
        JsonString* pMostCommonValueKey = new JsonString(L"mostCommonValue");
        IJsonValue* pMostCommonValueVal = null;
        pJsonObject->GetValue(pMostCommonValueKey, pMostCommonValueVal);
        if(pMostCommonValueVal != null) {
            
            pMostCommonValue = null;
            jsonToValue(pMostCommonValue, pMostCommonValueVal, L"Integer", L"Integer");
        }
        delete pMostCommonValueKey;
        JsonString* pMostCommonUnitKey = new JsonString(L"mostCommonUnit");
        IJsonValue* pMostCommonUnitVal = null;
        pJsonObject->GetValue(pMostCommonUnitKey, pMostCommonUnitVal);
        if(pMostCommonUnitVal != null) {
            
            pMostCommonUnit = new String();
            jsonToValue(pMostCommonUnit, pMostCommonUnitVal, L"String", L"String");
        }
        delete pMostCommonUnitKey;
        JsonString* pLastSourceKey = new JsonString(L"lastSource");
        IJsonValue* pLastSourceVal = null;
        pJsonObject->GetValue(pLastSourceKey, pLastSourceVal);
        if(pLastSourceVal != null) {
            
            pLastSource = null;
            jsonToValue(pLastSource, pLastSourceVal, L"Integer", L"Integer");
        }
        delete pLastSourceKey;
        
    }
}

SamiVariable::SamiVariable(String* json) {
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
SamiVariable::asJson ()
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
SamiVariable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pOriginalNameKey = new JsonString(L"originalName");
    pJsonObject->Add(pOriginalNameKey, toJson(getPOriginalName(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    
    JsonString *pAbbreviatedUnitNameKey = new JsonString(L"abbreviatedUnitName");
    pJsonObject->Add(pAbbreviatedUnitNameKey, toJson(getPAbbreviatedUnitName(), "String", ""));

    
    JsonString *pAbbreviatedUnitIdKey = new JsonString(L"abbreviatedUnitId");
    pJsonObject->Add(pAbbreviatedUnitIdKey, toJson(getPAbbreviatedUnitId(), "Integer", ""));

    
    JsonString *pSourcesKey = new JsonString(L"sources");
    pJsonObject->Add(pSourcesKey, toJson(getPSources(), "String", ""));

    
    JsonString *pMinimumValueKey = new JsonString(L"minimumValue");
    pJsonObject->Add(pMinimumValueKey, toJson(getPMinimumValue(), "Double", ""));

    
    JsonString *pMaximumValueKey = new JsonString(L"maximumValue");
    pJsonObject->Add(pMaximumValueKey, toJson(getPMaximumValue(), "Double", ""));

    
    JsonString *pCombinationOperationKey = new JsonString(L"combinationOperation");
    pJsonObject->Add(pCombinationOperationKey, toJson(getPCombinationOperation(), "String", ""));

    
    JsonString *pFillingValueKey = new JsonString(L"fillingValue");
    pJsonObject->Add(pFillingValueKey, toJson(getPFillingValue(), "Double", ""));

    
    JsonString *pJoinWithKey = new JsonString(L"joinWith");
    pJsonObject->Add(pJoinWithKey, toJson(getPJoinWith(), "String", ""));

    
    JsonString *pJoinedVariablesKey = new JsonString(L"joinedVariables");
    pJsonObject->Add(pJoinedVariablesKey, toJson(getPJoinedVariables(), "SamiVariable", "array"));

    
    JsonString *pParentKey = new JsonString(L"parent");
    pJsonObject->Add(pParentKey, toJson(getPParent(), "Integer", ""));

    
    JsonString *pSubVariablesKey = new JsonString(L"subVariables");
    pJsonObject->Add(pSubVariablesKey, toJson(getPSubVariables(), "SamiVariable", "array"));

    
    JsonString *pOnsetDelayKey = new JsonString(L"onsetDelay");
    pJsonObject->Add(pOnsetDelayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pDurationOfActionKey = new JsonString(L"durationOfAction");
    pJsonObject->Add(pDurationOfActionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pEarliestMeasurementTimeKey = new JsonString(L"earliestMeasurementTime");
    pJsonObject->Add(pEarliestMeasurementTimeKey, toJson(getPEarliestMeasurementTime(), "Integer", ""));

    
    JsonString *pLatestMeasurementTimeKey = new JsonString(L"latestMeasurementTime");
    pJsonObject->Add(pLatestMeasurementTimeKey, toJson(getPLatestMeasurementTime(), "Integer", ""));

    
    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Integer", ""));

    
    JsonString *pCauseOnlyKey = new JsonString(L"causeOnly");
    pJsonObject->Add(pCauseOnlyKey, toJson(getPCauseOnly(), "Integer", ""));

    
    JsonString *pNumberOfCorrelationsKey = new JsonString(L"numberOfCorrelations");
    pJsonObject->Add(pNumberOfCorrelationsKey, toJson(getPNumberOfCorrelations(), "Integer", ""));

    
    JsonString *pOutcomeKey = new JsonString(L"outcome");
    pJsonObject->Add(pOutcomeKey, toJson(getPOutcome(), "Integer", ""));

    
    JsonString *pMeasurementsAtLastAnalysisKey = new JsonString(L"measurementsAtLastAnalysis");
    pJsonObject->Add(pMeasurementsAtLastAnalysisKey, toJson(getPMeasurementsAtLastAnalysis(), "Integer", ""));

    
    JsonString *pNumberOfMeasurementsKey = new JsonString(L"numberOfMeasurements");
    pJsonObject->Add(pNumberOfMeasurementsKey, toJson(getPNumberOfMeasurements(), "Integer", ""));

    
    JsonString *pLastUnitKey = new JsonString(L"lastUnit");
    pJsonObject->Add(pLastUnitKey, toJson(getPLastUnit(), "String", ""));

    
    JsonString *pLastValueKey = new JsonString(L"lastValue");
    pJsonObject->Add(pLastValueKey, toJson(getPLastValue(), "Integer", ""));

    
    JsonString *pMostCommonValueKey = new JsonString(L"mostCommonValue");
    pJsonObject->Add(pMostCommonValueKey, toJson(getPMostCommonValue(), "Integer", ""));

    
    JsonString *pMostCommonUnitKey = new JsonString(L"mostCommonUnit");
    pJsonObject->Add(pMostCommonUnitKey, toJson(getPMostCommonUnit(), "String", ""));

    
    JsonString *pLastSourceKey = new JsonString(L"lastSource");
    pJsonObject->Add(pLastSourceKey, toJson(getPLastSource(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiVariable::getPId() {
    return pId;
}
void
SamiVariable::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiVariable::getPName() {
    return pName;
}
void
SamiVariable::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiVariable::getPOriginalName() {
    return pOriginalName;
}
void
SamiVariable::setPOriginalName(String* pOriginalName) {
    this->pOriginalName = pOriginalName;
}

String*
SamiVariable::getPCategory() {
    return pCategory;
}
void
SamiVariable::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

String*
SamiVariable::getPAbbreviatedUnitName() {
    return pAbbreviatedUnitName;
}
void
SamiVariable::setPAbbreviatedUnitName(String* pAbbreviatedUnitName) {
    this->pAbbreviatedUnitName = pAbbreviatedUnitName;
}

Integer*
SamiVariable::getPAbbreviatedUnitId() {
    return pAbbreviatedUnitId;
}
void
SamiVariable::setPAbbreviatedUnitId(Integer* pAbbreviatedUnitId) {
    this->pAbbreviatedUnitId = pAbbreviatedUnitId;
}

String*
SamiVariable::getPSources() {
    return pSources;
}
void
SamiVariable::setPSources(String* pSources) {
    this->pSources = pSources;
}

Double*
SamiVariable::getPMinimumValue() {
    return pMinimumValue;
}
void
SamiVariable::setPMinimumValue(Double* pMinimumValue) {
    this->pMinimumValue = pMinimumValue;
}

Double*
SamiVariable::getPMaximumValue() {
    return pMaximumValue;
}
void
SamiVariable::setPMaximumValue(Double* pMaximumValue) {
    this->pMaximumValue = pMaximumValue;
}

String*
SamiVariable::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiVariable::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}

Double*
SamiVariable::getPFillingValue() {
    return pFillingValue;
}
void
SamiVariable::setPFillingValue(Double* pFillingValue) {
    this->pFillingValue = pFillingValue;
}

String*
SamiVariable::getPJoinWith() {
    return pJoinWith;
}
void
SamiVariable::setPJoinWith(String* pJoinWith) {
    this->pJoinWith = pJoinWith;
}

IList*
SamiVariable::getPJoinedVariables() {
    return pJoinedVariables;
}
void
SamiVariable::setPJoinedVariables(IList* pJoinedVariables) {
    this->pJoinedVariables = pJoinedVariables;
}

Integer*
SamiVariable::getPParent() {
    return pParent;
}
void
SamiVariable::setPParent(Integer* pParent) {
    this->pParent = pParent;
}

IList*
SamiVariable::getPSubVariables() {
    return pSubVariables;
}
void
SamiVariable::setPSubVariables(IList* pSubVariables) {
    this->pSubVariables = pSubVariables;
}

Integer*
SamiVariable::getPOnsetDelay() {
    return pOnsetDelay;
}
void
SamiVariable::setPOnsetDelay(Integer* pOnsetDelay) {
    this->pOnsetDelay = pOnsetDelay;
}

Integer*
SamiVariable::getPDurationOfAction() {
    return pDurationOfAction;
}
void
SamiVariable::setPDurationOfAction(Integer* pDurationOfAction) {
    this->pDurationOfAction = pDurationOfAction;
}

Integer*
SamiVariable::getPEarliestMeasurementTime() {
    return pEarliestMeasurementTime;
}
void
SamiVariable::setPEarliestMeasurementTime(Integer* pEarliestMeasurementTime) {
    this->pEarliestMeasurementTime = pEarliestMeasurementTime;
}

Integer*
SamiVariable::getPLatestMeasurementTime() {
    return pLatestMeasurementTime;
}
void
SamiVariable::setPLatestMeasurementTime(Integer* pLatestMeasurementTime) {
    this->pLatestMeasurementTime = pLatestMeasurementTime;
}

Integer*
SamiVariable::getPUpdated() {
    return pUpdated;
}
void
SamiVariable::setPUpdated(Integer* pUpdated) {
    this->pUpdated = pUpdated;
}

Integer*
SamiVariable::getPCauseOnly() {
    return pCauseOnly;
}
void
SamiVariable::setPCauseOnly(Integer* pCauseOnly) {
    this->pCauseOnly = pCauseOnly;
}

Integer*
SamiVariable::getPNumberOfCorrelations() {
    return pNumberOfCorrelations;
}
void
SamiVariable::setPNumberOfCorrelations(Integer* pNumberOfCorrelations) {
    this->pNumberOfCorrelations = pNumberOfCorrelations;
}

Integer*
SamiVariable::getPOutcome() {
    return pOutcome;
}
void
SamiVariable::setPOutcome(Integer* pOutcome) {
    this->pOutcome = pOutcome;
}

Integer*
SamiVariable::getPMeasurementsAtLastAnalysis() {
    return pMeasurementsAtLastAnalysis;
}
void
SamiVariable::setPMeasurementsAtLastAnalysis(Integer* pMeasurementsAtLastAnalysis) {
    this->pMeasurementsAtLastAnalysis = pMeasurementsAtLastAnalysis;
}

Integer*
SamiVariable::getPNumberOfMeasurements() {
    return pNumberOfMeasurements;
}
void
SamiVariable::setPNumberOfMeasurements(Integer* pNumberOfMeasurements) {
    this->pNumberOfMeasurements = pNumberOfMeasurements;
}

String*
SamiVariable::getPLastUnit() {
    return pLastUnit;
}
void
SamiVariable::setPLastUnit(String* pLastUnit) {
    this->pLastUnit = pLastUnit;
}

Integer*
SamiVariable::getPLastValue() {
    return pLastValue;
}
void
SamiVariable::setPLastValue(Integer* pLastValue) {
    this->pLastValue = pLastValue;
}

Integer*
SamiVariable::getPMostCommonValue() {
    return pMostCommonValue;
}
void
SamiVariable::setPMostCommonValue(Integer* pMostCommonValue) {
    this->pMostCommonValue = pMostCommonValue;
}

String*
SamiVariable::getPMostCommonUnit() {
    return pMostCommonUnit;
}
void
SamiVariable::setPMostCommonUnit(String* pMostCommonUnit) {
    this->pMostCommonUnit = pMostCommonUnit;
}

Integer*
SamiVariable::getPLastSource() {
    return pLastSource;
}
void
SamiVariable::setPLastSource(Integer* pLastSource) {
    this->pLastSource = pLastSource;
}



} /* namespace Swagger */


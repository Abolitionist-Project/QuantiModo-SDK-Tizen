
#include "SamiCommonVariableRelationship.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCommonVariableRelationship::SamiCommonVariableRelationship() {
    init();
}

SamiCommonVariableRelationship::~SamiCommonVariableRelationship() {
    this->cleanup();
}

void
SamiCommonVariableRelationship::init() {
    pId = null;
    pConfidence_level = null;
    pConfidence_score = null;
    pDirection = null;
    pDuration_of_action = null;
    pError_message = null;
    pOnset_delay = null;
    pOutcome_variable_id = null;
    pPredictor_variable_id = null;
    pPredictor_unit_id = null;
    pSinn_rank = null;
    pStrength_score = null;
    pStrength_level = null;
    pUp_votes = null;
    pDown_votes = null;
    pValue_predicting_high_outcome = null;
    pValue_predicting_low_outcome = null;
    pNumber_of_users = null;
    pData_source = null;
    
}

void
SamiCommonVariableRelationship::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pConfidence_level != null) {
        
        delete pConfidence_level;
        pConfidence_level = null;
    }
    if(pConfidence_score != null) {
        
        delete pConfidence_score;
        pConfidence_score = null;
    }
    if(pDirection != null) {
        
        delete pDirection;
        pDirection = null;
    }
    if(pDuration_of_action != null) {
        
        delete pDuration_of_action;
        pDuration_of_action = null;
    }
    if(pError_message != null) {
        
        delete pError_message;
        pError_message = null;
    }
    if(pOnset_delay != null) {
        
        delete pOnset_delay;
        pOnset_delay = null;
    }
    if(pOutcome_variable_id != null) {
        
        delete pOutcome_variable_id;
        pOutcome_variable_id = null;
    }
    if(pPredictor_variable_id != null) {
        
        delete pPredictor_variable_id;
        pPredictor_variable_id = null;
    }
    if(pPredictor_unit_id != null) {
        
        delete pPredictor_unit_id;
        pPredictor_unit_id = null;
    }
    if(pSinn_rank != null) {
        
        delete pSinn_rank;
        pSinn_rank = null;
    }
    if(pStrength_score != null) {
        
        delete pStrength_score;
        pStrength_score = null;
    }
    if(pStrength_level != null) {
        
        delete pStrength_level;
        pStrength_level = null;
    }
    if(pUp_votes != null) {
        
        delete pUp_votes;
        pUp_votes = null;
    }
    if(pDown_votes != null) {
        
        delete pDown_votes;
        pDown_votes = null;
    }
    if(pValue_predicting_high_outcome != null) {
        
        delete pValue_predicting_high_outcome;
        pValue_predicting_high_outcome = null;
    }
    if(pValue_predicting_low_outcome != null) {
        
        delete pValue_predicting_low_outcome;
        pValue_predicting_low_outcome = null;
    }
    if(pNumber_of_users != null) {
        
        delete pNumber_of_users;
        pNumber_of_users = null;
    }
    if(pData_source != null) {
        
        delete pData_source;
        pData_source = null;
    }
    
}


SamiCommonVariableRelationship*
SamiCommonVariableRelationship::fromJson(String* json) {
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
SamiCommonVariableRelationship::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pConfidence_levelKey = new JsonString(L"confidence_level");
        IJsonValue* pConfidence_levelVal = null;
        pJsonObject->GetValue(pConfidence_levelKey, pConfidence_levelVal);
        if(pConfidence_levelVal != null) {
            
            pConfidence_level = new String();
            jsonToValue(pConfidence_level, pConfidence_levelVal, L"String", L"String");
        }
        delete pConfidence_levelKey;
        JsonString* pConfidence_scoreKey = new JsonString(L"confidence_score");
        IJsonValue* pConfidence_scoreVal = null;
        pJsonObject->GetValue(pConfidence_scoreKey, pConfidence_scoreVal);
        if(pConfidence_scoreVal != null) {
            
            pConfidence_score = new Float();
            jsonToValue(pConfidence_score, pConfidence_scoreVal, L"Float", L"Float");
        }
        delete pConfidence_scoreKey;
        JsonString* pDirectionKey = new JsonString(L"direction");
        IJsonValue* pDirectionVal = null;
        pJsonObject->GetValue(pDirectionKey, pDirectionVal);
        if(pDirectionVal != null) {
            
            pDirection = new String();
            jsonToValue(pDirection, pDirectionVal, L"String", L"String");
        }
        delete pDirectionKey;
        JsonString* pDuration_of_actionKey = new JsonString(L"duration_of_action");
        IJsonValue* pDuration_of_actionVal = null;
        pJsonObject->GetValue(pDuration_of_actionKey, pDuration_of_actionVal);
        if(pDuration_of_actionVal != null) {
            
            pDuration_of_action = new Integer();
            jsonToValue(pDuration_of_action, pDuration_of_actionVal, L"Integer", L"Integer");
        }
        delete pDuration_of_actionKey;
        JsonString* pError_messageKey = new JsonString(L"error_message");
        IJsonValue* pError_messageVal = null;
        pJsonObject->GetValue(pError_messageKey, pError_messageVal);
        if(pError_messageVal != null) {
            
            pError_message = new String();
            jsonToValue(pError_message, pError_messageVal, L"String", L"String");
        }
        delete pError_messageKey;
        JsonString* pOnset_delayKey = new JsonString(L"onset_delay");
        IJsonValue* pOnset_delayVal = null;
        pJsonObject->GetValue(pOnset_delayKey, pOnset_delayVal);
        if(pOnset_delayVal != null) {
            
            pOnset_delay = new Integer();
            jsonToValue(pOnset_delay, pOnset_delayVal, L"Integer", L"Integer");
        }
        delete pOnset_delayKey;
        JsonString* pOutcome_variable_idKey = new JsonString(L"outcome_variable_id");
        IJsonValue* pOutcome_variable_idVal = null;
        pJsonObject->GetValue(pOutcome_variable_idKey, pOutcome_variable_idVal);
        if(pOutcome_variable_idVal != null) {
            
            pOutcome_variable_id = new Integer();
            jsonToValue(pOutcome_variable_id, pOutcome_variable_idVal, L"Integer", L"Integer");
        }
        delete pOutcome_variable_idKey;
        JsonString* pPredictor_variable_idKey = new JsonString(L"predictor_variable_id");
        IJsonValue* pPredictor_variable_idVal = null;
        pJsonObject->GetValue(pPredictor_variable_idKey, pPredictor_variable_idVal);
        if(pPredictor_variable_idVal != null) {
            
            pPredictor_variable_id = new Integer();
            jsonToValue(pPredictor_variable_id, pPredictor_variable_idVal, L"Integer", L"Integer");
        }
        delete pPredictor_variable_idKey;
        JsonString* pPredictor_unit_idKey = new JsonString(L"predictor_unit_id");
        IJsonValue* pPredictor_unit_idVal = null;
        pJsonObject->GetValue(pPredictor_unit_idKey, pPredictor_unit_idVal);
        if(pPredictor_unit_idVal != null) {
            
            pPredictor_unit_id = new Integer();
            jsonToValue(pPredictor_unit_id, pPredictor_unit_idVal, L"Integer", L"Integer");
        }
        delete pPredictor_unit_idKey;
        JsonString* pSinn_rankKey = new JsonString(L"sinn_rank");
        IJsonValue* pSinn_rankVal = null;
        pJsonObject->GetValue(pSinn_rankKey, pSinn_rankVal);
        if(pSinn_rankVal != null) {
            
            pSinn_rank = new Float();
            jsonToValue(pSinn_rank, pSinn_rankVal, L"Float", L"Float");
        }
        delete pSinn_rankKey;
        JsonString* pStrength_scoreKey = new JsonString(L"strength_score");
        IJsonValue* pStrength_scoreVal = null;
        pJsonObject->GetValue(pStrength_scoreKey, pStrength_scoreVal);
        if(pStrength_scoreVal != null) {
            
            pStrength_score = new Float();
            jsonToValue(pStrength_score, pStrength_scoreVal, L"Float", L"Float");
        }
        delete pStrength_scoreKey;
        JsonString* pStrength_levelKey = new JsonString(L"strength_level");
        IJsonValue* pStrength_levelVal = null;
        pJsonObject->GetValue(pStrength_levelKey, pStrength_levelVal);
        if(pStrength_levelVal != null) {
            
            pStrength_level = new String();
            jsonToValue(pStrength_level, pStrength_levelVal, L"String", L"String");
        }
        delete pStrength_levelKey;
        JsonString* pUp_votesKey = new JsonString(L"up_votes");
        IJsonValue* pUp_votesVal = null;
        pJsonObject->GetValue(pUp_votesKey, pUp_votesVal);
        if(pUp_votesVal != null) {
            
            pUp_votes = new Integer();
            jsonToValue(pUp_votes, pUp_votesVal, L"Integer", L"Integer");
        }
        delete pUp_votesKey;
        JsonString* pDown_votesKey = new JsonString(L"down_votes");
        IJsonValue* pDown_votesVal = null;
        pJsonObject->GetValue(pDown_votesKey, pDown_votesVal);
        if(pDown_votesVal != null) {
            
            pDown_votes = new Integer();
            jsonToValue(pDown_votes, pDown_votesVal, L"Integer", L"Integer");
        }
        delete pDown_votesKey;
        JsonString* pValue_predicting_high_outcomeKey = new JsonString(L"value_predicting_high_outcome");
        IJsonValue* pValue_predicting_high_outcomeVal = null;
        pJsonObject->GetValue(pValue_predicting_high_outcomeKey, pValue_predicting_high_outcomeVal);
        if(pValue_predicting_high_outcomeVal != null) {
            
            pValue_predicting_high_outcome = new Float();
            jsonToValue(pValue_predicting_high_outcome, pValue_predicting_high_outcomeVal, L"Float", L"Float");
        }
        delete pValue_predicting_high_outcomeKey;
        JsonString* pValue_predicting_low_outcomeKey = new JsonString(L"value_predicting_low_outcome");
        IJsonValue* pValue_predicting_low_outcomeVal = null;
        pJsonObject->GetValue(pValue_predicting_low_outcomeKey, pValue_predicting_low_outcomeVal);
        if(pValue_predicting_low_outcomeVal != null) {
            
            pValue_predicting_low_outcome = new Float();
            jsonToValue(pValue_predicting_low_outcome, pValue_predicting_low_outcomeVal, L"Float", L"Float");
        }
        delete pValue_predicting_low_outcomeKey;
        JsonString* pNumber_of_usersKey = new JsonString(L"number_of_users");
        IJsonValue* pNumber_of_usersVal = null;
        pJsonObject->GetValue(pNumber_of_usersKey, pNumber_of_usersVal);
        if(pNumber_of_usersVal != null) {
            
            pNumber_of_users = new Integer();
            jsonToValue(pNumber_of_users, pNumber_of_usersVal, L"Integer", L"Integer");
        }
        delete pNumber_of_usersKey;
        JsonString* pData_sourceKey = new JsonString(L"data_source");
        IJsonValue* pData_sourceVal = null;
        pJsonObject->GetValue(pData_sourceKey, pData_sourceVal);
        if(pData_sourceVal != null) {
            
            pData_source = new String();
            jsonToValue(pData_source, pData_sourceVal, L"String", L"String");
        }
        delete pData_sourceKey;
        
    }
}

SamiCommonVariableRelationship::SamiCommonVariableRelationship(String* json) {
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
SamiCommonVariableRelationship::asJson ()
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
SamiCommonVariableRelationship::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pConfidence_levelKey = new JsonString(L"confidence_level");
    pJsonObject->Add(pConfidence_levelKey, toJson(getPConfidenceLevel(), "String", ""));

    
    JsonString *pConfidence_scoreKey = new JsonString(L"confidence_score");
    pJsonObject->Add(pConfidence_scoreKey, toJson(getPConfidenceScore(), "Float", ""));

    
    JsonString *pDirectionKey = new JsonString(L"direction");
    pJsonObject->Add(pDirectionKey, toJson(getPDirection(), "String", ""));

    
    JsonString *pDuration_of_actionKey = new JsonString(L"duration_of_action");
    pJsonObject->Add(pDuration_of_actionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pError_messageKey = new JsonString(L"error_message");
    pJsonObject->Add(pError_messageKey, toJson(getPErrorMessage(), "String", ""));

    
    JsonString *pOnset_delayKey = new JsonString(L"onset_delay");
    pJsonObject->Add(pOnset_delayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pOutcome_variable_idKey = new JsonString(L"outcome_variable_id");
    pJsonObject->Add(pOutcome_variable_idKey, toJson(getPOutcomeVariableId(), "Integer", ""));

    
    JsonString *pPredictor_variable_idKey = new JsonString(L"predictor_variable_id");
    pJsonObject->Add(pPredictor_variable_idKey, toJson(getPPredictorVariableId(), "Integer", ""));

    
    JsonString *pPredictor_unit_idKey = new JsonString(L"predictor_unit_id");
    pJsonObject->Add(pPredictor_unit_idKey, toJson(getPPredictorUnitId(), "Integer", ""));

    
    JsonString *pSinn_rankKey = new JsonString(L"sinn_rank");
    pJsonObject->Add(pSinn_rankKey, toJson(getPSinnRank(), "Float", ""));

    
    JsonString *pStrength_scoreKey = new JsonString(L"strength_score");
    pJsonObject->Add(pStrength_scoreKey, toJson(getPStrengthScore(), "Float", ""));

    
    JsonString *pStrength_levelKey = new JsonString(L"strength_level");
    pJsonObject->Add(pStrength_levelKey, toJson(getPStrengthLevel(), "String", ""));

    
    JsonString *pUp_votesKey = new JsonString(L"up_votes");
    pJsonObject->Add(pUp_votesKey, toJson(getPUpVotes(), "Integer", ""));

    
    JsonString *pDown_votesKey = new JsonString(L"down_votes");
    pJsonObject->Add(pDown_votesKey, toJson(getPDownVotes(), "Integer", ""));

    
    JsonString *pValue_predicting_high_outcomeKey = new JsonString(L"value_predicting_high_outcome");
    pJsonObject->Add(pValue_predicting_high_outcomeKey, toJson(getPValuePredictingHighOutcome(), "Float", ""));

    
    JsonString *pValue_predicting_low_outcomeKey = new JsonString(L"value_predicting_low_outcome");
    pJsonObject->Add(pValue_predicting_low_outcomeKey, toJson(getPValuePredictingLowOutcome(), "Float", ""));

    
    JsonString *pNumber_of_usersKey = new JsonString(L"number_of_users");
    pJsonObject->Add(pNumber_of_usersKey, toJson(getPNumberOfUsers(), "Integer", ""));

    
    JsonString *pData_sourceKey = new JsonString(L"data_source");
    pJsonObject->Add(pData_sourceKey, toJson(getPDataSource(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiCommonVariableRelationship::getPId() {
    return pId;
}
void
SamiCommonVariableRelationship::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiCommonVariableRelationship::getPConfidenceLevel() {
    return pConfidence_level;
}
void
SamiCommonVariableRelationship::setPConfidenceLevel(String* pConfidence_level) {
    this->pConfidence_level = pConfidence_level;
}

Float*
SamiCommonVariableRelationship::getPConfidenceScore() {
    return pConfidence_score;
}
void
SamiCommonVariableRelationship::setPConfidenceScore(Float* pConfidence_score) {
    this->pConfidence_score = pConfidence_score;
}

String*
SamiCommonVariableRelationship::getPDirection() {
    return pDirection;
}
void
SamiCommonVariableRelationship::setPDirection(String* pDirection) {
    this->pDirection = pDirection;
}

Integer*
SamiCommonVariableRelationship::getPDurationOfAction() {
    return pDuration_of_action;
}
void
SamiCommonVariableRelationship::setPDurationOfAction(Integer* pDuration_of_action) {
    this->pDuration_of_action = pDuration_of_action;
}

String*
SamiCommonVariableRelationship::getPErrorMessage() {
    return pError_message;
}
void
SamiCommonVariableRelationship::setPErrorMessage(String* pError_message) {
    this->pError_message = pError_message;
}

Integer*
SamiCommonVariableRelationship::getPOnsetDelay() {
    return pOnset_delay;
}
void
SamiCommonVariableRelationship::setPOnsetDelay(Integer* pOnset_delay) {
    this->pOnset_delay = pOnset_delay;
}

Integer*
SamiCommonVariableRelationship::getPOutcomeVariableId() {
    return pOutcome_variable_id;
}
void
SamiCommonVariableRelationship::setPOutcomeVariableId(Integer* pOutcome_variable_id) {
    this->pOutcome_variable_id = pOutcome_variable_id;
}

Integer*
SamiCommonVariableRelationship::getPPredictorVariableId() {
    return pPredictor_variable_id;
}
void
SamiCommonVariableRelationship::setPPredictorVariableId(Integer* pPredictor_variable_id) {
    this->pPredictor_variable_id = pPredictor_variable_id;
}

Integer*
SamiCommonVariableRelationship::getPPredictorUnitId() {
    return pPredictor_unit_id;
}
void
SamiCommonVariableRelationship::setPPredictorUnitId(Integer* pPredictor_unit_id) {
    this->pPredictor_unit_id = pPredictor_unit_id;
}

Float*
SamiCommonVariableRelationship::getPSinnRank() {
    return pSinn_rank;
}
void
SamiCommonVariableRelationship::setPSinnRank(Float* pSinn_rank) {
    this->pSinn_rank = pSinn_rank;
}

Float*
SamiCommonVariableRelationship::getPStrengthScore() {
    return pStrength_score;
}
void
SamiCommonVariableRelationship::setPStrengthScore(Float* pStrength_score) {
    this->pStrength_score = pStrength_score;
}

String*
SamiCommonVariableRelationship::getPStrengthLevel() {
    return pStrength_level;
}
void
SamiCommonVariableRelationship::setPStrengthLevel(String* pStrength_level) {
    this->pStrength_level = pStrength_level;
}

Integer*
SamiCommonVariableRelationship::getPUpVotes() {
    return pUp_votes;
}
void
SamiCommonVariableRelationship::setPUpVotes(Integer* pUp_votes) {
    this->pUp_votes = pUp_votes;
}

Integer*
SamiCommonVariableRelationship::getPDownVotes() {
    return pDown_votes;
}
void
SamiCommonVariableRelationship::setPDownVotes(Integer* pDown_votes) {
    this->pDown_votes = pDown_votes;
}

Float*
SamiCommonVariableRelationship::getPValuePredictingHighOutcome() {
    return pValue_predicting_high_outcome;
}
void
SamiCommonVariableRelationship::setPValuePredictingHighOutcome(Float* pValue_predicting_high_outcome) {
    this->pValue_predicting_high_outcome = pValue_predicting_high_outcome;
}

Float*
SamiCommonVariableRelationship::getPValuePredictingLowOutcome() {
    return pValue_predicting_low_outcome;
}
void
SamiCommonVariableRelationship::setPValuePredictingLowOutcome(Float* pValue_predicting_low_outcome) {
    this->pValue_predicting_low_outcome = pValue_predicting_low_outcome;
}

Integer*
SamiCommonVariableRelationship::getPNumberOfUsers() {
    return pNumber_of_users;
}
void
SamiCommonVariableRelationship::setPNumberOfUsers(Integer* pNumber_of_users) {
    this->pNumber_of_users = pNumber_of_users;
}

String*
SamiCommonVariableRelationship::getPDataSource() {
    return pData_source;
}
void
SamiCommonVariableRelationship::setPDataSource(String* pData_source) {
    this->pData_source = pData_source;
}



} /* namespace Swagger */


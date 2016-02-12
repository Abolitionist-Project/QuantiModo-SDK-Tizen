/*
 * SamiCommonVariableRelationship.h
 * 
 * 
 */

#ifndef SamiCommonVariableRelationship_H_
#define SamiCommonVariableRelationship_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCommonVariableRelationship: public SamiObject {
public:
    SamiCommonVariableRelationship();
    SamiCommonVariableRelationship(String* json);
    virtual ~SamiCommonVariableRelationship();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCommonVariableRelationship* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPConfidenceLevel();
    void setPConfidenceLevel(String* pConfidence_level);
    
    Float* getPConfidenceScore();
    void setPConfidenceScore(Float* pConfidence_score);
    
    String* getPDirection();
    void setPDirection(String* pDirection);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDuration_of_action);
    
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnset_delay);
    
    Integer* getPOutcomeVariableId();
    void setPOutcomeVariableId(Integer* pOutcome_variable_id);
    
    Integer* getPPredictorVariableId();
    void setPPredictorVariableId(Integer* pPredictor_variable_id);
    
    Integer* getPPredictorUnitId();
    void setPPredictorUnitId(Integer* pPredictor_unit_id);
    
    Float* getPSinnRank();
    void setPSinnRank(Float* pSinn_rank);
    
    Float* getPStrengthScore();
    void setPStrengthScore(Float* pStrength_score);
    
    String* getPStrengthLevel();
    void setPStrengthLevel(String* pStrength_level);
    
    Integer* getPUpVotes();
    void setPUpVotes(Integer* pUp_votes);
    
    Integer* getPDownVotes();
    void setPDownVotes(Integer* pDown_votes);
    
    Float* getPValuePredictingHighOutcome();
    void setPValuePredictingHighOutcome(Float* pValue_predicting_high_outcome);
    
    Float* getPValuePredictingLowOutcome();
    void setPValuePredictingLowOutcome(Float* pValue_predicting_low_outcome);
    
    Integer* getPNumberOfUsers();
    void setPNumberOfUsers(Integer* pNumber_of_users);
    
    String* getPDataSource();
    void setPDataSource(String* pData_source);
    

private:
    Integer* pId;
    String* pConfidence_level;
    Float* pConfidence_score;
    String* pDirection;
    Integer* pDuration_of_action;
    String* pError_message;
    Integer* pOnset_delay;
    Integer* pOutcome_variable_id;
    Integer* pPredictor_variable_id;
    Integer* pPredictor_unit_id;
    Float* pSinn_rank;
    Float* pStrength_score;
    String* pStrength_level;
    Integer* pUp_votes;
    Integer* pDown_votes;
    Float* pValue_predicting_high_outcome;
    Float* pValue_predicting_low_outcome;
    Integer* pNumber_of_users;
    String* pData_source;
    
};

} /* namespace Swagger */

#endif /* SamiCommonVariableRelationship_H_ */

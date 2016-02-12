/*
 * SamiVariableCategory.h
 * 
 * 
 */

#ifndef SamiVariableCategory_H_
#define SamiVariableCategory_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiVariableCategory: public SamiObject {
public:
    SamiVariableCategory();
    SamiVariableCategory(String* json);
    virtual ~SamiVariableCategory();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariableCategory* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPName();
    void setPName(String* pName);
    
    Float* getPFillingValue();
    void setPFillingValue(Float* pFilling_value);
    
    Float* getPMaximumAllowedValue();
    void setPMaximumAllowedValue(Float* pMaximum_allowed_value);
    
    Float* getPMinimumAllowedValue();
    void setPMinimumAllowedValue(Float* pMinimum_allowed_value);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDuration_of_action);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnset_delay);
    
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombination_operation);
    
    Integer* getPUpdated();
    void setPUpdated(Integer* pUpdated);
    
    Boolean* getPCauseOnly();
    void setPCauseOnly(Boolean* pCause_only);
    
    Integer* getPPublic();
    void setPPublic(Integer* pPublic);
    
    Boolean* getPOutcome();
    void setPOutcome(Boolean* pOutcome);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    Integer* getPDefaultUnitId();
    void setPDefaultUnitId(Integer* pDefault_unit_id);
    

private:
    Integer* pId;
    String* pName;
    Float* pFilling_value;
    Float* pMaximum_allowed_value;
    Float* pMinimum_allowed_value;
    Integer* pDuration_of_action;
    Integer* pOnset_delay;
    String* pCombination_operation;
    Integer* pUpdated;
    Boolean* pCause_only;
    Integer* pPublic;
    Boolean* pOutcome;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    String* pImage_url;
    Integer* pDefault_unit_id;
    
};

} /* namespace Swagger */

#endif /* SamiVariableCategory_H_ */

/*
 * SamiVariable.h
 * 
 * 
 */

#ifndef SamiVariable_H_
#define SamiVariable_H_

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

class SamiVariable: public SamiObject {
public:
    SamiVariable();
    SamiVariable(String* json);
    virtual ~SamiVariable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariable* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    Integer* getPParentId();
    void setPParentId(Integer* pParent_id);
    
    String* getPName();
    void setPName(String* pName);
    
    Integer* getPVariableCategoryId();
    void setPVariableCategoryId(Integer* pVariable_category_id);
    
    Integer* getPDefaultUnitId();
    void setPDefaultUnitId(Integer* pDefault_unit_id);
    
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombination_operation);
    
    Float* getPFillingValue();
    void setPFillingValue(Float* pFilling_value);
    
    Float* getPMaximumAllowedValue();
    void setPMaximumAllowedValue(Float* pMaximum_allowed_value);
    
    Float* getPMinimumAllowedValue();
    void setPMinimumAllowedValue(Float* pMinimum_allowed_value);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnset_delay);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDuration_of_action);
    
    Integer* getPPublic();
    void setPPublic(Integer* pPublic);
    
    Boolean* getPCauseOnly();
    void setPCauseOnly(Boolean* pCause_only);
    
    Float* getPMostCommonValue();
    void setPMostCommonValue(Float* pMost_common_value);
    
    Integer* getPMostCommonUnitId();
    void setPMostCommonUnitId(Integer* pMost_common_unit_id);
    
    Float* getPStandardDeviation();
    void setPStandardDeviation(Float* pStandard_deviation);
    
    Float* getPVariance();
    void setPVariance(Float* pVariance);
    
    Float* getPMean();
    void setPMean(Float* pMean);
    
    Float* getPMedian();
    void setPMedian(Float* pMedian);
    
    Float* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Float* pNumber_of_measurements);
    
    Float* getPNumberOfUniqueValues();
    void setPNumberOfUniqueValues(Float* pNumber_of_unique_values);
    
    Float* getPSkewness();
    void setPSkewness(Float* pSkewness);
    
    Float* getPKurtosis();
    void setPKurtosis(Float* pKurtosis);
    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    
    DateTime* getPLastSuccessfulUpdateTime();
    void setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    
    String* getPProductUrl();
    void setPProductUrl(String* pProduct_url);
    
    String* getPImageUrl();
    void setPImageUrl(String* pImage_url);
    
    Float* getPPrice();
    void setPPrice(Float* pPrice);
    
    Integer* getPNumberOfUserVariables();
    void setPNumberOfUserVariables(Integer* pNumber_of_user_variables);
    
    Boolean* getPOutcome();
    void setPOutcome(Boolean* pOutcome);
    
    Float* getPMinimumRecordedValue();
    void setPMinimumRecordedValue(Float* pMinimum_recorded_value);
    
    Float* getPMaximumRecordedValue();
    void setPMaximumRecordedValue(Float* pMaximum_recorded_value);
    

private:
    Integer* pId;
    String* pClient_id;
    Integer* pParent_id;
    String* pName;
    Integer* pVariable_category_id;
    Integer* pDefault_unit_id;
    String* pCombination_operation;
    Float* pFilling_value;
    Float* pMaximum_allowed_value;
    Float* pMinimum_allowed_value;
    Integer* pOnset_delay;
    Integer* pDuration_of_action;
    Integer* pPublic;
    Boolean* pCause_only;
    Float* pMost_common_value;
    Integer* pMost_common_unit_id;
    Float* pStandard_deviation;
    Float* pVariance;
    Float* pMean;
    Float* pMedian;
    Float* pNumber_of_measurements;
    Float* pNumber_of_unique_values;
    Float* pSkewness;
    Float* pKurtosis;
    String* pStatus;
    String* pError_message;
    DateTime* pLast_successful_update_time;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    String* pProduct_url;
    String* pImage_url;
    Float* pPrice;
    Integer* pNumber_of_user_variables;
    Boolean* pOutcome;
    Float* pMinimum_recorded_value;
    Float* pMaximum_recorded_value;
    
};

} /* namespace Swagger */

#endif /* SamiVariable_H_ */

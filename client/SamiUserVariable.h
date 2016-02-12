/*
 * SamiUserVariable.h
 * 
 * 
 */

#ifndef SamiUserVariable_H_
#define SamiUserVariable_H_

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

class SamiUserVariable: public SamiObject {
public:
    SamiUserVariable();
    SamiUserVariable(String* json);
    virtual ~SamiUserVariable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserVariable* fromJson(String* obj);

    
    Integer* getPParentId();
    void setPParentId(Integer* pParent_id);
    
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariable_id);
    
    Integer* getPDefaultUnitId();
    void setPDefaultUnitId(Integer* pDefault_unit_id);
    
    Float* getPMinimumAllowedValue();
    void setPMinimumAllowedValue(Float* pMinimum_allowed_value);
    
    Float* getPMaximumAllowedValue();
    void setPMaximumAllowedValue(Float* pMaximum_allowed_value);
    
    Float* getPFillingValue();
    void setPFillingValue(Float* pFilling_value);
    
    Integer* getPJoinWith();
    void setPJoinWith(Integer* pJoin_with);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnset_delay);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDuration_of_action);
    
    Integer* getPVariableCategoryId();
    void setPVariableCategoryId(Integer* pVariable_category_id);
    
    Integer* getPUpdated();
    void setPUpdated(Integer* pUpdated);
    
    Integer* getPPublic();
    void setPPublic(Integer* pPublic);
    
    Boolean* getPCauseOnly();
    void setPCauseOnly(Boolean* pCause_only);
    
    String* getPFillingType();
    void setPFillingType(String* pFilling_type);
    
    Integer* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Integer* pNumber_of_measurements);
    
    Integer* getPNumberOfProcessedMeasurements();
    void setPNumberOfProcessedMeasurements(Integer* pNumber_of_processed_measurements);
    
    Integer* getPMeasurementsAtLastAnalysis();
    void setPMeasurementsAtLastAnalysis(Integer* pMeasurements_at_last_analysis);
    
    Integer* getPLastUnitId();
    void setPLastUnitId(Integer* pLast_unit_id);
    
    Integer* getPLastOriginalUnitId();
    void setPLastOriginalUnitId(Integer* pLast_original_unit_id);
    
    Float* getPLastValue();
    void setPLastValue(Float* pLast_value);
    
    Integer* getPLastOriginalValue();
    void setPLastOriginalValue(Integer* pLast_original_value);
    
    Integer* getPLastSourceId();
    void setPLastSourceId(Integer* pLast_source_id);
    
    Integer* getPNumberOfCorrelations();
    void setPNumberOfCorrelations(Integer* pNumber_of_correlations);
    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    
    DateTime* getPLastSuccessfulUpdateTime();
    void setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time);
    
    Float* getPStandardDeviation();
    void setPStandardDeviation(Float* pStandard_deviation);
    
    Float* getPVariance();
    void setPVariance(Float* pVariance);
    
    Float* getPMinimumRecordedValue();
    void setPMinimumRecordedValue(Float* pMinimum_recorded_value);
    
    Float* getPMaximumRecordedDailyValue();
    void setPMaximumRecordedDailyValue(Float* pMaximum_recorded_daily_value);
    
    Float* getPMean();
    void setPMean(Float* pMean);
    
    Float* getPMedian();
    void setPMedian(Float* pMedian);
    
    Integer* getPMostCommonUnitId();
    void setPMostCommonUnitId(Integer* pMost_common_unit_id);
    
    Float* getPMostCommonValue();
    void setPMostCommonValue(Float* pMost_common_value);
    
    Float* getPNumberOfUniqueDailyValues();
    void setPNumberOfUniqueDailyValues(Float* pNumber_of_unique_daily_values);
    
    Integer* getPNumberOfChanges();
    void setPNumberOfChanges(Integer* pNumber_of_changes);
    
    Float* getPSkewness();
    void setPSkewness(Float* pSkewness);
    
    Float* getPKurtosis();
    void setPKurtosis(Float* pKurtosis);
    
    Float* getPLatitude();
    void setPLatitude(Float* pLatitude);
    
    Float* getPLongitude();
    void setPLongitude(Float* pLongitude);
    
    String* getPLocation();
    void setPLocation(String* pLocation);
    
    DateTime* getPExperimentStartTime();
    void setPExperimentStartTime(DateTime* pExperiment_start_time);
    
    DateTime* getPExperimentEndTime();
    void setPExperimentEndTime(DateTime* pExperiment_end_time);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    
    Boolean* getPOutcome();
    void setPOutcome(Boolean* pOutcome);
    
    String* getPSources();
    void setPSources(String* pSources);
    
    Integer* getPEarliestSourceTime();
    void setPEarliestSourceTime(Integer* pEarliest_source_time);
    
    Integer* getPLatestSourceTime();
    void setPLatestSourceTime(Integer* pLatest_source_time);
    
    Integer* getPEarliestMeasurementTime();
    void setPEarliestMeasurementTime(Integer* pEarliest_measurement_time);
    
    Integer* getPLatestMeasurementTime();
    void setPLatestMeasurementTime(Integer* pLatest_measurement_time);
    
    Integer* getPEarliestFillingTime();
    void setPEarliestFillingTime(Integer* pEarliest_filling_time);
    
    Integer* getPLatestFillingTime();
    void setPLatestFillingTime(Integer* pLatest_filling_time);
    

private:
    Integer* pParent_id;
    Integer* pUser_id;
    String* pClient_id;
    Integer* pVariable_id;
    Integer* pDefault_unit_id;
    Float* pMinimum_allowed_value;
    Float* pMaximum_allowed_value;
    Float* pFilling_value;
    Integer* pJoin_with;
    Integer* pOnset_delay;
    Integer* pDuration_of_action;
    Integer* pVariable_category_id;
    Integer* pUpdated;
    Integer* pPublic;
    Boolean* pCause_only;
    String* pFilling_type;
    Integer* pNumber_of_measurements;
    Integer* pNumber_of_processed_measurements;
    Integer* pMeasurements_at_last_analysis;
    Integer* pLast_unit_id;
    Integer* pLast_original_unit_id;
    Float* pLast_value;
    Integer* pLast_original_value;
    Integer* pLast_source_id;
    Integer* pNumber_of_correlations;
    String* pStatus;
    String* pError_message;
    DateTime* pLast_successful_update_time;
    Float* pStandard_deviation;
    Float* pVariance;
    Float* pMinimum_recorded_value;
    Float* pMaximum_recorded_daily_value;
    Float* pMean;
    Float* pMedian;
    Integer* pMost_common_unit_id;
    Float* pMost_common_value;
    Float* pNumber_of_unique_daily_values;
    Integer* pNumber_of_changes;
    Float* pSkewness;
    Float* pKurtosis;
    Float* pLatitude;
    Float* pLongitude;
    String* pLocation;
    DateTime* pExperiment_start_time;
    DateTime* pExperiment_end_time;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    Boolean* pOutcome;
    String* pSources;
    Integer* pEarliest_source_time;
    Integer* pLatest_source_time;
    Integer* pEarliest_measurement_time;
    Integer* pLatest_measurement_time;
    Integer* pEarliest_filling_time;
    Integer* pLatest_filling_time;
    
};

} /* namespace Swagger */

#endif /* SamiUserVariable_H_ */

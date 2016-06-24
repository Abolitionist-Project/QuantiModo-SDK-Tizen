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


#include "SamiVariable.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
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
    String* getPName();
    void setPName(String* pName);
    String* getPOriginalName();
    void setPOriginalName(String* pOriginalName);
    String* getPCategory();
    void setPCategory(String* pCategory);
    String* getPAbbreviatedUnitName();
    void setPAbbreviatedUnitName(String* pAbbreviatedUnitName);
    Integer* getPAbbreviatedUnitId();
    void setPAbbreviatedUnitId(Integer* pAbbreviatedUnitId);
    String* getPSources();
    void setPSources(String* pSources);
    Double* getPMinimumValue();
    void setPMinimumValue(Double* pMinimumValue);
    Double* getPMaximumValue();
    void setPMaximumValue(Double* pMaximumValue);
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);
    Double* getPFillingValue();
    void setPFillingValue(Double* pFillingValue);
    String* getPJoinWith();
    void setPJoinWith(String* pJoinWith);
    IList* getPJoinedVariables();
    void setPJoinedVariables(IList* pJoinedVariables);
    Integer* getPParent();
    void setPParent(Integer* pParent);
    IList* getPSubVariables();
    void setPSubVariables(IList* pSubVariables);
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnsetDelay);
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDurationOfAction);
    Integer* getPEarliestMeasurementTime();
    void setPEarliestMeasurementTime(Integer* pEarliestMeasurementTime);
    Integer* getPLatestMeasurementTime();
    void setPLatestMeasurementTime(Integer* pLatestMeasurementTime);
    Integer* getPUpdated();
    void setPUpdated(Integer* pUpdated);
    Integer* getPCauseOnly();
    void setPCauseOnly(Integer* pCauseOnly);
    Integer* getPNumberOfCorrelations();
    void setPNumberOfCorrelations(Integer* pNumberOfCorrelations);
    Integer* getPOutcome();
    void setPOutcome(Integer* pOutcome);
    Integer* getPMeasurementsAtLastAnalysis();
    void setPMeasurementsAtLastAnalysis(Integer* pMeasurementsAtLastAnalysis);
    Integer* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Integer* pNumberOfMeasurements);
    String* getPLastUnit();
    void setPLastUnit(String* pLastUnit);
    Integer* getPLastValue();
    void setPLastValue(Integer* pLastValue);
    Integer* getPMostCommonValue();
    void setPMostCommonValue(Integer* pMostCommonValue);
    String* getPMostCommonUnit();
    void setPMostCommonUnit(String* pMostCommonUnit);
    Integer* getPLastSource();
    void setPLastSource(Integer* pLastSource);

private:
    Integer* pId;
String* pName;
String* pOriginalName;
String* pCategory;
String* pAbbreviatedUnitName;
Integer* pAbbreviatedUnitId;
String* pSources;
Double* pMinimumValue;
Double* pMaximumValue;
String* pCombinationOperation;
Double* pFillingValue;
String* pJoinWith;
IList* pJoinedVariables;
Integer* pParent;
IList* pSubVariables;
Integer* pOnsetDelay;
Integer* pDurationOfAction;
Integer* pEarliestMeasurementTime;
Integer* pLatestMeasurementTime;
Integer* pUpdated;
Integer* pCauseOnly;
Integer* pNumberOfCorrelations;
Integer* pOutcome;
Integer* pMeasurementsAtLastAnalysis;
Integer* pNumberOfMeasurements;
String* pLastUnit;
Integer* pLastValue;
Integer* pMostCommonValue;
String* pMostCommonUnit;
Integer* pLastSource;
};

} /* namespace Swagger */

#endif /* SamiVariable_H_ */

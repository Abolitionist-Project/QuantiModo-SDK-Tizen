/*
 * SamiMeasurementSet.h
 * 
 * 
 */

#ifndef SamiMeasurementSet_H_
#define SamiMeasurementSet_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiValueObject.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiMeasurementSet: public SamiObject {
public:
    SamiMeasurementSet();
    SamiMeasurementSet(String* json);
    virtual ~SamiMeasurementSet();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementSet* fromJson(String* obj);

    IList* getPMeasurements();
    void setPMeasurements(IList* pMeasurements);
    String* getPVariableName();
    void setPVariableName(String* pVariableName);
    String* getPSourceName();
    void setPSourceName(String* pSourceName);
    String* getPVariableCategoryName();
    void setPVariableCategoryName(String* pVariableCategoryName);
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);
    String* getPAbbreviatedUnitName();
    void setPAbbreviatedUnitName(String* pAbbreviatedUnitName);

private:
    IList* pMeasurements;
String* pVariableName;
String* pSourceName;
String* pVariableCategoryName;
String* pCombinationOperation;
String* pAbbreviatedUnitName;
};

} /* namespace Swagger */

#endif /* SamiMeasurementSet_H_ */
